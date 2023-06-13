/*
 *  CILO.cpp
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
 
#include "CILO.h"
#include "SharedMemory.h"
#include <list>
#include <vector>
using namespace std;

CILO::CILO() {

}

void CILO::set_list(std::list<std::string> &_remote_cb_cyber_list) {
    remote_cb_cyber_list = _remote_cb_cyber_list;
}

bool CILO::check()
{
    bool check_result;
    list<int> remote_cb_val_list;

    for (auto remote_cb_str : remote_cb_cyber_list)
    {
        MemBlock block = g_sh_mem.getValue(remote_cb_str);
        bool remote_cb;

        if (block.type == MemType::BOOL)
        {
            remote_cb = block.bool_val;
            if (remote_cb == true)
            {
                remote_cb_val_list.push_back(1);
            }
            else
            {
                remote_cb_val_list.push_back(0);
            }
        }
    }
    
    auto cb_val = std::begin(remote_cb_val_list);
    if (*cb_val == 0)
    {
        printf("Cannot close local Circuit Breaker as Remote Circuit Breaker is open\n");
        check_result = false;
    }

    else if(*cb_val == 1)
    {
        printf("Local Circuit breaker is able to close as Remote CB is close\n");
        check_result = true;
    }

    return check_result;
}
