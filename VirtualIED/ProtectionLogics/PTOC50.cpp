#include "PTOC50.h"

using namespace std;

PTOC50::PTOC50(list<string> &PTOC_phy_list, 
            list<double> &PTOC50_Thres_list,
            list<string> &CB_list):
            LogicFunction(),
            phy_list(PTOC_phy_list),
            threshold_list(PTOC50_Thres_list),
            cb_list(CB_list) 
{
}

void PTOC50::start() {
    printf("PTOC50: start\n");
    while (ied_running) {
        sleep(1);
        //printf("PTOC50: loop\n");

            auto phy_val = std::begin(phy_list);
            auto thres_val = std::begin(threshold_list);

            for (auto cb_val : cb_list)
            {
                vector<string> strings;
                istringstream f(cb_val);
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

                int cb_count = 0;                    
                mysqlpp::Row row;
                mysqlpp::Query cb_query = db_conn->conn.query("SELECT " + cb_value + " FROM " + table_name + " WHERE name = '" + column_name + "'");
                mysqlpp::StoreQueryResult res = cb_query.store();
                row = res[cb_count];

                if(!res)                    
                {
                    cerr << "Error message: " << cb_query.error() << endl;
                }
                else 
                {
                    if(atoi(row[cb_count]) == 0)
                    {
                        cout << "PTOC50 " << column_name << " is open. Skipping." << endl;           
                        break;
                    }
                        
                    else 
                   {
                        for (int i = 0; i < 3; i++)
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
                            mysqlpp::Query phy_query = db_conn->conn.query("SELECT " + phy_value + " FROM " + phy_table_name + " WHERE name = '" + phy_column_name + "'");
                            mysqlpp::StoreQueryResult res = phy_query.store();
                            row = res[phy_count];
                                
                            if(!res)
                            {
                                cerr << "Error message: " << phy_query.error() << endl;
                            }

                            else
                            {
                                if(atof(row[phy_count]) > (*thres_val/1000))
                                {
                                    //weizhe
                                    cout << "PTOC50: " << phy_column_name << " 's current " << row[phy_count] << " is higher than threshold value " << *thres_val/1000 << endl;
                                    for (auto cb_val : cb_list)
                                    {
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
                                        mysqlpp::UseQueryResult res = update_query.use();
                                        cout << "PTOC50 circuit breaker " << column_name_in << " has opened." << endl;
                                    }
                                    break;
                                }
                            }
                            phy_val++;
                            phy_count++;
                        }
                        thres_val++;
                    }
                }         
                cb_count++;
            }
    	}
    printf("PTOC50: stop\n");
}
