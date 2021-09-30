#ifndef DatabaseConn_H
#define DatabaseConn_H

#include <string>
#include <mysql++.h>


class DatabaseConn {
public:
    DatabaseConn(std::string config_filename);
    bool connect();

    mysqlpp::Connection conn;

private:
    std::string username;
    std::string password;
    std::string db_name;
    std::string hostname;
    std::string port_num;
};

#endif
