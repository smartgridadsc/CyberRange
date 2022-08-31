/*
 *  R_GOOSE.h
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
 
#ifndef R_GOOSE_H
#define R_GOOSE_H

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

struct GooseCtlBlk_t {
    /* For GOOSE PDU */
    std::string gocb_ref;
    std::string dataSet_name;
    std::string app_ID;

    std::vector<DataAttribute*> da_refs;
    std::vector<MmsValue*> da_view;
    int sock_d;
    sockaddr_in group_sock;
    std::string multicast_ip; //for debug only

    unsigned int spduNum {0};
    unsigned int stNum {0};
    unsigned int sqNum {0};
};

//Only sends R-GOOSE. For receiving, refer to UDPReceiver
class R_GOOSEModule : public CommModule {
public:
    R_GOOSEModule() = delete;
    R_GOOSEModule(std::vector<std::string> &gocb_refs,
                    std::vector<std::string> &dataSet_names,
                    std::vector<std::string> &app_IDs,
                    std::vector<std::vector<std::string>> &data_attrs,
                    std::vector<std::string> &multicast_ips,
                    std::string &local_ip);
    void start();
    void print();

private:
    std::vector<GooseCtlBlk_t> ctl_blks;

    static void start_send(R_GOOSEModule &rgoose_mod); //Thread to send packets periodically

    void update_view(bool mode);
    void send_rgoose_packet(unsigned int ctl_blk_idx);

    static void form_rgoose_pdu(GooseCtlBlk_t &gse_blk, std::vector<unsigned char> &pduOut);    
};

#endif //R_GOOSE_H
