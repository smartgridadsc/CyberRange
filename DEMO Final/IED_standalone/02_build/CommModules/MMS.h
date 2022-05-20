#ifndef MMS_H
#define MMS_H

#include <vector>
#include <string>

#include "CommModule.h"
#include "iec61850_server.h"
#include "DatabaseConn.h"

class MMSModule : public CommModule {
public:
    MMSModule();
    MMSModule(std::vector<std::string> &do_strings,
            std::vector<std::string> &t_strings,
            std::vector<std::string> &stVal_strings,
            std::vector<std::string> &db_strings);
    void start();
    void set_db_conn (std::string _db_configs) override;
    IedServer *get_mms_server() {
        return &iedServer;
    }
    
private:
    IedServer iedServer;
    DatabaseConn *db_conn;
    unsigned int interval;
    
    //to store parameters for control handlers
    std::vector<std::vector<void*> *> controlParams;
    
    static void main_loop();
    static ControlHandlerResult control_handler(ControlAction action, void *parameter, MmsValue *value, bool test);
};

#endif //MMS_H
