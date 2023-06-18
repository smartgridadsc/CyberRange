/*
 *  Utils.h
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
 
#ifndef UTILS_H
#define UTILS_H

#include <string>
#include <vector>
#include <array>

#define DEBUG 10
#define INFO 20
#define WARNING 30
#define ERROR 40

#define LOG_LEVEL DEBUG
#define LOG(logLevel, ...) \
        if (logLevel >= LOG_LEVEL) \
        printf(__VA_ARGS__);

class Utils {
public:
    Utils() = delete;

    static unsigned char getUINT32Length(unsigned int num);
    static void convertUINT32IntoBytes(unsigned int num, std::vector<unsigned char> &vecOut);
    static void set_timestamp(std::array<unsigned char, 8> &timeArrOut);
    static void hex_string(const char* buffer, unsigned int length, std::string &output);
};

#endif //UTILS_H