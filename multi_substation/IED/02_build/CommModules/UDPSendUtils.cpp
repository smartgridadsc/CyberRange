/*
 *  UDPSendUtils.cpp
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
 
#include <vector>

#include "UDPSendUtils.h"

using namespace std;

void UDPSendUtils::form_UDP_packet(vector<unsigned char> &payload, 
                                vector<unsigned char> &output,
                                unsigned int &spdu_num,
                                unsigned int protocol) {
    /* Based on RFC-1240 protocol (OSI connectionless transport services on top of UDP) */
    std::vector<unsigned char> &udp_data = output;
    // Length Identifier (LI)
    udp_data.push_back(0x01);
    // Transport Identifier (TI)
    udp_data.push_back(0x40);

    /* Based on IEC 61850-90-5 session protocol specification */
    // Session Identifier (SI)
    if (protocol == R_GOOSE_MODE)
    {
        udp_data.push_back(0xA1);   // 0xA1: non-tunneled GOOSE APDU
    }
    else if (protocol == R_SV_MODE)
    {
        udp_data.push_back(0xA2);   // 0xA2: non-tunneled SV APDU
    }

    // Length Identifier (LI)
    udp_data.push_back(0x18);   // 0x18 => 24 bytes = CommonHeader [1 byte] + LI [1 byte] + (SPDU Length + ... + Key ID) [22 bytes]

    // Common session header
    udp_data.push_back(0x80);   // Parameter Identifier (PI) of 0x80 as per IEC 61850-90-5

    // Length Identifier (LI)
    udp_data.push_back(0x16);   // 0x16 => 22 bytes = (SPDU Length + ... + Version Number) [10 bytes] + (Time of current key + ... + Key ID) [12 bytes]

    // SPDU Length (fixed size 4-byte word with maximum value of 65,517)
    /*
     * SPDU Number:             4 bytes
     * Version Number:          2 bytes
     * Security Information:   12 bytes
     * Payload Length:          4 bytes
     * Payload:                (as formed)
     * Signature:               2 bytes (signature production not considered => only 1-byte Tag + 1-byte Length
     */
    unsigned int spdu_length = (4 + 2) + 12 + 4 + payload.size() + 2;
    udp_data.push_back(static_cast<unsigned char>( (spdu_length >> 24) & 0xFF ));
    udp_data.push_back(static_cast<unsigned char>( (spdu_length >> 16) & 0xFF ));
    udp_data.push_back(static_cast<unsigned char>( (spdu_length >>  8) & 0xFF ));
    udp_data.push_back(static_cast<unsigned char>( (spdu_length      ) & 0xFF ));

    // SPDU Number (fixed size 4-byte unsigned integer word)
    unsigned int current_SPDUNum = spdu_num++;
    udp_data.push_back(static_cast<unsigned char>( (current_SPDUNum >> 24) & 0xFF ));
    udp_data.push_back(static_cast<unsigned char>( (current_SPDUNum >> 16) & 0xFF ));
    udp_data.push_back(static_cast<unsigned char>( (current_SPDUNum >>  8) & 0xFF ));
    udp_data.push_back(static_cast<unsigned char>( (current_SPDUNum      ) & 0xFF ));

    // Version Number (fixed 2-byte unsigned integer, assigned to 1 in this implementation)
    udp_data.push_back(0x00);
    udp_data.push_back(0x01);

    // Security Information (not used in this implementation, hence set to 0's)
    /* Time of current key: 4 bytes
     * Time to next key:    2 bytes
     * Security Algorithm:  2 bytes
     * Key ID:              4 bytes
     * ----------------------------
     * TOTAL:              12 bytes
     */
    for (size_t j{0}; j < 12; ++j)
    {
        udp_data.push_back(0x00);
    }

    // Form the Session User Information: prepend Payload Length to & append Signature to the Payload
    // Payload Length (fixed size 4-byte unsigned integer with maximum value of 65,399
    size_t payload_len{payload.size() + 4};  // Length of Payload plus Payload Length field itself
    udp_data.push_back(static_cast<unsigned char>( (payload_len >> 24) & 0xFF ));
    udp_data.push_back(static_cast<unsigned char>( (payload_len >> 16) & 0xFF ));
    udp_data.push_back(static_cast<unsigned char>( (payload_len >>  8) & 0xFF ));
    udp_data.push_back(static_cast<unsigned char>( (payload_len      ) & 0xFF ));

    udp_data.insert(udp_data.end(), payload.begin(), payload.end());

    // Signature Tag = 0x85
    udp_data.push_back(0x85);

    // Length of HMAC considered as zero in this implementation
    udp_data.push_back(0x00);   // Application Profile = UDP Data completely formed here
}
