/*
 *  R_SV.h
 *
 *  Copyright 2023 ADSC
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
 
#ifndef R_SV_H
#define R_SV_H

#include <vector>
#include <string>

//socket
#include <unistd.h>
#include <arpa/inet.h>
#include <netinet/in.h>
#include <sys/socket.h>
#include <sys/types.h>

#include "CommModule.h"
#include "iec61850_model.h"

struct SVCtlBlk_t {
    /* For SV PDU */
    std::string svcb_ref;
    std::string dataSet_name;
    std::string app_ID;

    std::vector<DataAttribute*> da_refs;
    std::vector<bool> da_view;

    int sock_d;
    sockaddr_in group_sock;
    std::string multicast_ip; //for debug only

    unsigned int spduNum {0};
    unsigned int smpCnt {0};
}; 

//Only sends R-SV. For receiving, refer to UDPReceiver
class R_SVModule : public CommModule {
public:
    R_SVModule() = delete;
    R_SVModule(std::vector<std::string> &svcb_refs,
                std::vector<std::string> &dataSet_names,
                std::vector<std::string> &app_IDs,
                std::vector<std::vector<std::string>> &data_attrs,
                std::vector<std::string> &multicast_ips,
                std::string &local_ip);
    void start();

private:
    std::vector<SVCtlBlk_t> ctl_blks;

    void send_rsv_packet(unsigned int ctl_blk_idx);
    static void form_rsv_pdu(SVCtlBlk_t &gse_blk, std::vector<unsigned char> &pduOut);    
};


#endif //R_SV_H