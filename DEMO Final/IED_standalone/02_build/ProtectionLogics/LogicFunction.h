#ifndef LOGIC_FUNCTION_H
#define LOGIC_FUNCTION_H

#include <string>

#include "DatabaseConn.h"
#include "Lists.h"

extern bool ied_running;

class LogicFunction {
public:
    LogicFunction() {
        db_conn = NULL; 
    }
    virtual void start() = 0;
    void set_db_conn(std::string _db_configs) {
        db_conn = new DatabaseConn(_db_configs);
    }
protected:
    DatabaseConn *db_conn;
};

#endif //LOGIC_FUNCTION_H
