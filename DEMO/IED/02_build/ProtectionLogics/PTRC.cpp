#include "PTRC.h"
#include "SharedMemory.h"
#include <list>
using namespace std;

PTRC::PTRC(list<string> &CB_list, 
            list<string> &remote_CB_cyber_list):
            LogicFunction(),
            cb_list(CB_list),
            remote_cb_list(remote_CB_cyber_list)
{
}

void PTRC::start() {
    printf("PTRC: start\n");
    while (ied_running) {
        sleep(1);
        
        list<int> remote_cb_val_list;
        for (auto remote_cb_str : remote_cb_list)
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
        
        auto cb_val = std::begin(cb_list);
        for (auto remote_cb_val : remote_cb_val_list)
        {               
			if (remote_cb_val == 1)
            {
                cout << "PTRC remote circuit breaker is closed" << endl;
                break;
            }

            else
            {
                cout << "PTRC remote circuit breaker is open" << endl;

                vector<string> strings;
                istringstream f(*cb_val);
                string s;

                while (getline(f, s, '.'))
                {
                    if (!s.empty())
                    {
                        strings.push_back(s);
                    }
                }
                string table_name = strings[0];
                string column_name = strings[1];
                string cb_value = strings[2];
                
				mysqlpp::Query update_query = db_conn->conn.query("UPDATE " +  table_name + " SET " + cb_value + " = 0 WHERE name = '" + column_name + "'");                                                
                cout << "UPDATE " +  table_name + " SET " + cb_value + " = 0 WHERE name = '" + column_name + "'" << endl;
                mysqlpp::UseQueryResult res = update_query.use();
                cout << "PTRC circuit breaker " << column_name << " has opened." << endl;
            }
        cb_val++;
        }

	}
    printf("PTRC: stop\n");
}
