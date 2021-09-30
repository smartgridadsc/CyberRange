#ifndef MMS_H
#define MMS_H

#include "CommModule.h"
#include "iec61850_server.h"

class MMSModule : public CommModule {
public:
    MMSModule();
    void start();
    
private:
    IedServer iedServer;
    unsigned int interval;

    static void main_loop();
    static ControlHandlerResult control_handler(ControlAction action, void *parameter, MmsValue *value, bool test);
};

#endif //MMS_H