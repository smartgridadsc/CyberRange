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
				list<string> &CB_list): LogicFunction(),
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

	    auto phy_val = std::begin(phy_list);
	    auto alarm_limit_val = std::begin(alarm_limit_list);
	    auto alarm_period_val = std::begin(alarm_period_list);
	    auto trip_limit_val = std::begin(trip_limit_list);
	    auto trip_period_val = std::begin(trip_period_list);
	
	    int loop_count = 0;
		
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
	
	        if (!res)
	        {
	            cout << "Error message: " << cb_query.error() << endl;
	        }
	        else
	        {
	            if(atoi(row[0]) == 0)
	            {
	                cout << column_name << " is open. Skipping." << endl;
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
	                    	cout << "Error message: " << phy_query.error() << endl;	                        
	                    }
	
	                    else
	                    {
							//weizhe
	                        if(atof(row[0]) > *trip_limit_val)
	                        {
	                            auto time_start = system_clock::now();
	                            auto time_s = time_start.time_since_epoch();
	
	                            if (trip_store_time[loop_count] == 0)
                                {
									trip_store_time[loop_count] = time_s.count();
	                            }
	                            else
	                            {
	                                if ((time_s.count() - trip_store_time[loop_count]) >= ((*trip_period_val)*pow(10,9)))
	                                {
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

											//weizhe
											cout << "PTOV59: " << row[0] << "|| trip_limit: " << *trip_limit_val << " || time: " << (*trip_period_val)*pow(10,9) << "s" << endl;
											mysqlpp::Query update_query = db_conn->conn.query("UPDATE " +  table_name_in + " SET " + cb_value_in + " = 0 WHERE name = '" + column_name_in + "'");													
											mysqlpp::UseQueryResult res = update_query.use();
											cout << "PTOV59 circuit breaker " << column_name_in << " has opened" << endl;
										}
	                                    break;
	                                }
	                            }
	                        }
	                        else if(atof(row[0]) >= *alarm_limit_val && atof(row[0]) < *trip_limit_val)
	                        {
	                            auto time_start = system_clock::now();
								auto time_s = time_start.time_since_epoch();

								trip_store_time[loop_count] = 0;

                                if (alarm_store_time[loop_count] == 0)
								{
									alarm_store_time[loop_count] = time_s.count();
	                            }
	                            else if (time_s.count() - alarm_store_time[loop_count] >= ((*alarm_period_val)*pow(10,9)))
	                            {    
	                                cout << "Over limit violation" << endl;
	                            }
	                        }
	
	                        else if (atof(row[0]) < *alarm_limit_val)
	                        {
	                            alarm_store_time[loop_count] = 0;
	                        }
	                    }
	                    loop_count ++;
	                    phy_val++;
	                    phy_count++;
	                }
	                alarm_limit_val++;
	                alarm_period_val++;
                    trip_limit_val++;
	                trip_period_val++;
	            } 
	        }
	        cb_count++;
	    }
    }
    printf("PTOV59: stop\n");
}
