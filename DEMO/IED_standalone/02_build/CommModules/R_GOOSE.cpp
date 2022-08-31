/*
 *  R_GOOSE.cpp
 *
 *  Copyright 2022 ADSC
 *
 *  This file is part of SGCR.
 *
 *  SGCR is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  SGCR is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with SGCR. If not, see <http://www.gnu.org/licenses/>.
 *
 */
 
#include <thread>
#include <chrono>
#include <limits.h>
#include <errno.h>
#include <string.h>

//socket
#include <arpa/inet.h>
#include <netinet/in.h>
#include <sys/socket.h>
#include <sys/types.h>

#include "R_GOOSE.h"
#include "UDPSendUtils.h"
#include "Utils.h"

#include "ModelMutex.h"
#include "static_model.h"

#define INITIALIZE_VIEW true
#define UPDATE_VIEW false

//TO DO: varying intervals
#define R_GOOSE_INTERVAL 1000 //millis

using namespace std;

/* For storing strerror_r() output*/
static char errormsg[100] = {};
static int error_msg_sz = 100;

R_GOOSEModule::R_GOOSEModule(vector<string> &gocb_refs,
                            vector<string> &dataSet_names,
                            vector<string> &app_IDs,
                            vector<vector<string>> &data_attrs,
                            vector<string> &multicast_ips,
                            string &local_ip) {
    LOG(DEBUG, "Creating new RGOOSEModule >>>>>>>>>>>>>\n");
    
    int res = 0;

    if (gocb_refs.size() != dataSet_names.size() ||
            dataSet_names.size() != app_IDs.size() ||
            app_IDs.size() != data_attrs.size() ||
            data_attrs.size() != multicast_ips.size()) {
        LOG(ERROR, "R-Goose Module failed! Vector sizes not equal\n");
        return;
    }

    LOG(DEBUG, "Local IP address = %s", local_ip.c_str());
    in_addr local_if;
    inet_pton(AF_INET, local_ip.c_str(), &local_if);
    LOG(DEBUG, " (0x%X)\n", local_if.s_addr);
    
    for (int i = 0; i < gocb_refs.size(); i++) {
        LOG(DEBUG, "GooseCtlBlock[%d]\n", i);
        GooseCtlBlk_t new_blk;

        new_blk.gocb_ref = gocb_refs[i];
        LOG(DEBUG, "GOCB_REF: %s\n", new_blk.gocb_ref.c_str());
        new_blk.dataSet_name = dataSet_names[i];
        LOG(DEBUG, "DATASET: %s\n", new_blk.dataSet_name.c_str());
        new_blk.app_ID = app_IDs[i];
        LOG(DEBUG, "APP_ID: %s\n", new_blk.app_ID.c_str());

        vector<string> &da_grp  = data_attrs[i];
        for (string &da_str : da_grp) {
            DataAttribute *da = (DataAttribute *) IedModel_getModelNodeByObjectReference(&iedModel, da_str.c_str());

            if (da == NULL) {
                LOG(ERROR, "DataAttribute not found for %s\n", da_str.c_str());
                continue;
            }

            LOG(DEBUG, "DataAttr: %s(%d)\n", da_str.c_str(),da->type);
            
            MmsValue *mms_val = nullptr;
            
            if(da->type == IEC61850_BOOLEAN) {
                mms_val = MmsValue_newBoolean(true);
            }
            else if (da->type == IEC61850_CODEDENUM) {
                mms_val = Dbpos_toMmsValue(NULL, DBPOS_ON);
            }
            else {
                LOG(ERROR, "DataAttribute type is not BOOLEAN/CODEDENUM for %s\n", da_str.c_str());
                continue;
            }

            if (mms_val == nullptr) {
                continue;
            }

            new_blk.da_refs.push_back(da);
            new_blk.da_view.push_back(mms_val); 
        }

        // Setup UDP socket
        int &sock_d = new_blk.sock_d;
        sock_d = socket(AF_INET, SOCK_DGRAM, 0);
        // Set local network interface to send multicast messages
        if ((res = setsockopt(sock_d, IPPROTO_IP, IP_MULTICAST_IF, 
                        (char*)&local_if, sizeof(local_if))) != 0) {
            strerror_r(errno, errormsg, error_msg_sz);
            LOG(ERROR, "Fail to setup multicast (%s)\n", errormsg);
            continue;
        }
        // Set TTL
        int ttl = 16;
        if ((res = setsockopt(sock_d, IPPROTO_IP, IP_MULTICAST_TTL, 
                        &ttl, sizeof(ttl))) != 0) {
            strerror_r(errno, errormsg, error_msg_sz);
            LOG(ERROR, "Fail to set TTL for socket (%s)\n", errormsg);
            continue;
        }
        LOG(DEBUG, "Socket_d = %d\n", sock_d);

        
        //Setup multicast target
        LOG(DEBUG, "Multicast IP address = %s", multicast_ips[i].c_str());
        sockaddr_in &group_sock = new_blk.group_sock;
        group_sock = {};   // init to all zeroes
        group_sock.sin_family = AF_INET;
        group_sock.sin_port = htons(102); //target UDP port 
        inet_pton(AF_INET, multicast_ips[i].c_str(), &(group_sock.sin_addr));
        LOG(DEBUG, " (0x%X)\n", group_sock.sin_addr.s_addr);

        new_blk.multicast_ip = multicast_ips[i];

        ctl_blks.push_back(new_blk);
    }
    
    LOG(DEBUG, ">>>>>>>>>>>>>>>>>> RGOOSEModule created\n");
}

void R_GOOSEModule::start() {
    LOG(INFO, "R_GOOSE: start\n");

    //let model updater initialize model
    this_thread::sleep_for(chrono::milliseconds(1000));

    //initialize view
    update_view(INITIALIZE_VIEW);

    thread send_thread(&start_send, ref(*this));
    
    while (ied_running) {
        update_view(UPDATE_VIEW);
        this_thread::sleep_for(chrono::milliseconds(10));
    }

    send_thread.join();
        
    for (GooseCtlBlk_t gse_blk : ctl_blks) {
        close(gse_blk.sock_d);
    }

    LOG(INFO,"R_GOOSE: stop\n");
}

//Thread to periodically send R-GOOSE
void R_GOOSEModule::start_send(R_GOOSEModule &rgoose_mod) {
    bool test = false;
    while (ied_running) {
        for (int i = 0; i < rgoose_mod.ctl_blks.size(); i++) {
            rgoose_mod.send_rgoose_packet(i);
        }
        this_thread::sleep_for(chrono::milliseconds(R_GOOSE_INTERVAL));
    }
}

void R_GOOSEModule::update_view(bool mode) {
    //LOG(DEBUG, "R-GOOSE: Updating view\n");
    for (int i = 0; i < ctl_blks.size(); i++) {
        GooseCtlBlk_t &gse_blk = ctl_blks[i];
        //LOG(DEBUG, "GOOSECtlBlk[%d]\n", i);

        vector<DataAttribute*> &da_refs = gse_blk.da_refs;
        vector<MmsValue*> &da_view = gse_blk.da_view;

        for (int j = 0; j < da_refs.size(); j++) {
            DataAttribute *da = da_refs[j];
            //LOG(DEBUG, "\tDataAttr[%d]\n", j);
            unique_lock<mutex> lock(static_model_lock);
            MmsValue *mms_val = da->mmsValue;

            if (mode == INITIALIZE_VIEW) {
                if (mms_val == NULL) {
                    if (da->type == IEC61850_CODEDENUM){
                        mms_val = da->mmsValue = Dbpos_toMmsValue(NULL,DBPOS_ON);            
                    }
                    else if (da->type == IEC61850_BOOLEAN){
                        mms_val = da->mmsValue = MmsValue_newBoolean(true);                    
                    }
                }
            }         
            
            lock.unlock();
            
            if(da->type == IEC61850_CODEDENUM)
            {
                Dbpos new_val = Dbpos_fromMmsValue(mms_val);

                if (new_val != Dbpos_fromMmsValue(da_view[j]))
                {
                    LOG(DEBUG, "\tChanged value\n"); 
                    MmsValue_update(da_view[i], mms_val);

                    if (mode == UPDATE_VIEW) {
                        (gse_blk.stNum < UINT_MAX) ? gse_blk.stNum++ : gse_blk.stNum = 0;
                        gse_blk.sqNum = 0;
                        send_rgoose_packet(i);
                        LOG(DEBUG, "stNum = %u, sqNum = %u\n", gse_blk.stNum, gse_blk.sqNum-1);
                    }
                }
                else {
                //LOG(DEBUG, "\tNo change\n");
                }
            }
            else if(da->type == IEC61850_BOOLEAN)
            {
                bool new_val = MmsValue_getBoolean(mms_val);
                if (new_val != MmsValue_getBoolean(da_view[j]))
                {
                    LOG(DEBUG, "\tChanged value\n"); 
                    MmsValue_update(da_view[i], mms_val);
                    if (mode == UPDATE_VIEW) {
                        (gse_blk.stNum < UINT_MAX) ? gse_blk.stNum++ : gse_blk.stNum = 0;
                        gse_blk.sqNum = 0;
                        send_rgoose_packet(i);
                        LOG(DEBUG, "stNum = %u, sqNum = %u\n", gse_blk.stNum, gse_blk.sqNum-1);
                    }
                }
                else {
                //LOG(DEBUG, "\tNo change\n");
                }
            }      

        }
        //if (mode == INITIALIZE_VIEW)
            //LOG(DEBUG, "stNum = %u\nsqNum = %u\n", gse_blk.stNum, gse_blk.sqNum);
    }
}

void R_GOOSEModule::send_rgoose_packet(unsigned int ctl_blk_idx) {
    int res = 0;

    vector<unsigned char> gse_pdu;
    vector<unsigned char> output;

    GooseCtlBlk_t &gse_blk = ctl_blks[ctl_blk_idx];

    form_rgoose_pdu(gse_blk, gse_pdu);
    UDPSendUtils::form_UDP_packet(gse_pdu, output, gse_blk.spduNum, R_GOOSE_MODE);

    //LOG(DEBUG, "Sending R-GOOSE from sock_d(%d) to %s\n", gse_blk.sock_d, gse_blk.multicast_ip.c_str());

    if ((res = sendto(gse_blk.sock_d, &output[0], output.size(), 0,
                    (sockaddr*)&gse_blk.group_sock, sizeof(gse_blk.group_sock))) <= 0) {
        strerror_r(errno, errormsg, error_msg_sz);
        LOG(ERROR, "Fail to send R-GOOSE for %s (%s)\n", gse_blk.multicast_ip.c_str(), errormsg);
    }

    (gse_blk.sqNum < UINT_MAX) ? gse_blk.sqNum++ : gse_blk.sqNum = 1;
}

void R_GOOSEModule::form_rgoose_pdu(GooseCtlBlk_t &gse_blk, vector<unsigned char> &payloadOut) {
    vector<unsigned char> pduOut;

    /* Initialize variables for GOOSE PDU data */
    unsigned char goosePDU_Tag{0x61};
    unsigned char goosePDU_Tag2{0x81};
    unsigned char goosePDU_Len{};         // Includes GOOSE PDU Tag & Len and every component's length

    // *** GOOSE PDU -> gocbRef ***
    unsigned char gocbRef_Tag{0x80};
    unsigned char gocbRef_Len{static_cast<unsigned char>(gse_blk.gocb_ref.length())};  // Maximum size of 65 bytes by specification
    std::vector<unsigned char> gocbRef_Value{gse_blk.gocb_ref.begin(), gse_blk.gocb_ref.end()};

    // *** GOOSE PDU -> timeAllowedToLive (in ms) ***
    unsigned char timeAllowedToLive_Tag{0x81};
    unsigned char timeAllowedToLive_Len{};
    unsigned int timeAllowedToLive_Value{};             // Depends on sqNum

    // *** GOOSE PDU -> datSet ***
    unsigned char datSet_Tag{0x82};
    unsigned char datSet_Len{static_cast<unsigned char>(gse_blk.dataSet_name.length())};   // Maximum size of 65 bytes by specification
    std::vector<unsigned char> datSet_Value{gse_blk.dataSet_name.begin(), gse_blk.dataSet_name.end()};

    // *** GOOSE PDU -> goID ***
    unsigned char goID_Tag{0x83};
    unsigned char goID_Len{static_cast<unsigned char>(gse_blk.gocb_ref.length())};  // Maximum size of 65 bytes by specification
    std::vector<unsigned char> goID_Value{gse_blk.gocb_ref.begin(), gse_blk.gocb_ref.end()};

    // *** GOOSE PDU -> t ***
    unsigned char time_Tag{0x84};
    const unsigned char time_Len{0x08};
    /*
     * Bit 7 = 0: Leap Second NOT Known
     * Bit 6 = 0: Not ClockFailure
     * Bit 5 = 0: Clock Synchronized
     * Bits 4-0 = 01010: 10-bits of accuracy [HARDCODING]
     */
    std::array<unsigned char, time_Len> time_Value{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0a};

    // *** GOOSE PDU -> stNum ***
    unsigned char stNum_Tag{0x85};
    unsigned char stNum_Len{};
    unsigned int stNum_Value = gse_blk.stNum;
    vector<unsigned char> stNum_ValVec{};

    // *** GOOSE PDU -> sqNum ***
    unsigned char sqNum_Tag{0x86};
    unsigned char sqNum_Len{};
    unsigned int sqNum_Value = gse_blk.sqNum;
    vector<unsigned char> sqNum_ValVec{};

    // *** GOOSE PDU -> test ***
    unsigned char test_Tag{0x87};
    const unsigned char test_Len{1};
    unsigned char test_Value{0};        // 0 = Boolean false

    // *** GOOSE PDU -> confRev ***
    unsigned char confRev_Tag{0x88};
    unsigned char confRev_Len{1};       // Len = 1 since value is fixed as 1
    unsigned char confRev_Value{1};     // [Deviation] UINT32 type by specification
                                        // - specifying the number of times configuration of data set has been changed

    // *** GOOSE PDU -> ndsCom ***
    unsigned char ndsCom_Tag{0x89};
    const unsigned char ndsCom_Len{1};
    unsigned char ndsCom_Value{0};      // 0 = Boolean false (does not need commissioning)

    // *** GOOSE PDU -> numDatSetEntries ***
    unsigned char numDatSetEntries_Tag{0x8A};
    unsigned char numDatSetEntries_Len{1};
    unsigned char numDatSetEntries_Value{(unsigned char) gse_blk.da_refs.size()};  // depends on how many data attributes to include (fix to 1 as of now)

    // *** GOOSE PDU -> allData ***
    unsigned char allData_Tag{0xAB};
    unsigned char allData_Len{};
    vector<unsigned char> allData_Value{};

    // *** start forming GOOSE PDU from bottom of structure ***
    //     because some components at the top are dependent on others at the bottom

    for (MmsValue* val : gse_blk.da_view)
    {
    //for (bool val : gse_blk.da_view) {
        /* GOOSE data set encoded based on the MMS adapted ASN.1/BER rule */
        if (MmsValue_getType(val) == MMS_BOOLEAN)
        {
            allData_Value.push_back(0x83); // Tag = 0x83 -> Data type: Boolean
            allData_Value.push_back(0x01); // Length = 0x01
            MmsValue_getBoolean(val) ? allData_Value.push_back(0x01) : allData_Value.push_back(0x00);
        }
        else if (MmsValue_getType(val) == MMS_BIT_STRING)
        {
            allData_Value.push_back(0x84); // Tag = 0x84 -> Data type: Dbpos
            allData_Value.push_back(0x01); // Length = 0x01
            uint8_t dbpos_val = Dbpos_fromMmsValue(val);
            allData_Value.push_back(dbpos_val);
        }
        else{
            LOG(DEBUG, "Data Type from MmsValue_getType(val) %d not supported.\n", MmsValue_getType(val));
        }
    }

    allData_Len = allData_Value.size();
    LOG(DEBUG, "allData len %u\n", allData_Len);

    // (viii) to (xi) no changes from initialization

    // (vi) stNum & (vii) Set sqNum
    stNum_Len = Utils::getUINT32Length(stNum_Value);
    Utils::convertUINT32IntoBytes(stNum_Value, stNum_ValVec);
    sqNum_Len = Utils::getUINT32Length(sqNum_Value);
    Utils::convertUINT32IntoBytes(sqNum_Value, sqNum_ValVec);

    // (v) t (i.e. UTC time stamp)
    Utils::set_timestamp(time_Value);

   // (iii) datSet & (iv) goID no changes from initialization

    // (ii) timeAllowedToLive (in milliseconds)
    if (sqNum_Value <= 5)
    {
        timeAllowedToLive_Value = 20;   // 0x14
        timeAllowedToLive_Len = 0x01;
    }
    else if (sqNum_Value == 6)
    {
        timeAllowedToLive_Value = 32;   // 0x20
        timeAllowedToLive_Len = 0x01;
    }
    else if (sqNum_Value == 7)
    {
        timeAllowedToLive_Value = 64;   // 0x40
        timeAllowedToLive_Len = 0x01;
    }
    else if (sqNum_Value == 8)
    {
        timeAllowedToLive_Value = 128;
        timeAllowedToLive_Len = 0x01;   // 0x80
    }
    else if (sqNum_Value == 9)
    {
        timeAllowedToLive_Value = 256;  // 0x0100
        timeAllowedToLive_Len = 0x02;
    }
    else if (sqNum_Value == 10)
    {
        timeAllowedToLive_Value = 512;  // 0x0200
        timeAllowedToLive_Len = 0x02;
    }
    else if (sqNum_Value == 11)
    {
        timeAllowedToLive_Value = 1024; // 0x0400
        timeAllowedToLive_Len = 0x02;
    }
    else if (sqNum_Value == 12)
    {
        timeAllowedToLive_Value = 2048; // 0x0800
        timeAllowedToLive_Len = 0x02;
    }
    else if (sqNum_Value >= 13)
    {
        timeAllowedToLive_Value = 4000; // 0x0FA0
        timeAllowedToLive_Len = 0x02;
    }

    // (i) gocbRef no changes from initialization


    /* Fill up pduOut for "returning" */
    pduOut.push_back(goosePDU_Tag);     // index 0
    pduOut.push_back(goosePDU_Tag2);    // index 1
    pduOut.push_back(goosePDU_Len);     // index 2: here, GOOSE PDU Length is not yet computed/assigned

    pduOut.push_back(gocbRef_Tag);
    pduOut.push_back(gocbRef_Len);
    pduOut.insert(pduOut.end(), gocbRef_Value.begin(), gocbRef_Value.end());

    pduOut.push_back(timeAllowedToLive_Tag);
    pduOut.push_back(timeAllowedToLive_Len);
    vector<unsigned char> timeAllowedToLive_ValVec{};
    Utils::convertUINT32IntoBytes(timeAllowedToLive_Value, timeAllowedToLive_ValVec);
    pduOut.insert(pduOut.end(), timeAllowedToLive_ValVec.begin(), timeAllowedToLive_ValVec.end());

    pduOut.push_back(datSet_Tag);
    pduOut.push_back(datSet_Len);
    pduOut.insert(pduOut.end(), datSet_Value.begin(), datSet_Value.end());

    pduOut.push_back(goID_Tag);
    pduOut.push_back(goID_Len);
    pduOut.insert(pduOut.end(), goID_Value.begin(), goID_Value.end());

    pduOut.push_back(time_Tag);
    pduOut.push_back(time_Len);
    pduOut.insert(pduOut.end(), time_Value.begin(), time_Value.end());

    pduOut.push_back(stNum_Tag);
    pduOut.push_back(stNum_Len);
    pduOut.insert(pduOut.end(), stNum_ValVec.begin(), stNum_ValVec.end());

    pduOut.push_back(sqNum_Tag);
    pduOut.push_back(sqNum_Len);
    pduOut.insert(pduOut.end(), sqNum_ValVec.begin(), sqNum_ValVec.end());

    pduOut.push_back(test_Tag);
    pduOut.push_back(test_Len);
    pduOut.push_back(test_Value);

    pduOut.push_back(confRev_Tag);
    pduOut.push_back(confRev_Len);
    pduOut.push_back(confRev_Value);

    pduOut.push_back(ndsCom_Tag);
    pduOut.push_back(ndsCom_Len);
    pduOut.push_back(ndsCom_Value);

    pduOut.push_back(numDatSetEntries_Tag);
    pduOut.push_back(numDatSetEntries_Len);
    pduOut.push_back(numDatSetEntries_Value);

    pduOut.push_back(allData_Tag);
    pduOut.push_back(allData_Len);
    pduOut.insert(pduOut.end(), allData_Value.begin(), allData_Value.end());

    pduOut[2] = pduOut.size();

    //PDU DONE

    // Payload Type 0x81: non-tunneled GOOSE APDU
    payloadOut.push_back(0x81);

    // For forming Payload in Application Profile
    /* Continue forming Payload */
    // Simulation 0x00: Boolean False = payload not sent for test
    payloadOut.push_back(0x00);

    // APP ID
    unsigned long raw_converted_appid = std::stoul(gse_blk.app_ID,nullptr,16);
    payloadOut.push_back(static_cast<unsigned char>( (raw_converted_appid >> 8) & 0xFF ));
    payloadOut.push_back(static_cast<unsigned char>( (raw_converted_appid     ) & 0xFF ));

    // APDU Length
    size_t apdu_len{pduOut.size() + 2};  // Length of SV or GOOSE PDU plus the APDU Length field itself
    payloadOut.push_back(static_cast<unsigned char>( (apdu_len >> 8) & 0xFF ));
    payloadOut.push_back(static_cast<unsigned char>( (apdu_len     ) & 0xFF ));

    // PDU
    payloadOut.insert(payloadOut.end(), pduOut.begin(), pduOut.end());  // Payload completely formed here
}

void R_GOOSEModule::print() {
    printf("R-GOOSE module configuration:\n");
    printf("Number of Goose Ctl Blocks = %ld\n", ctl_blks.size());
    for (int i = 0; i < ctl_blks.size(); i++) {
        GooseCtlBlk_t &gse_blk = ctl_blks[i];
        printf("GooseCtlBlock[%d]---------------------------\n", i);

        vector<DataAttribute*> &da_refs = gse_blk.da_refs;
        printf("DataRefs:\n");
        for (DataAttribute *da : da_refs) {
            printf("\tRef here\n");
        }

        printf("Multicast IP:\n\t%s", gse_blk.multicast_ip.c_str());
        printf("Socket_d:\n\t%i", gse_blk.sock_d);
    }
}
