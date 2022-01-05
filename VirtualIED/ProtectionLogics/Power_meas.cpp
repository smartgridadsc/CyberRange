#include "Power_meas.h"

using namespace std;

Power_meas::Power_meas(std::list<std::string> &real_power_phy_list, 
                        std::list<std::string> &reactive_power_phy_list) : LogicFunction(),
                        real_phy_list(real_power_phy_list),
                        reactive_phy_list(reactive_power_phy_list)
{

}

void Power_meas::start() {
    printf("Power_meas: start\n");
    while (ied_running) {
        sleep(1);
        printf("Power_meas: loop\n");

        for (auto real_val : real_phy_list)
        {
            vector<string> strings;
            istringstream f(real_val);
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

            mysqlpp::Row row;
            mysqlpp::Query phy_query = db_conn->conn.query("SELECT " + phy_value + " FROM " + phy_table_name + " WHERE name = '" + phy_column_name + "'");
            mysqlpp::StoreQueryResult res = phy_query.store();
            row = res[0];

            if(!res)
            {
                cout << "Error message: " << phy_query.error() << endl;
            }

            else
            {
                //comment out for now
                //cout << "Real Power: " << row[0] << endl;
            }
        }

        for (auto reactive_val : reactive_phy_list)
        {
            vector<string> strings;
            istringstream f(reactive_val);
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

            mysqlpp::Row row;
            mysqlpp::Query phy_query = db_conn->conn.query("SELECT " + phy_value + " FROM " + phy_table_name + " WHERE name = '" + phy_column_name + "'");
            mysqlpp::StoreQueryResult res = phy_query.store();
            row = res[0];

        if(!res)
            {
                cout << "Error message: " << phy_query.error() << endl;
            }

            else
            {
                //comment out for now
                //cout << "Reactive Power: " << row[0] << endl;
            }
        }
    }
    printf("Power_meas: stop\n");
}
