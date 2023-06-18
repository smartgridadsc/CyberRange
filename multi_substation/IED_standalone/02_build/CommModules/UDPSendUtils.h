/*
 *  UDPSendUtils.h
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