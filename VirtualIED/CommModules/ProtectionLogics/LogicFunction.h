#ifndef LOGIC_FUNCTION_H
#define LOGIC_FUNCTION_H

#include <string>

#include "DatabaseConn.h"
#include "Lists.h"

extern bool ied_running;

class LogicFunction {
public:
    LogicFunction() {
        db_conn = NULL; //need to set the db_conn to 0 since *db_conn might have some value
    }
    virtual void start() = 0;
    void set_db_conn(DatabaseConn *_db_conn) {
        db_conn = _db_conn;
    }
protected:
    DatabaseConn *db_conn;
};

#endif //LOGIC_FUNCTION_H