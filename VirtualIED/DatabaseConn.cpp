#include <vector>
#include <fstream>
#include <sstream>

#include "DatabaseConn.h"

using namespace std;

DatabaseConn::DatabaseConn(string config_filename) {

    vector<string> db_file;
    ifstream file(config_filename);
    string line;
    while (getline(file, line))
    {
        stringstream linestream(line);
        string item;
        while (getline(linestream, item, '"'))
        {
            db_file.push_back(item);
        }
    }
    const char* username = db_file[1].c_str();
    const char* password = db_file[4].c_str();
    const char* db_name = db_file[7].c_str();
    const char* hostname = db_file[10].c_str();
    unsigned int port_num = static_cast<unsigned int>(std::stoul(db_file[13]));
   
}

bool DatabaseConn::connect() {
    
    mysqlpp::Connection db_conn;

    try {
        db_conn.set_option(new mysqlpp::SetCharsetNameOption("utf8"));
        db_conn.connect(db_name, hostname, username, password, port_num);
        printf("successful connection to %s database\n",db_name);
    }
    catch (mysqlpp::Exception e) {
        printf("Exception, cannot connect to %s' database\n",db_name);
        std::cout << e.what() << std::endl;
        db_conn.disconnect();
        exit(-1);
    } 

    return true;
}
