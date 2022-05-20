#ifndef COMM_MODULE_H
#define COMM_MODULE_H

#include "Utils.h"

extern bool ied_running;

class CommModule {
public:
    virtual void start() = 0;
    virtual void set_db_conn(std::string _db_configs) {
        (void) _db_configs;
        LOG(DEBUG, "Dummy db_conn creation()\n");
    }
    
};

#endif //COMM_MODULE_H
