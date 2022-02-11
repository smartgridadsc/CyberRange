#include <vector>
#include <string>
#include <errno.h>
#include <string.h>
#include <limits.h>
#include <cassert>
#include <unordered_map>

//conversion
#include "static_model.h"

//socket
#include <arpa/inet.h>
#include <netinet/in.h>
#include <sys/socket.h>
#include <sys/types.h>

#include "UDPReceiver.h"
#include "Utils.h"
#include "SharedMemory.h"

#define UDP_PORT 102

//extern SharedMemory g_sh_mem;

using namespace std;

/* For storing strerror_r() output*/
static char errormsg[100] = {};
static int error_msg_sz = 100;

UDPReceiver::UDPReceiver(unordered_map<string, GOOSE_Subscription> &goose_subs,
                         unordered_map<string, SV_Subscription> &sv_subs,
                         string &local_ip, vector<string> &multicast_addrs)
    : goose_subs(goose_subs), sv_subs(sv_subs)
{
    int res = 0;
    LOG(DEBUG, "Creating new UDPReceiver >>>>>>>>>>>>>>>>\n");

    // Setup UDP socket
    LOG(DEBUG, "Local IP address = %s", local_ip.c_str());
    in_addr local_if;
    inet_pton(AF_INET, local_ip.c_str(), &local_if);
    LOG(DEBUG, " (0x%X)\n", local_if.s_addr);

    sock_d = socket(AF_INET, SOCK_DGRAM, 0);
    // enable SO_REUSEADDR to allow multiple instances of this application to
    // receive copies of the multicast datagrams.
    int reuse = 1;
    if ((res = setsockopt(sock_d, SOL_SOCKET, SO_REUSEADDR, (char *)&reuse, sizeof(reuse))) != 0)
    {
        strerror_r(errno, errormsg, error_msg_sz);
        LOG(ERROR, "Fail to setup reuseaddr (%s)\n", errormsg);
        return;
    }

    //Set timeout
    struct timeval tv;
    tv.tv_sec = 0;
    tv.tv_usec = 100000;
    if ((res = setsockopt(sock_d, SOL_SOCKET, SO_RCVTIMEO, (struct timeval *)&tv, sizeof(struct timeval))) != 0)
    {
        strerror_r(errno, errormsg, error_msg_sz);
        LOG(ERROR, "Fail to set timeout for socket (%d)(%s)\n", errno, errormsg);
        return;
    }

    // Bind to the proper port number with the IP address specified as INADDR_ANY
    sockaddr_in localSock = {}; // initialize to all zeroes
    localSock.sin_family = AF_INET;
    localSock.sin_port = htons(UDP_PORT);
    localSock.sin_addr.s_addr = INADDR_ANY;
    // Note from manpage that bind returns 0 on success
    if ((res = bind(sock_d, (sockaddr *)&localSock, sizeof(localSock))) != 0)
    {
        strerror_r(errno, errormsg, error_msg_sz);
        LOG(ERROR, "Fail to bind socket (%s)\n", errormsg);
        return;
    }

    // Set TTL
    int ttl = 16;
    if ((res = setsockopt(sock_d, IPPROTO_IP, IP_MULTICAST_TTL,
                          &ttl, sizeof(ttl))) != 0)
    {
        strerror_r(errno, errormsg, error_msg_sz);
        LOG(ERROR, "Fail to set TTL for socket (%s)\n", errormsg);
        return;
    }
    LOG(DEBUG, "Socket_d = %d\n", sock_d);

    //MULTICAST SUBSCRIBE
    for (string multicast_addr : multicast_addrs)
    {
        // Join the multicast group on the local interface.  Note that this
        //    IP_ADD_MEMBERSHIP option must be called for each local interface over
        //    which the multicast datagrams are to be received.
        ip_mreq group = {}; // initialize to all zeroes

        // Set multicast IPv4 address in group->imr_multiaddr
        inet_pton(AF_INET, multicast_addr.c_str(), &(group.imr_multiaddr));

        // Set local network interface to receive multicast messages
        inet_pton(AF_INET, local_ip.c_str(), &(group.imr_interface));

        if ((res = setsockopt(sock_d, IPPROTO_IP, IP_ADD_MEMBERSHIP,
                              (char *)&group, sizeof(group))) != 0)
        {
            strerror_r(errno, errormsg, error_msg_sz);
            LOG(ERROR, "Fail to subscribe to %s for socket (%s)\n", multicast_addr.c_str(), errormsg);
        }
    }
    //DEBUG PRINT
    if (LOG_LEVEL == DEBUG)
    {
        int idx = 0;
        for (auto &it : goose_subs)
        {
            GOOSE_Subscription &goose_sub = it.second;

            LOG(DEBUG, "GOOSE Subscription[%d]\n", idx);
            LOG(DEBUG, "SourceIP: %s\n", goose_sub.sourceIP.c_str());
            LOG(DEBUG, "GOCB_REF: %s\n", goose_sub.gocb_ref.c_str());
            LOG(DEBUG, "DATASET: %s\n", goose_sub.dataset_name.c_str());
            LOG(DEBUG, "NUM_DAs: %d\n", goose_sub.num_dataSet_entries);
            for (string &da_str : goose_sub.da_strs)
                LOG(DEBUG, "DataAttr: %s\n", da_str.c_str());
            LOG(DEBUG, "APP_ID: %s\n", goose_sub.app_ID.c_str());
            idx++;
        }
        idx = 0;
        for (auto &it : sv_subs)
        {
            SV_Subscription &sv_sub = it.second;

            LOG(DEBUG, "SV Subscription[%d]\n", idx);
            LOG(DEBUG, "SourceIP: %s\n", sv_sub.sourceIP.c_str());
            LOG(DEBUG, "SVCB_REF: %s\n", sv_sub.svcb_ref.c_str());
            LOG(DEBUG, "DATASET: %s\n", sv_sub.dataset_name.c_str());
            LOG(DEBUG, "NUM_DAs: %d\n", sv_sub.num_dataSet_entries);
            for (string &da_str : sv_sub.da_strs)
                LOG(DEBUG, "DataAttr: %s\n", da_str.c_str());
            LOG(DEBUG, "APP_ID: %s\n", sv_sub.app_ID.c_str());
            idx++;
            idx++;
        }
    }
    //END DEBUG PRINT

    LOG(DEBUG, ">>>>>>>>>>>>>>>>>>>>>> UDPReceiver created\n");
}

void UDPReceiver::start()
{
    LOG(INFO, "UDPRecv: start\n");

    while (ied_running)
    {
        // Initialization before each reading of socket
        int numbytes{};
        unsigned char buf[MAXINPUTBUFLEN]{};
        struct sockaddr_in their_addr
        {
        };
        socklen_t addr_len{sizeof their_addr};

        if ((numbytes = recvfrom(sock_d, buf, MAXINPUTBUFLEN - 1, 0,
                                 (struct sockaddr *)&their_addr, &addr_len)) < 0)
        {
            strerror_r(errno, errormsg, error_msg_sz);
            //LOG(DEBUG, "Fail to recvfrom() (%d)(%s)\n", errno, errormsg);
            continue;
        }
        string src_addr(inet_ntoa(their_addr.sin_addr));
        LOG(DEBUG, "----------------------------------------------\n");
        LOG(DEBUG, "Received %d bytes from %s\n", numbytes, src_addr.c_str());

        handleUDP(src_addr, buf, numbytes);
    }

    LOG(INFO, "UDPRecv: stop\n");
}

// Checks if received data conforms to R-GOOSE/R-SV specifications or not
// If so, writes to SharedMemory

void UDPReceiver::handleUDP(string &src_addr,
                            const unsigned char (&buf)[MAXINPUTBUFLEN], const int numbytes)
{
    if ((numbytes > MAXINPUTBUFLEN) || (numbytes < 40)) // Data received should not be greater than assigned buffer length
    {                                                   // Also, sum of length of header/footer >= 40 bytes
        LOG(ERROR, "handleUDP(): Buffer length out of range\n");
        return;
    }

    // Require LI = 0x01 and TI = 0x40
    if ((buf[0] == 0x01) && (buf[1] == 0x40))
    {
        // SI = 0xA1 for R-GOOSE
        if (buf[2] == 0xA1)
        {
            if (goose_subs.find(src_addr) == goose_subs.end())
            {
                LOG(ERROR, "GOOSECtl for %s not found\n", src_addr.c_str());
                return;
            }
            GOOSE_Subscription &goose_sub = goose_subs[src_addr];
            handleGOOSE(goose_sub, buf, numbytes);
        }
        // SI = 0xA2 for R-SV
        else if (buf[2] == 0xA2)
        {
            if (sv_subs.find(src_addr) == sv_subs.end())
            {
                LOG(ERROR, "SVCTL for %s not found\n", src_addr.c_str());
                return;
            }
            SV_Subscription &sv_sub = sv_subs[src_addr];
            handleSV(sv_sub, buf, numbytes);
        }
        else
        {
            LOG(ERROR, "handleUDP(): Session protocol not implemented\n");
            return;
        }
    }
    else
    {
        LOG(ERROR, "handleUDP(): Application profile unknown\n");
        return;
    }
}

void UDPReceiver::handleGOOSE(GOOSE_Subscription &goose_sub,
                              const unsigned char (&buf)[MAXINPUTBUFLEN], const int numbytes)
{
    unsigned int current_spduLen{};
    unsigned int current_spduNum{};
    unsigned int current_payloadLen{};
    unsigned long current_appID{};
    size_t signature_idx{};
    unsigned char signature_len{};

    if ((buf[3] != (buf[5] + 2)) || buf[4] != 0x80)
    {
        LOG(ERROR, "handleGOOSE(): Error in Common Header\n");
        return;
    }

    if (buf[14] != 0x00 || buf[15] != 0x01)
    {
        LOG(ERROR, "handleGOOSE(): Unexpected Session Protocol Version Number\n");
        return;
    }

    current_spduNum = (buf[10] << 24) + (buf[11] << 16) + (buf[12] << 8) + buf[13];

    /* Exclude initialization scenario (previous = 0)
     *   and exclude rollover scenario (previous = UINT_MAX, current = 0).
     * Look for "reused" SPDU Number.
     */
    if (!((goose_sub.prev_spduNum == 0) || (current_spduNum == 0 && goose_sub.prev_spduNum == UINT_MAX)) && current_spduNum <= goose_sub.prev_spduNum)
    {
        LOG(ERROR, "handleGOOSE(): Outdated SPDU Number. Data ignored. "
                   "\tExpected SPDU Number: %u"
                   "\tObserved SPDU Number: %u",
            (goose_sub.prev_spduNum + 1), current_spduNum);
        return;
    } // No output prints if packet is out-of-order (assumes earlier packet(s) lost)

    current_spduLen = (buf[6] << 24) + (buf[7] << 16) + (buf[8] << 8) + buf[9];

    // Security Information skipped in this implementation

    // Payload Length's most significant byte is at index 28
    current_payloadLen = (buf[28] << 24) + (buf[29] << 16) + (buf[30] << 8) + buf[31];
    signature_idx = 28 + current_payloadLen;

    // Check Signature Block
    if (buf[signature_idx] != 0x85)
    {
        LOG(ERROR, "handleGOOSE(): Error in Signature\n");
        return;
    }
    /* Check index of last byte using two different computations:
     *      (i) SPDU Length
     *     (ii) Signature Length
     */
    signature_len = buf[signature_idx + 1];
    // Index of least sig byte of SPDU Length = 9
    if ((9 + current_spduLen) != ((signature_idx + 1) + signature_len))
    {
        LOG(ERROR, "handleGOOSE(): Inconsistent Lengths detected\n");
        return;
    }

    // No verification of HMAC in this implementation

    /* Check Payload */
    // Pay-load type (at index 32)
    if (buf[32] != 0x81)
    {
        LOG(ERROR, "handleGOOSE(): Payload Type inconsistent with Session Identifier (Ox%X)\n", buf[32]);
        return;
    }
    // Tunneled packets and Management APDUs omitted in this implementation

    // Simulation (at index 33)
    if (buf[33] != 0)
    {
        LOG(ERROR, "handleGOOSE(): Incorrect value detected in 'Simulation' field\n");
        return;
    }

    // APDU Length's most significant byte is at index 36
    if (signature_idx != (36 + (buf[36] << 8) + buf[37]))
    {
        LOG(ERROR, "handleGOOSE(): Error APDU Length in Payload\n");
        return;
    }

    // APPID (at indexes 34-35)
    current_appID = (buf[34] << 8) + buf[35];
    if (current_appID != std::stoul(goose_sub.app_ID, nullptr, 16))
    {
        LOG(ERROR, "handleGOOSE(): Incorrect appID in Payload\n");
        return;
    }

    /* Check PDU
     *  - First byte at index 38
     *  - Last byte at index (signature_idx - 1)
     */
    if (buf[38] != 0x61 || buf[39] != 0x81)
    {
        LOG(ERROR, "handleGOOSE(): Error GOOSE PDU Tag\n");
        return;
    }

    if ((38 + buf[40]) != signature_idx)
    {
        LOG(ERROR, "handleGOOSE(): Error GOOSE PDU Length\n");
        return;
    }

    // For iterating through the various Tag-Length-Value's of the GOOSE PDU
    size_t tag_idx{};
    size_t len_idx{};

    // gocbRef (Tag at index 41 = PDU first byte's index + 3)
    tag_idx = 41;
    len_idx = tag_idx + 1;
    assert(len_idx < signature_idx); // Ensure still 'digging' in the PDU
    if (buf[tag_idx] != 0x80)
    {
        LOG(ERROR, "handleGOOSE(): Error goCBRef Tag\n");
        return;
    }

    std::string current_gocbRef{};
    for (size_t i = 0; i < buf[len_idx]; i++)
    {
        current_gocbRef += buf[(len_idx + 1) + i];
    }
    if (current_gocbRef != goose_sub.gocb_ref)
    {
        LOG(ERROR, "handleGOOSE(): goCBRef mismatch\n");
        return;
    }

    // timeAllowedToLive
    tag_idx = (len_idx + 1) + buf[len_idx]; // new tag_idx = (old len_idx + 1 = start of Value field) + old length
    len_idx = tag_idx + 1;
    assert(len_idx < signature_idx); // Ensure still 'digging' in the PDU
    /* timeAllowedToLive not checked in this implementation */

    // datSet
    tag_idx = (len_idx + 1) + buf[len_idx]; // new tag_idx = (old len_idx + 1 = start of Value field) + old length
    len_idx = tag_idx + 1;
    assert(len_idx < signature_idx); // Ensure still 'digging' in the PDU
    if (buf[tag_idx] != 0x82)
    {
        LOG(ERROR, "handleGOOSE(): Error GOOSE datSet Tag\n");
        return;
    }

    std::string current_datSet{};
    for (size_t i = 0; i < buf[len_idx]; i++)
    {
        current_datSet += buf[(len_idx + 1) + i];
    }
    if (current_datSet != goose_sub.dataset_name)
    {
        LOG(ERROR, "handleGOOSE(): Error datSet mismatch\n");
        return;
    }

    // goID
    tag_idx = (len_idx + 1) + buf[len_idx]; // new tag_idx = (old len_idx + 1 = start of Value field) + old length
    len_idx = tag_idx + 1;
    assert(len_idx < signature_idx); // Ensure still 'digging' in the PDU
    if (buf[tag_idx] != 0x83)
    {
        LOG(ERROR, "handleGOOSE(): Error GOOSE goID Tag\n");
        return;
    }
    std::string current_goID{};
    for (size_t i = 0; i < buf[len_idx]; i++)
    {
        current_goID += buf[(len_idx + 1) + i];
    }
    // Other setups may have a goID different from gocbRef
    // But for this implementation, goID is checked against cbName (= gocbRef)
    if (current_goID != goose_sub.gocb_ref)
    {
        LOG(ERROR, "handleGOOSE(): Error goID mismatch\n");
        return;
    }

    // timestamp
    tag_idx = (len_idx + 1) + buf[len_idx]; // new tag_idx = (old len_idx + 1 = start of Value field) + old length
    len_idx = tag_idx + 1;
    assert(len_idx < signature_idx); // Ensure still 'digging' in the PDU
    /* timestamp not checked in this implementation */

    // stNum
    tag_idx = (len_idx + 1) + buf[len_idx]; // new tag_idx = (old len_idx + 1 = start of Value field) + old length
    len_idx = tag_idx + 1;
    assert(len_idx < signature_idx); // Ensure still 'digging' in the PDU
    if (buf[tag_idx] != 0x85)
    {
        LOG(ERROR, "handleGOOSE(): Error GOOSE stNum Tag\n");
        return;
    }

    unsigned int current_stNum{};
    for (size_t i = 0; i < buf[len_idx]; i++)
    {
        current_stNum = current_stNum << 8;
        current_stNum += buf[(len_idx + 1) + i];
    }

    // sqNum
    tag_idx = (len_idx + 1) + buf[len_idx]; // new tag_idx = (old len_idx + 1 = start of Value field) + old length
    len_idx = tag_idx + 1;
    assert(len_idx < signature_idx); // Ensure still 'digging' in the PDU
    if (buf[tag_idx] != 0x86)
    {
        LOG(ERROR, "handleGOOSE(): Error GOOSE sqNum Tag\n");
        return;
    }

    unsigned int current_sqNum{};
    for (size_t i = 0; i < buf[len_idx]; i++)
    {
        current_sqNum = current_sqNum << 8;
        current_sqNum += buf[(len_idx + 1) + i];
    }

    // test
    tag_idx = (len_idx + 1) + buf[len_idx]; // new tag_idx = (old len_idx + 1 = start of Value field) + old length
    len_idx = tag_idx + 1;
    assert(len_idx < signature_idx); // Ensure still 'digging' in the PDU
    if ((buf[tag_idx] != 0x87) || (buf[len_idx] != 0x01) || (buf[len_idx + 1] != 0x00))
    {
        LOG(ERROR, "handleGOOSE(): Error GOOSE test Tag/Length/Value\n");
        return;
    }

    // ConfRev
    tag_idx = (len_idx + 1) + buf[len_idx]; // new tag_idx = (old len_idx + 1 = start of Value field) + old length
    len_idx = tag_idx + 1;
    assert(len_idx < signature_idx); // Ensure still 'digging' in the PDU
    if ((buf[tag_idx] != 0x88) || (buf[len_idx] != 0x01) || (buf[len_idx + 1] != 0x01))
    {
        LOG(ERROR, "handleGOOSE(): Error GOOSE ConfRev Tag/Length/Value\n");
        return;
    }

    // ndsCom
    tag_idx = (len_idx + 1) + buf[len_idx]; // new tag_idx = (old len_idx + 1 = start of Value field) + old length
    len_idx = tag_idx + 1;
    assert(len_idx < signature_idx); // Ensure still 'digging' in the PDU
    if ((buf[tag_idx] != 0x89) || (buf[len_idx] != 0x01) || (buf[len_idx + 1] != 0x00))
    {
        LOG(ERROR, "handleGOOSE(): Error GOOSE ndsCom Tag/Length/Value\n");
        return;
    }

    // numDatSetEntries
    tag_idx = (len_idx + 1) + buf[len_idx]; // new tag_idx = (old len_idx + 1 = start of Value field) + old length
    len_idx = tag_idx + 1;
    assert(len_idx < signature_idx); // Ensure still 'digging' in the PDU
    if (buf[tag_idx] != 0x8A)
    {
        LOG(ERROR, "handleGOOSE(): Error GOOSE numDatSetEntries Tag\n");
        return;
    }
    int current_numDatSetEntries{buf[len_idx + 1]};

    // allData
    tag_idx = (len_idx + 1) + buf[len_idx]; // new tag_idx = (old len_idx + 1 = start of Value field) + old length
    len_idx = tag_idx + 1;
    assert(len_idx < signature_idx); // Ensure still 'digging' in the PDU
    if (buf[tag_idx] != 0xAB)
    {
        LOG(ERROR, "handleGOOSE(): Error GOOSE allData Tag\n");
        return;
    }

    std::vector<unsigned char> current_allData{};
    for (size_t i = 0; i < buf[len_idx]; i++)
    {
        current_allData.push_back(buf[len_idx + 1 + i]);
    }

    /* Check: 
         *  stNum, sqNum, numDatSetEntries & allData
         */
    // Check stNum
    if (current_stNum < goose_sub.prev_stNum)
    {
        LOG(ERROR, "handleGOOSE(): Error stNum\n"
                   "\tExpected stNum: %u"
                   "\tObserved stNum: %u"
                   "\tObserved sqNum: %u",
            (goose_sub.prev_stNum), current_stNum, current_sqNum);
        return;
    }

    //TO DO: do we need to check if value changed if stNum has changed?
    // // At this point, current stNum >= previous stNum
    // if (current_stNum != goose_sub.prev_stNum)
    // {
    //     if ( (cbOut.prev_allData_Value == current_allData)
    //         && (current_stNum = cbOut.prev_stNum_Value + 1) )
    //     {
    //         LOG(ERROR, "handleGOOSE(): Error stNum incremented but allData not changed\n");
    //     }
    // }

    /* At this point, current stNum > previous stNum + 1 (i.e. some packet(s) lost)
         *            or, current stNum == previous stNum + 1 && allData changed
         *            or, current stNum == previous stNum
         * All these scenarios are acceptable.
         */

    // Check sqNum
    if (current_stNum == goose_sub.prev_stNum)
    {
        // Check if sqNum is not increasing
        if (current_sqNum <= goose_sub.prev_sqNum && goose_sub.prev_sqNum != UINT_MAX)
        {
            LOG(ERROR, "handleGOOSE(): Error sqNum reused - suspected duplication\n");
            return;
        }
    }
    else
    {
        // Ensure receiver module is run before the sender module (otherwise this error will occur)
        if (current_sqNum != 0)
        {
            LOG(ERROR, "handleGOOSE(): Error sqNum\n");
            return;
        }
    }

    // Check numDatSetEntries/allData
    // Indexes were pointing at allData Tag/Length. Reassign to point to Tag/Length of the 1st allData Value.
    tag_idx = len_idx + 1;
    len_idx = tag_idx + 1;
    for (unsigned int i = 0; i < current_numDatSetEntries; i++)
    {
        tag_idx = (len_idx + 1) + buf[len_idx]; // new tag_idx = (old len_idx + 1 = start of Value field) + old length
        len_idx = tag_idx + 1;
    }
    if (tag_idx != signature_idx)
    {
        LOG(ERROR, "handleGOOSE(): Error allData Value(s)\n");
        return;
    }

    // At this point, all checks completed
    // Write to shared mem
    // wenshei

    unsigned int allData_len = current_allData.size();
    unsigned int da_idx = 0;
    unsigned int allData_idx = 0;
    char temp_buf[16] = {0}; //WARN: size must fit all expected datatypes
    LOG(DEBUG, "----------------------------------------------\n");
    LOG(DEBUG, "Received allData (len %u):\n", allData_len);
    LOG(DEBUG, "Expected entries = %u\n", goose_sub.num_dataSet_entries);
    //TO DO: Add more data type handling
    for (int i = 0; i < goose_sub.num_dataSet_entries; i++)
    {
        LOG(DEBUG, "Datatype = 0x%X\n", current_allData[allData_idx]);
        unsigned int entry_datatype = current_allData[allData_idx++];
        LOG(DEBUG, "Length = %X\n", current_allData[allData_idx]);
        unsigned int entry_len = current_allData[allData_idx++];
        if (entry_datatype == 0x83)
        { // BOOLEAN
            MemBlock memblk{MemType::BOOL};
            bool bool_val = current_allData[allData_idx++];
            memblk.bool_val = bool_val;
            g_sh_mem.insert(goose_sub.da_strs[i], memblk);
            if (bool_val)
            {
                LOG(DEBUG, "%s = true\n", goose_sub.da_strs[i].c_str());
            }
            else
            {
                LOG(DEBUG, "%s = false\n", goose_sub.da_strs[i].c_str());
            }
        }
        else if (entry_datatype == 0x84) // DBPOS
        {
            Dbpos dbpos_val = (Dbpos)current_allData[allData_idx++];
            bool new_val;
            if (dbpos_val == DBPOS_ON)
            {
                new_val = true;
            }
            else if (dbpos_val == DBPOS_OFF)
            {
                new_val = false;
            }
            else if (dbpos_val == DBPOS_INTERMEDIATE_STATE)
            {
                printf("Dbpos INTERMIDATE STATE\n");
                new_val = false;
            }
            else if (dbpos_val == DBPOS_BAD_STATE)
            {
                printf("Dbpos BAD STATE\n");
                new_val = false;
            }

            if (new_val)
            {
                LOG(DEBUG, "%s = true\n", goose_sub.da_strs[i].c_str());
            }
            else
            {
                LOG(DEBUG, "%s = false\n", goose_sub.da_strs[i].c_str());
            }
            MemBlock memblk{MemType::BOOL};
            memblk.bool_val = new_val;
            g_sh_mem.insert(goose_sub.da_strs[i], memblk);
        }
    }
    LOG(DEBUG, "----------------------------------------------\n");

    // Update output parameter's variables
    goose_sub.prev_spduNum = current_spduNum;
    goose_sub.prev_stNum = current_stNum;
    goose_sub.prev_sqNum = current_sqNum;
    goose_sub.num_dataSet_entries = current_numDatSetEntries;
    //goose_sub.prev_allData_Value = current_allData;

    //END handleGOOSE()
}

//TO DO: handle multiple data types in seqData field
//for now, assume that all in seqData are of float32 (4bytes)
void UDPReceiver::handleSV(SV_Subscription &sv_sub,
                           const unsigned char (&buf)[MAXINPUTBUFLEN], const int numbytes)
{
    unsigned int current_spduLen{};
    unsigned int current_spduNum{};
    unsigned int current_payloadLen{};
    unsigned long current_appID{};
    size_t signature_idx{};
    unsigned char signature_len{};

    if ((buf[3] != (buf[5] + 2)) || buf[4] != 0x80)
    {
        LOG(ERROR, "handleSV(): Error in Common Header\n");
        return;
    }

    if (buf[14] != 0x00 || buf[15] != 0x01)
    {
        LOG(ERROR, "handleSV(): Unexpected Session Protocol Version Number\n");
        return;
    }

    current_spduNum = (buf[10] << 24) + (buf[11] << 16) + (buf[12] << 8) + buf[13];

    /* Exclude initialization scenario (previous = 0)
     *   and exclude rollover scenario (previous = UINT_MAX, current = 0).
     * Look for "reused" SPDU Number.
     */
    if (!((sv_sub.prev_spduNum == 0) || (current_spduNum == 0 && sv_sub.prev_spduNum == UINT_MAX)) && current_spduNum <= sv_sub.prev_spduNum)
    {
        LOG(ERROR, "handleSV(): Outdated SPDU Number. Data ignored. "
                   "\tExpected SPDU Number: %u"
                   "\tObserved SPDU Number: %u",
            (sv_sub.prev_spduNum + 1), current_spduNum);
        return;
    } // No output prints if packet is out-of-order (assumes earlier packet(s) lost)

    current_spduLen = (buf[6] << 24) + (buf[7] << 16) + (buf[8] << 8) + buf[9];

    // Security Information skipped in this implementation

    // Payload Length's most significant byte is at index 28
    current_payloadLen = (buf[28] << 24) + (buf[29] << 16) + (buf[30] << 8) + buf[31];
    signature_idx = 28 + current_payloadLen;

    // Check Signature Block
    if (buf[signature_idx] != 0x85)
    {
        LOG(ERROR, "handleSV(): Error in Signature\n");
        return;
    }
    /* Check index of last byte using two different computations:
     *      (i) SPDU Length
     *     (ii) Signature Length
     */
    signature_len = buf[signature_idx + 1];
    // Index of least sig byte of SPDU Length = 9
    if ((9 + current_spduLen) != ((signature_idx + 1) + signature_len))
    {
        LOG(ERROR, "handleSV(): Inconsistent Lengths detected\n");
        return;
    }

    // No verification of HMAC in this implementation

    /* Check Payload */
    // Pay-load type (at index 32)
    if (buf[32] != 0x82)
    {
        LOG(ERROR, "handleSV(): Payload Type inconsistent with Session Identifier (0x%X)\n", buf[32]);
        return;
    }
    // Tunneled packets and Management APDUs omitted in this implementation

    // Simulation (at index 33)
    if (buf[33] != 0)
    {
        LOG(ERROR, "handleSV(): Incorrect value detected in 'Simulation' field\n");
        return;
    }

    // APDU Length's most significant byte is at index 36
    if (signature_idx != (36 + (buf[36] << 8) + buf[37]))
    {
        LOG(ERROR, "handleSV(): Error APDU Length in Payload\n");
        return;
    }

    // APPID (at indexes 34-35)
    current_appID = (buf[34] << 8) + buf[35];
    if (current_appID != std::stoul(sv_sub.app_ID, nullptr, 16))
    {
        LOG(ERROR, "handleSV(): Incorrect appID in Payload\n");
        return;
    }

    /* Check PDU
     *  - First byte at index 38
     *  - Last byte at index (signature_idx - 1)
     */
    /* Assume the following optional fields not present in ASDU:
         *  - datSet
         *  - refrTm
         *  - smpRate
         *  - SmpMod
         */
    if (buf[38] != 0x60 || buf[39] != 0x80)
    {
        LOG(ERROR, "handleSV(): Error SV PDU Tag\n");
        return;
    }

    if ((38 + buf[40]) != signature_idx)
    {
        LOG(ERROR, "handleSV(): Error SV PDU Length\n");
        return;
    }

    if (buf[41] != 0x80 || buf[42] != 0x01 || buf[43] != 0x01)
    {
        LOG(ERROR, "handleSV(): Error noASDU Tag/Length/Value\n");
        return;
    }

    if (buf[44] != 0xA2)
    {
        LOG(ERROR, "handleSV(): Error Sequence-of-ASDUs Tag\n");
        return;
    }

    if ((44 + buf[45]) != signature_idx)
    {
        LOG(ERROR, "handleSV(): Error Sequence-of-ASDUs Length\n");
        return;
    }

    if (buf[46] != 0x30)
    {
        LOG(ERROR, "handleSV(): Error ASDU Tag\n");
        return;
    }

    if ((46 + buf[47]) != signature_idx)
    {
        LOG(ERROR, "handleSV(): Error ASDU Length\n");
        return;
    }

    // For iterating through the various Tag-Length-Value's of the SV PDU
    size_t tag_idx{};
    size_t len_idx{};

    tag_idx = 48;
    len_idx = tag_idx + 1;
    assert(len_idx < signature_idx); // Ensure still 'digging' in the PDU
    if (buf[tag_idx] != 0x80)
    {
        LOG(ERROR, "handleSV(): Error MsvID Tag\n");
        return;
    }

    std::string current_svID{};
    for (size_t i = 0; i < buf[len_idx]; i++)
    {
        current_svID += buf[(len_idx + 1) + i];
    }
    if (current_svID != sv_sub.svcb_ref)
    {
        LOG(ERROR, "handleSV(): Error  MsvID mismatch\n");
        return;
    }

    // smpCnt
    tag_idx = (len_idx + 1) + buf[len_idx]; // new tag_idx = (old len_idx + 1 = start of Value field) + old length
    len_idx = tag_idx + 1;
    assert(len_idx < signature_idx); // Ensure still 'digging' in the PDU
    if (buf[tag_idx] != 0x82 || buf[len_idx] != 0x02)
    {
        LOG(ERROR, "handleSV(): Error smpCnt Tag/Lengt\n");
        return;
    }

    unsigned int current_smpCnt{};
    for (size_t i = 0; i < buf[len_idx]; i++)
    {
        current_smpCnt = current_smpCnt << 8;
        current_smpCnt += buf[(len_idx + 1) + i];
    }
    if ((current_smpCnt < sv_sub.prev_smpCnt) && (sv_sub.prev_smpCnt != 3999))
    {
        LOG(ERROR, "handleSV(): Error smpCnt Value reused\n");
        return;
    }

    // confRev
    tag_idx = (len_idx + 1) + buf[len_idx]; // new tag_idx = (old len_idx + 1 = start of Value field) + old length
    len_idx = tag_idx + 1;
    assert(len_idx < signature_idx); // Ensure still 'digging' in the PDU
    if (buf[tag_idx] != 0x83 || buf[len_idx] != 0x04)
    {
        LOG(ERROR, "handleSV(): Error confRev Tag/Length\n");
        return;
    }
    unsigned int current_confRev = (buf[(len_idx + 1)] << 24) + (buf[(len_idx + 2)] << 16) + (buf[(len_idx + 3)] << 8) + (buf[(len_idx + 4)]);
    if (current_confRev != 0x01)
    {
        LOG(ERROR, "handleSV(): Error SV ConfRev Value\n");
        return;
    }

    // smpSynch
    tag_idx = (len_idx + 1) + buf[len_idx]; // new tag_idx = (old len_idx + 1 = start of Value field) + old length
    len_idx = tag_idx + 1;
    assert(len_idx < signature_idx); // Ensure still 'digging' in the PDU
    if (buf[tag_idx] != 0x85 || buf[len_idx] != 0x01 || buf[len_idx + 1] != 0x02)
    {
        LOG(ERROR, "handleSV(): Error smpSynch Tag/Length/Value\n");
        return;
    }

    // Sample
    tag_idx = (len_idx + 1) + buf[len_idx]; // new tag_idx = (old len_idx + 1 = start of Value field) + old length
    len_idx = tag_idx + 1;
    assert(len_idx < signature_idx); // Ensure still 'digging' in the PDU
    if (buf[tag_idx] != 0x87)
    {
        LOG(ERROR, "handleSV(): Error sequenceofdata Tag\n");
        return;
    }

    std::vector<unsigned char> current_seqOfData{};
    for (size_t i = 0; i < buf[len_idx]; i++)
    {
        current_seqOfData.push_back(buf[len_idx + 1 + i]);
    }

    // timestamp
    tag_idx = (len_idx + 1) + buf[len_idx]; // new tag_idx = (old len_idx + 1 = start of Value field) + old length
    len_idx = tag_idx + 1;
    assert(len_idx < signature_idx); // Ensure still 'digging' in the PDU
    if (buf[tag_idx] != 0x89 || buf[len_idx] != 0x08)
    {
        LOG(ERROR, "handleSV(): Error timestamp Tag/Length\n");
        return;
    }
    /* Checking of timestamp Value not yet included */

    // At this point, all checks completed
    // Write to shared mem
    // wenshei:
    // TO DO: determine what is the datatype for each entry in seqData
    // currently assuming each value is float, of size 4 bytes
    unsigned int seqData_len = current_seqOfData.size();
    if (seqData_len != (sizeof(float) * sv_sub.num_dataSet_entries))
    {
        LOG(ERROR, "SV seqData (len %u) abnormal data, may not contain all float\n", seqData_len);
    }
    unsigned int da_idx = 0;
    unsigned int seqData_idx = 0;
    char temp_buf[4] = {0};
    LOG(DEBUG, "----------------------------------------------\n");
    LOG(DEBUG, "Received seqData with %u entries:\n", seqData_len / sizeof(float));
    for (int i = 0; i < sv_sub.num_dataSet_entries; i++)
    {
        MemBlock memblk{MemType::FLOAT32};
        LOG(DEBUG, "Hex = 0x");
        for (int j = 0; j < sizeof(float); j++)
        {
            temp_buf[j] = current_seqOfData[seqData_idx];
            LOG(DEBUG, "%X", current_seqOfData[seqData_idx]);
            seqData_idx++;
        }
        LOG(DEBUG, "\n");
        float *flt_ptr = reinterpret_cast<float *>(temp_buf);
        memblk.float_val = *flt_ptr;

        g_sh_mem.insert(sv_sub.da_strs[i], memblk);
        LOG(DEBUG, "%s = %f\n", sv_sub.da_strs[i].c_str(), *flt_ptr);
    }
    LOG(DEBUG, "----------------------------------------------\n");

    // Update output parameter's variables
    sv_sub.prev_spduNum = current_spduNum;
    sv_sub.prev_smpCnt = current_smpCnt;
    //sv_sub.prev_seqOfData_Value = current_seqOfData;

    //END handleSV()
}
