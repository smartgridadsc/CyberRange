#ifndef CILO_H
#define CILO_H

#include <list>
#include <string>
#include "iec61850_model.h"


class CILO{

public:
    CILO();
    void set_list(std::list<std::string> &remote_cb_cyber_list);
    bool check();

private:
    std::list<std::string> remote_cb_cyber_list;
};

#endif //CILO_H
