#ifndef DATABASE_CONN_H
#define DATABASE_CONN_H

#include <string>

class DatabaseConn {
public:
    DatabaseConn(std::string config_filename); //args: user pasword databasename host portnum
    bool connect();

    Mysqlpp::Connection db_conn;

private:
    std::string username;
    std::string password;
    std::string db_name;
    std::string hostname;
    std::string port_num;
};

#endif //DATABASE_CONN_H