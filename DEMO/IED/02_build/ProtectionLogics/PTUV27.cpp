#include "PTUV27.h"

using namespace std;

using namespace std::chrono;

PTUV27::PTUV27(std::list<std::string> &PTV_Phy_list, 
            std::list<double> &PTUV27_alarm_limit_list,
			std::list<double> &PTUV27_alarm_period_list,
			std::list<double> &PTUV27_trip_limit_list,
			std::list<double> &PTUV27_trip_period_list,
			std::vector<long long> &PTUV27_alarm_store_time,
			std::vector<long long> &PTUV27_trip_store_time,
			std::list<std::string> &CB_list) : LogicFunction(),
			phy_list(PTV_Phy_list),
			alarm_limit_list(PTUV27_alarm_limit_list),
			alarm_period_list(PTUV27_alarm_period_list),
			trip_limit_list(PTUV27_trip_limit_list),
			trip_period_list(PTUV27_trip_period_list),
			alarm_store_time(PTUV27_alarm_store_time),
			trip_store_time(PTUV27_trip_store_time),
			cb_list(CB_list)  
{

}

void PTUV27::start() 
{
    printf("PTUV27: start\n");
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
	        bool cb_open = false;
	
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
							if(atof(row[0]) < *trip_limit_val)
	                        {
	                            auto time_start = system_clock::now();
	                            auto time_s = time_start.time_since_epoch();
	
	                            if (trip_store_time[loop_count] == 0)
                                {
	                                trip_store_time[loop_count] = time_s.count();
	                            }
	                            
	                            else if (time_s.count() - trip_store_time[loop_count] >= ((*trip_period_val)*pow(10,9)))
	                            {
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
										cout << "PTUV27: " << phy_column_name << " is " << row[phy_count] << endl;
	                                    mysqlpp::Query update_cb = db_conn->conn.query("UPDATE " +  table_name + " SET " + cb_value + " = 0 WHERE name = '" + column_name + "'");
	                                    mysqlpp::UseQueryResult res = update_cb.use();
	                                    cout << "PTUV27 circuit breaker " << column_name << " opened" << endl;      
	                                }
	                                break;
	                            }                    
                            }
                            else if(atof(row[0]) < *alarm_limit_val && atof(row[0]) >= *trip_limit_val)
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
	                                    cout << "Under limit violation" << endl;
	                                }
	                                    
	                            }
	                        }    
	
	                        else if (atof(row[0]) >= *alarm_limit_val)
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
    printf("PTUV27: stop\n");
}
