#include "CILO.h"
#include "SharedMemory.h"
#include <list>
#include <vector>
using namespace std;

// CILO::CILO(list<string> &remote_CB_cyber_list) : remote_cb_cyber_list(remote_CB_cyber_list)
// {
// }

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
