#include <thread>
#include <cassert>
#include <errno.h>
#include <string.h>

#include "R_SV.h"
#include "UDPSendUtils.h"
#include "Utils.h"

#include "ModelMutex.h"
#include "static_model.h"

#define R_SV_INTERVAL 1000 //millis

using namespace std;

/* For storing strerror_r() output*/
static char errormsg[100] = {};
static int error_msg_sz = 100;

R_SVModule::R_SVModule(vector<string> &svcb_refs,
                       vector<string> &dataSet_names,
                       vector<string> &app_IDs,
                       vector<vector<string>> &data_attrs,
                       vector<string> &multicast_ips,
                       string &local_ip)
{
    LOG(DEBUG, "Creating new RSVModule >>>>>>>>>>>>>>>>\n");

    int res = 0;

    if (svcb_refs.size() != dataSet_names.size() ||
        dataSet_names.size() != app_IDs.size() ||
        app_IDs.size() != data_attrs.size() ||
        data_attrs.size() != multicast_ips.size())
    {
        LOG(ERROR, "R-SV Module failed! Vector sizes not equal\n");
        return;
    }

    LOG(DEBUG, "Local IP address = %s", local_ip.c_str());
    in_addr local_if;
    inet_pton(AF_INET, local_ip.c_str(), &local_if);
    LOG(DEBUG, " (0x%X)\n", local_if.s_addr);

    for (int i = 0; i < svcb_refs.size(); i++)
    {
        LOG(DEBUG, "SVCtlBlock[%d]\n", i);
        SVCtlBlk_t new_blk;

        new_blk.svcb_ref = svcb_refs[i];
        LOG(DEBUG, "SVCB_REF: %s\n", new_blk.svcb_ref.c_str());
        new_blk.dataSet_name = dataSet_names[i];
        LOG(DEBUG, "DATASET: %s\n", new_blk.dataSet_name.c_str());
        new_blk.app_ID = app_IDs[i];
        LOG(DEBUG, "APP_ID: %s\n", new_blk.app_ID.c_str());

        vector<string> &da_grp = data_attrs[i];
        for (string &da_str : da_grp)
        {
            LOG(DEBUG, "DataAttr: %s\n", da_str.c_str());
            DataAttribute *da = (DataAttribute *)IedModel_getModelNodeByObjectReference(&iedModel, da_str.c_str());
            if (da == NULL)
            {
                LOG(ERROR, "DataAttribute not found for %s\n", da_str.c_str());
                continue;
            }
            lock_guard<mutex> lock(static_model_lock);
            if (da->mmsValue == NULL)
            {
                if (da->type == IEC61850_BOOLEAN)
                {
                    da->mmsValue = MmsValue_newBoolean(true);
                }
                else if (da->type == IEC61850_INT32U)
                {
                    da->mmsValue = MmsValue_newIntegerFromInt32(0);
                }
                else if (da->type == IEC61850_FLOAT32)
                {
                    da->mmsValue = MmsValue_newFloat(0.0);
                }
                //else if OTHER TYPES
            }
            // if (da->type != IEC61850_BOOLEAN) {
            //     LOG(ERROR, "DataAttribute type is not BOOLEAN for %s\n", da_str.c_str());
            //     continue;
            // }

            new_blk.da_refs.push_back(da);
            new_blk.da_view.push_back(true);
        }

        // Setup UDP socket
        int &sock_d = new_blk.sock_d;
        sock_d = socket(AF_INET, SOCK_DGRAM, 0);
        // Set local network interface to send multicast messages
        if ((res = setsockopt(sock_d, IPPROTO_IP, IP_MULTICAST_IF,
                              (char *)&local_if, sizeof(local_if))) != 0)
        {
            strerror_r(errno, errormsg, error_msg_sz);
            LOG(ERROR, "Fail to setup multicast (%s)\n", errormsg);
            continue;
        }
        // Set TTL
        int ttl = 16;
        if ((res = setsockopt(sock_d, IPPROTO_IP, IP_MULTICAST_TTL,
                              &ttl, sizeof(ttl))) != 0)
        {
            strerror_r(errno, errormsg, error_msg_sz);
            LOG(ERROR, "Fail to set TTL for socket (%s)\n", errormsg);
            continue;
        }
        LOG(DEBUG, "Socket_d = %d\n", sock_d);

        //Setup multicast target
        LOG(DEBUG, "Multicast IP address = %s", multicast_ips[i].c_str());
        sockaddr_in &group_sock = new_blk.group_sock;
        group_sock = {}; // init to all zeroes
        group_sock.sin_family = AF_INET;
        group_sock.sin_port = htons(102); //target UDP port
        inet_pton(AF_INET, multicast_ips[i].c_str(), &(group_sock.sin_addr));
        LOG(DEBUG, " (0x%X)\n", group_sock.sin_addr.s_addr);

        new_blk.multicast_ip = multicast_ips[i];

        ctl_blks.push_back(new_blk);
    }

    LOG(DEBUG, ">>>>>>>>>>>>>>>>>>>>> RSVModule created\n");
}

void R_SVModule::start()
{
    LOG(INFO, "R_SV: start\n");

    //let model updater initialize model
    this_thread::sleep_for(chrono::milliseconds(1000));

    while (ied_running)
    {
        for (int i = 0; i < ctl_blks.size(); i++)
        {
            send_rsv_packet(i);
        }
        this_thread::sleep_for(chrono::milliseconds(R_SV_INTERVAL));
    }

    for (SVCtlBlk_t sv_blk : ctl_blks)
    {
        close(sv_blk.sock_d);
    }

    LOG(INFO, "R_SV: stop\n");
}

void R_SVModule::send_rsv_packet(unsigned int ctl_blk_idx)
{
    int res = 0;
    vector<unsigned char> sv_pdu;
    vector<unsigned char> output;

    SVCtlBlk_t &sv_blk = ctl_blks[ctl_blk_idx];

    form_rsv_pdu(sv_blk, sv_pdu);
    UDPSendUtils::form_UDP_packet(sv_pdu, output, sv_blk.spduNum, R_SV_MODE);

    //LOG(DEBUG, "Sending R-SV from sock_d(%d) to %s\n", sv_blk.sock_d, sv_blk.multicast_ip.c_str());

    if ((res = sendto(sv_blk.sock_d, &output[0], output.size(), 0,
                      (sockaddr *)&sv_blk.group_sock, sizeof(sv_blk.group_sock))) <= 0)
    {
        strerror_r(errno, errormsg, error_msg_sz);
        LOG(ERROR, "Fail to send R-SV for %s (%s)\n", sv_blk.multicast_ip.c_str(), errormsg);
    }
}

void R_SVModule::form_rsv_pdu(SVCtlBlk_t &sv_blk, std::vector<unsigned char> &payloadOut)
{
    vector<unsigned char> pduOut;

    /* Initialize variables for SV PDU data */
    unsigned char svPDU_Tag{0x60};
    unsigned char svPDU_Tag2{0x80};
    unsigned char svPDU_Len{}; // Includes SV PDU Tag & Len and every component's length

    unsigned char noASDU_Tag{0x80};
    unsigned char noASDU_Len{0x01};
    unsigned char noASDU_Value{0x01}; // Fixed as 1 for IEC 61850-9-2 LE implementation

    unsigned char seqOfASDU_Tag{0xA2};
    unsigned char seqOfASDU_Len{};

    // *** SV ASDU ***
    unsigned char asdu_Tag{0x30};
    unsigned char asdu_Len{};

    // *** SV ASDU -> MsvID ***
    unsigned char svID_Tag{0x80};
    unsigned char svID_Len{static_cast<unsigned char>(sv_blk.svcb_ref.length())};
    std::vector<unsigned char> svID_Value{sv_blk.svcb_ref.begin(), sv_blk.svcb_ref.end()};

    // *** SV ASDU -> smpCnt ***
    unsigned char smpCnt_Tag{0x82};
    unsigned char smpCnt_Len{0x02};
    unsigned int smpCnt_Value{};

    // *** SV ASDU -> confRev ***
    unsigned char confRev_Tag{0x83};
    unsigned char confRev_Len{0x04};
    unsigned int confRev_Value{};

    // *** SV ASDU -> smpSynch ***
    unsigned char smpSynch_Tag{0x85};
    unsigned char smpSynch_Len{0x01};
    unsigned char smpSynch_Value{};

    // *** SV ASDU -> Sample ***
    unsigned char seqOfData_Tag{0x87};
    unsigned char seqOfData_Len{};
    std::vector<unsigned char> seqOfData_Value{};

    // *** SV PDU -> t ***
    unsigned char time_Tag{0x89};
    const unsigned char time_Len{0x08};

    /*
     * Bit 7 = 0: Leap Second NOT Known
     * Bit 6 = 0: Not ClockFailure
     * Bit 5 = 0: Clock Synchronized
     * Bits 4-0 = 01010: 10-bits of accuracy [HARDCODING]
     */
    std::array<unsigned char, time_Len> time_Value{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a};

    // Set smpCnt Value (assume 50Hz)
    if (sv_blk.smpCnt != 3999)
    {
        smpCnt_Value = sv_blk.smpCnt++;
    }
    else
    {
        smpCnt_Value = 0;
        sv_blk.smpCnt = 0;
    }

    // Set confRev Value
    confRev_Value = 1;

    // Set smpSynch Value (fixed as 2 in this implementation)
    /* As per IEC 61850-9-2:
     * 0           = SV are not synchronised by an external clock signal.
     * 1           = SV are synchronised by a clock signal from an unspecified local area clock.
     * 2           = SV are synchronised by a global area clock signal (time traceable).
     * 5 to 254    = SV are synchronised by a clock signal from a local area clock identified by this value.
     * 3 to 4, 255 = Reserved values – Do not use.
     */
    smpSynch_Value = 0x02;

    // Set seqOfData
    //TO DO: add other data types
    // HARDCODED Sample Data in this implementation
    // seqOfData_Value = {0x10, 0x14, 0x12, 0x15, 0x12, 0x64, 0x11, 0x12, 0x18, 0x22, 0x14, 0x12, 0x17, 0x16, 0x30, 0x42,
    //                    0x10, 0x14, 0x12, 0x15, 0x12, 0x64, 0x11, 0x12, 0x18, 0x22, 0x14, 0x12, 0x17, 0x16, 0x30, 0x42,
    //                    0x10, 0x14, 0x12, 0x15, 0x12, 0x64, 0x11, 0x12, 0x18, 0x22, 0x14, 0x12, 0x17, 0x16, 0x80, 0xDA,
    //                    0x80, 0x60, 0x0C, 0x2D, 0x01, 0x03, 0x0D, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
    for (DataAttribute *da : sv_blk.da_refs)
    {
        lock_guard<mutex> lock(static_model_lock);
        if (da->type == DataAttributeType::IEC61850_BOOLEAN)
        {
            MmsValue_getBoolean(da->mmsValue) ? seqOfData_Value.push_back(0x01) : seqOfData_Value.push_back(0x00);
        }
        else if (da->type == DataAttributeType::IEC61850_FLOAT32)
        {
            float float_val = MmsValue_toFloat(da->mmsValue);
            const unsigned char *flt_ptr = reinterpret_cast<const unsigned char *>(&float_val);
            for (int i = 0; i < sizeof(float); i++)
            {
                seqOfData_Value.push_back(flt_ptr[i]);
            }
        }
    }
    seqOfData_Len = seqOfData_Value.size();
    LOG(DEBUG, "SeqData len %u\n", seqOfData_Len);

    // Set timestamp
    Utils::set_timestamp(time_Value);

    /* At this point, the ASDU is complete.
     * So, start filling up a temp vector with ASDU and get ASDU's length first.
     * Then, encapsulate with other encoding to complete the entire PDU.
     */
    std::vector<unsigned char> tmpVec{};
    tmpVec.push_back(asdu_Tag); // index 0 of tmpVec
    tmpVec.push_back(asdu_Len); // index 1 of tmpVec: not yet computed

    tmpVec.push_back(svID_Tag); // index 2 of tmpVec
    tmpVec.push_back(svID_Len);
    tmpVec.insert(tmpVec.end(), svID_Value.begin(), svID_Value.end());

    tmpVec.push_back(smpCnt_Tag);
    tmpVec.push_back(smpCnt_Len);
    std::vector<unsigned char> smpCnt_ValVec{};
    Utils::convertUINT32IntoBytes(smpCnt_Value, smpCnt_ValVec);
    assert((smpCnt_ValVec.size() > 0) && (smpCnt_ValVec.size() <= 2));
    if (smpCnt_ValVec.size() == 1)
        tmpVec.push_back(0x00); // Pad with a higher order byte 0x00 to ensure condition (smpCnt_Len == 2)
    tmpVec.insert(tmpVec.end(), smpCnt_ValVec.begin(), smpCnt_ValVec.end());

    tmpVec.push_back(confRev_Tag);
    tmpVec.push_back(confRev_Len);
    tmpVec.push_back(static_cast<unsigned char>((confRev_Value >> 24) & 0xFF));
    tmpVec.push_back(static_cast<unsigned char>((confRev_Value >> 16) & 0xFF));
    tmpVec.push_back(static_cast<unsigned char>((confRev_Value >> 8) & 0xFF));
    tmpVec.push_back(static_cast<unsigned char>((confRev_Value)&0xFF));

    tmpVec.push_back(smpSynch_Tag);
    tmpVec.push_back(smpSynch_Len);
    tmpVec.push_back(smpSynch_Value);

    tmpVec.push_back(seqOfData_Tag);
    tmpVec.push_back(seqOfData_Len);
    tmpVec.insert(tmpVec.end(), seqOfData_Value.begin(), seqOfData_Value.end());

    tmpVec.push_back(time_Tag);
    tmpVec.push_back(time_Len);
    tmpVec.insert(tmpVec.end(), time_Value.begin(), time_Value.end());

    // Set ASDU Length
    tmpVec[1] = tmpVec.size();

    /* At this point, the sequence of (one) ASDU is complete, i.e. tmpVec
     * So, start filling up pduOut with required encoding for the SV PDU.
     * Then, append the tmpVec at the end to complete the SV PDU.
     */
    seqOfASDU_Len = tmpVec.size() + 2;
    svPDU_Len = seqOfASDU_Len + 6;

    pduOut.push_back(svPDU_Tag);
    pduOut.push_back(svPDU_Tag2);
    pduOut.push_back(svPDU_Len);

    pduOut.push_back(noASDU_Tag);   // 0x80
    pduOut.push_back(noASDU_Len);   // 0x01
    pduOut.push_back(noASDU_Value); // 0x01

    pduOut.push_back(seqOfASDU_Tag);
    pduOut.push_back(seqOfASDU_Len);
    pduOut.insert(pduOut.end(), tmpVec.begin(), tmpVec.end());

    // Payload Type 0x82: non-tunneled SV APDU
    payloadOut.push_back(0x82);

    /* Continue forming Payload */
    // Simulation 0x00: Boolean False = payload not sent for test
    payloadOut.push_back(0x00);

    // APP ID
    unsigned long raw_converted_appid = std::stoul(sv_blk.app_ID, nullptr, 16);
    payloadOut.push_back(static_cast<unsigned char>((raw_converted_appid >> 8) & 0xFF));
    payloadOut.push_back(static_cast<unsigned char>((raw_converted_appid)&0xFF));

    // APDU Length
    size_t apdu_len{pduOut.size() + 2}; // Length of SV or GOOSE PDU plus the APDU Length field itself
    payloadOut.push_back(static_cast<unsigned char>((apdu_len >> 8) & 0xFF));
    payloadOut.push_back(static_cast<unsigned char>((apdu_len)&0xFF));

    // PDU
    payloadOut.insert(payloadOut.end(), pduOut.begin(), pduOut.end());  // Payload completely formed here
}
