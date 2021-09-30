#include "PTOC50.h"

using namespace std;

PTOC50::PTOC50(list<string> &PTOC_phy_list, 
            list<double> &PTOC_threshold_list,
            list<string> &CB_list):
            LogicFunction(),
            phy_list(PTOC_phy_list),
            threshold_list(PTOC_threshold_list),
            cb_list(CB_list) {
}


void PTOC50::start() {
    printf("PTOC50: start\n");
    while (ied_running) {
        sleep(1);
        printf("PTOC50: loop\n");

            auto phy_val = std::begin(phy_list);
            auto thres_val = std::begin(threshold_list);

            for (auto cb_val : cb_list)
            {

                //split strings based on "."
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

                //Querying the database for cb status
                int cb_count = 0;                    
                mysqlpp::Row row;
                mysqlpp::Query cb_query = db_conn->conn.query("SELECT " + cb_value + " FROM " + table_name + " WHERE name = '" + column_name + "'");
                // to tell the connection to connect to which db. db_conn->conn
                mysqlpp::StoreQueryResult res = cb_query.store();
                row = res[cb_count];

                if(!res)                    
                {
                    cerr << "Error message: " << cb_query.error() << endl;
                }
                else 
                {
                    cout << "The CB query executed successfully with no error." << endl;
                    bool cb_open = false;

                    do
                    {
                        cout << endl;
                        cout << "Ciruit Breaker: " << column_name << " is " << row[cb_count] << endl;
                        
                        if(atoi(row[cb_count]) == 0)
                        {
                            cb_open = true;
                            cout << column_name << " is open" << endl;
                            return;
                        }
                        
                        else
                        {
                            for (int i = 0; i < 3; i++)
                            {
                                //PTOC50 Physical iteration
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
                                
                                //Querying the database for current value
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
                                    cout << "The load current query executed successfully with no error." << endl;

                                    do
                                    {                                                                                                           
                                        cout << "PTOC50: " << phy_column_name << " is " << row[phy_count] << endl;
                                        
                                        if(atof(row[phy_count]) > *thres_val)
                                        {
                                            cout << phy_column_name << "'s current is higher than the threshold value of " << *thres_val << endl;
        
                                            for (auto cb_val : cb_list){

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
                                                
                                                cout << "opening circuit breaker: " << column_name_in << endl;
                                                mysqlpp::UseQueryResult res = update_query.use();
                                                cout << "circuit breaker " << column_name_in << " opened" << endl;
                                            }
                                            cb_open = true;
                                            return;
                                        }
                                        else
                                        {
                                            cout <<  phy_column_name << " is safe" << endl;
                                        }
                                    } while (cb_open);
                                }
                                phy_val++;
                                phy_count++;
                            }
                            thres_val++;
                        }
                    } while (cb_open); //end do ...while loop
                } // end else cb_query        
                cb_count++;
            } //end cb for loop
            cout << "PTOC50 function done!" << endl;
            cout << endl;

    	}
    printf("PTOC50: stop\n");
}
