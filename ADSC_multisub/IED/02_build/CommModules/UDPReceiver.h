/*
 *  UDPReceiver.h
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
 
#ifndef UDPRECEIVER_H
#define UDPRECEIVER_H

#include <string>
#include <vector>
#include <unordered_map>

#include "CommModule.h"

#define MAXINPUTBUFLEN 1024

struct GOOSE_Subscription {
    std::string sourceIP;
    std::string gocb_ref;
    std::string dataset_name;
    std::string app_ID;
    std::vector<std::string> da_strs; //DAs in dataset
    unsigned int num_dataSet_entries {0};

    unsigned int prev_spduNum {0};
    unsigned int prev_stNum {0};
    unsigned int prev_sqNum {0};
};

struct SV_Subscription {
    std::string sourceIP;
    std::string svcb_ref;
    std::string dataset_name;
    std::string app_ID;
    std::vector<std::string> da_strs; //DAs in dataset
    unsigned int num_dataSet_entries {0};

    unsigned int prev_spduNum {0};
    unsigned int prev_smpCnt {0};
};

/*
    Receives and processes R-GOOSE/R-SV UDP packets
*/
class UDPReceiver : public CommModule {
public:
    UDPReceiver() = delete;
    UDPReceiver(std::unordered_map<std::string, GOOSE_Subscription> &goose_subs, 
                std::unordered_map<std::string, SV_Subscription> &sv_subs,
                std::string &local_ip,
                std::vector<std::string> &multicast_addrs);

    void start();
private:
    int sock_d;
    std::unordered_map<std::string, GOOSE_Subscription> goose_subs;
    std::unordered_map<std::string, SV_Subscription> sv_subs;

    void handleUDP(std::string &src_addr,
                    const unsigned char (&buf)[MAXINPUTBUFLEN], 
                    const int numbytes);

    void handleGOOSE(GOOSE_Subscription &goose_sub,
                    const unsigned char (&buf)[MAXINPUTBUFLEN], 
                    const int numbytes);
    void handleSV(SV_Subscription &sv_sub,
                    const unsigned char (&buf)[MAXINPUTBUFLEN], 
                    const int numbytes);

};

#endif //UDPRECEIVER_H