#ifndef MMS_H
#define MMS_H

#include "CommModule.h"
#include "iec61850_server.h"
#include "DatabaseConn.h"

class MMSModule : public CommModule {
public:
    MMSModule();
    void start();
    void set_db_conn (std::string _db_configs) override {
        db_conn = new DatabaseConn(_db_configs);
    }
    
private:
    IedServer iedServer;
    DatabaseConn *db_conn;
    unsigned int interval;
    
    static void main_loop();
    static ControlHandlerResult control_handler(ControlAction action, void *parameter, MmsValue *value, bool test);
};

#endif //MMS_H