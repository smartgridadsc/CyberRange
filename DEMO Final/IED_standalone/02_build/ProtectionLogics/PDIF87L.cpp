#include "PDIF87L.h"
#include "SharedMemory.h"
#include <list>
#include <cmath>

using namespace std;

PDIF87L::PDIF87L(list<string> &PTOC_phy_list, 
            list<double> &PDIF87L_threshold_list,
            list<string> &CB_list,
            list<std::string> &remote_current_cyber_list):
            LogicFunction(),
            phy_list(PTOC_phy_list),
            threshold_list(PDIF87L_threshold_list),
            cb_list(CB_list),
            remote_current_list(remote_current_cyber_list)  
{
}

void PDIF87L::start() {
    printf("PDIF87L: start\n");
    while (ied_running) {
        sleep(1);
                   

        list<float> remote_current_val_list;
        for (auto remote_cur_cyb : remote_current_list)
        {
            MemBlock cur_block = g_sh_mem.getValue(remote_cur_cyb);
            float remote_cur_val;

            if (cur_block.type == MemType::FLOAT32) 
            {
                remote_cur_val = cur_block.float_val;
                remote_current_val_list.push_back(remote_cur_val);
            } 
        }
        
        auto remote_cur_val = std::begin(remote_current_val_list);
        auto thres_val = std::begin(threshold_list);
        auto phy_val = std::begin(phy_list);

        for (auto cb_val : cb_list)
        {
            for (int i=0; i<phy_list.size(); i++)
            {                
                vector<string> strings;
                istringstream f(*phy_val);
                string s;

                while (getline(f, s, '.'))
                {                                    
                    if (!s.empty())
                {
                        strings.push_back(s);
                    }
                }

                string phy_table_name = strings[0];
                string phy_column_name = strings[1];
                string phy_value = strings[2];
                                    
                int phy_count = 0;      
                mysqlpp::Row row;
                mysqlpp::Query phy_query = db_conn->conn.query("SELECT " + phy_value + " FROM " + phy_table_name + " WHERE name = '" + phy_column_name + "'");
                mysqlpp::StoreQueryResult res = phy_query.store();
                row = res[phy_count];
                if(!res)
                {
                    cerr << "Error message: " << phy_query.error() << endl;
                }

                else
                {                
                    if(abs(atof(row[phy_count]) - *remote_cur_val) > *thres_val/1000)
                    {
                        //weizhe
                        cout << "PDIF87L: difference: " << abs(atof(row[phy_count]) - *remote_cur_val) << " is higher than threshold value " << *thres_val/1000 << endl;

                        vector<string> inner_strings;
                        istringstream f_in(cb_val);
                        string s_in;

                        while (getline(f_in, s_in, '.'))
                        {
                            if (!s_in.empty())
                            {
                                inner_strings.push_back(s_in);       
                            }
                        }
                        string table_name_in = inner_strings[0];
                        string column_name_in = inner_strings[1];
                        string cb_value_in = inner_strings[2];

                        mysqlpp::Query update_query = db_conn->conn.query("UPDATE " +  table_name_in + " SET " + cb_value_in + " = 0 WHERE name = '" + column_name_in + "'");                                                
                        cout << "UPDATE " +  table_name_in + " SET " + cb_value_in + " = 0 WHERE name = '" + column_name_in + "'" << endl;                        
                        mysqlpp::UseQueryResult res = update_query.use();
                        cout << "PDIF87L circuit breaker " << column_name_in << " has opened." << endl;
                        break;
                    }
                    
                    else
                    {
                        cout << "PDIF87L: difference: " << abs(atof(row[phy_count]) - *remote_cur_val) << " is within the threshold value " << *thres_val/1000 << endl;
                        cout << "PDIF87L is normal" << endl;
                    }
                }
                remote_cur_val++;
                phy_val++;
            }
            thres_val++;  
        }
	}
    printf("PDIF87L: stop\n");
}
