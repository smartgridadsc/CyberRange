#include <fstream> // for ifstream,getline - file reading
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
    //to do: make the array consistent
    username = db_file[1];
    password = db_file[4];
    db_name = db_file[7];
    hostname = db_file[10];
    port_num = db_file[13];
}

bool DatabaseConn::connect() {
    
    try {
        conn.set_option(new mysqlpp::SetCharsetNameOption("utf8"));
        //.c_str() to convert string to const char*
        conn.connect(db_name.c_str(), hostname.c_str(), username.c_str(), password.c_str(), static_cast<unsigned int>(std::stoul(port_num)));
        printf("successful connection to %s database\n",db_name);
    }
    catch (mysqlpp::Exception e) {
        printf("Exception, cannot connect to %s' database\n",db_name);
        std::cout << e.what() << std::endl;
        conn.disconnect();
        exit(-1);
    } 
    return true;
}
