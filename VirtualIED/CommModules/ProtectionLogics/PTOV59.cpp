#include "PTOV59.h"

using namespace std;
using namespace std::chrono;


PTOV59::PTOV59(list<string> &PTV_Phy_list, 
            	list<double> &PTOV59_alarm_limit_list,
				list<double> &PTOV59_alarm_period_list,
				vector<long long> &PTOV59_alarm_store_time,
				list<double> &PTOV59_trip_limit_list,
				list<double> &PTOV59_trip_period_list,
				vector<long long> &PTOV59_trip_store_time,
				list<string> &CB_list): 
				LogicFunction(),
				phy_list(PTV_Phy_list),
    			alarm_limit_list(PTOV59_alarm_limit_list),
   				alarm_period_list(PTOV59_alarm_period_list),
				alarm_store_time(PTOV59_alarm_store_time),
				trip_limit_list(PTOV59_trip_limit_list),
				trip_period_list(PTOV59_trip_period_list),
				trip_store_time(PTOV59_trip_store_time),
				cb_list(CB_list)
{
}

void PTOV59::start() 
{
    printf("PTOV59: start\n");
    while (ied_running) 
	{
        sleep(1);
        printf("PTOV59: loop\n");

	    auto phy_val = std::begin(phy_list);
	    auto alarm_limit_val = std::begin(alarm_limit_list);
	    auto alarm_period_val = std::begin(alarm_period_list);
	    auto trip_limit_val = std::begin(trip_limit_list);
	    auto trip_period_val = std::begin(trip_period_list);
	
	    int loop_count = 0;
	
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
	        mysqlpp::StoreQueryResult res = cb_query.store();
	        row = res[cb_count];
	
	        if (!res)
	        {
	            cout << "Error message: " << cb_query.error() << endl;
	        }
	        else
	        {
	            cout << "The CB query executed successfully with no error." << endl;
	            bool cb_open = false;
	
	            do
	            {
	                cout << endl;
	                cout << "Ciruit Breaker: " << column_name << " is " << row[0] << endl;    
	
	                if(atoi(row[0]) == 0)
	                {
	                    cb_open = true;
	                    cout << column_name << " is open" << endl;
	                    return;
	                }
	                
	                else
	                {
	                     for (int i = 0; i < 3; i++)
	                    {
	                        //PTV Physical iteration
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
	
	                        //Querying the database for voltage value
	                        int phy_count = 0;
	                        mysqlpp::Query phy_query = db_conn->conn.query("SELECT " + phy_value + " FROM " + phy_table_name + " WHERE name = '" + phy_column_name + "'");
	                        mysqlpp::StoreQueryResult res = phy_query.store();
	                        row = res[phy_count];
	
	                        if(!res)
	                        {
	                        cout << "Error message: " << phy_query.error() << endl;
	                        
	                        }
	
	                        else
	                        {
	                            cout << "The load voltage query executed successfully with no error." << endl;
	                            
	                            do
	                            {
	                                cout << "PTOV59: " << phy_column_name << " is " << row[0] << endl;
	                                
	                                //if higher than trip limit
	                                if(atof(row[0]) > *trip_limit_val)
	                                {
	                                    auto time_start = system_clock::now();
	                                    auto time_s = time_start.time_since_epoch();
	
	                                    //if store time is 0
	                                    if (trip_store_time[loop_count] == 0)
	                                    {
	                                        trip_store_time[loop_count] = time_s.count();
	                                    }
	                                    else
	                                    {
	                                        if (time_s.count() - trip_store_time[loop_count] >= ((*trip_period_val)*pow(10,9)))
	                                        {
	                                            cout << phy_column_name << "'s voltage is higher than the threshold value of " << *trip_limit_val << endl;
	                                            cout << "opening circuit breaker: " << column_name << endl;
	
	                                            mysqlpp::Query update_cb = db_conn->conn.query("UPDATE " +  table_name + " SET " + cb_value + " = 0 WHERE name = '" + column_name + "'");
	                                            mysqlpp::UseQueryResult res = update_cb.use();
	                                            cout << "circuit breaker " << column_name << " opened" << endl;
	                                            cb_open = true;
	
	                                            cout << "time = " << (time_s.count() - trip_store_time[loop_count])/pow(10,9) << "s" << endl;
	                                            return;
	                                        }
	                                    }
	                                }
	                                //if higher than Alarm limit
	                                else if(atof(row[0]) >= *alarm_limit_val && atof(row[0]) < *trip_limit_val)
	                                {
	                                    trip_store_time[loop_count] = 0;
	
	                                    auto time_start = system_clock::now();
	                                    auto time_s = time_start.time_since_epoch();
	
	                                    if (alarm_store_time[loop_count] == 0)
	                                    {
	                                        alarm_store_time[loop_count] = time_s.count();
	                                    }
	                                    else
	                                    {
	                                        if (time_s.count() - alarm_store_time[loop_count] >= ((*alarm_period_val)*pow(10,9)))
	                                        {
	                                            cout << "Over limit violation" << endl;
	                                            cout << phy_column_name << " has higher than " << *alarm_limit_val << endl;
	                                        }
	                                    }
	                                }
	
	                                else if (atof(row[0]) < *alarm_limit_val)
	                                {
	                                    alarm_store_time[loop_count] = 0;
	                                    cout <<  phy_column_name << " is safe" << endl;
	                                    cout << endl;
	                                }
	                            } while (cb_open);
	                        } // else cb query success
	                        loop_count ++;
	                        phy_val++;
	                        phy_count++;
	                    } // for i < 3 loop
	                    alarm_limit_val++;
	                    alarm_period_val++;
	                    trip_limit_val++;
	                    trip_period_val++;
	                } //end else cb_val != 0
	            } while (cb_open); // end do ... while loop
	        }
	        cb_count++;
	    } // end for cb_list loop
	    cout << "PTOV59 function done!" << endl;
	    cout << endl;
    }
    printf("PTOV59: stop\n");
}
