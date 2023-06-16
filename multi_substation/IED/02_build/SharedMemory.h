/*
 *  SharedMemory.h
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
 
#ifndef SHAREDMEMORY_H
#define SHAREDMEMORY_H

#include <unordered_map>
#include <string>
#include <mutex>

enum MemType {
    BOOL, INT32, FLOAT32, UINT32, FAILED
};

struct MemBlock {
    MemType type;
    union {
        bool bool_val;
        int int_val;
        float float_val;
        uint32_t uint32_val;
    };
};

class SharedMemory {
public:
    SharedMemory();
    void insert(std::string &key, MemBlock &value);
    void reassign(std::string &key, MemBlock &value); //unused
    MemBlock getValue(std::string &key);
    void print();

private:
    std::mutex mem_lock;
    std::unordered_map<std::string, MemBlock> mapping;
};

extern SharedMemory g_sh_mem;

#endif //SHAREDMEMORY_H