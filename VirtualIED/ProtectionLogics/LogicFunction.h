#ifndef LOGIC_FUNCTION_H
#define LOGIC_FUNCTION_H

#include <string>

#include "../DatabaseConn.h"

extern bool ied_running;

class LogicFunction {
public:
    virtual void start() = 0;
    void set_db_conn(DatabaseConn *_db_conn) {
        db_conn = _db_conn;
    }
private:
    DatabaseConn *db_conn;
};

#endif //LOGIC_FUNCTION_H