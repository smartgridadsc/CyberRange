#ifndef UDPSENDUTILS_H
#define UDPSENDUTILS_H

#include <vector>

#define R_GOOSE_MODE 0
#define R_SV_MODE 1

class UDPSendUtils {
public:
    static void form_UDP_packet(std::vector<unsigned char> &payload, 
                                std::vector<unsigned char> &output,
                                unsigned int &spdu_num,
                                unsigned int protocol);
};

#endif //UDPSENDUTIL_H