#include "PresSV.h"

using namespace std;

PresSV::PresSV(std::list<std::string> &PresSV_phy_list, 
			 std::list<std::string> &CB_list, 
			 std::list<double> &PresSV_limit_list) : LogicFunction(),
			phy_list(PresSV_phy_list),
			cb_list(CB_list),
			limit_list(PresSV_limit_list)

{
}

void PresSV::start()
{
	printf("PresSV: start\n");
    while(ied_running)
	{
		auto phy_val = std::begin(phy_list);
	    auto limit_val = std::begin(limit_list);
	
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
	        bool cb_open = false;
	
	        if (!res)
	        {
	            cout << "Error message: " << cb_query.error() << endl;
	        }
	        else
	        {
	            cout << "The CB query executed successfully with no error." << endl;
	
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
	                    //PresSV Physical iteration
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
	
	                    //Querying the database for temperature value
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
	                        cout << "The transformer temperature query executed successfully with no error." << endl;
	
	                        do
	                        {
	                            cout << "PresSV: " << phy_column_name << " is " << row[0] << endl;
	                            
	                            if(atof(row[0]) > *limit_val)
	                            {
	                                cout << phy_column_name << "'s temperature is higher than the limiy value of " << *limit_val << endl;
	
	                                for (auto cb_val : CB_list)
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
	                                        
	                                    mysqlpp::Query update_cb = db_conn->conn.query("UPDATE " +  table_name_in + " SET " + cb_value_in + " = 0 WHERE name = '" + column_name_in + "'");
	                                    mysqlpp::UseQueryResult res = update_cb.use();
	                                    cout << "opening circuit breaker: " << column_name_in << endl;
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
	                    limit_val++;
	                }
	            } while (cb_open);
	        }
	        cb_count++;
	    }
	    cout << "PresSV function done!" << endl;
	    cout << endl;
	}
	printf("PresSV stop\n");
}
