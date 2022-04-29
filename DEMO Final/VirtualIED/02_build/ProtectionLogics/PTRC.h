#ifndef PTRC_H
#define PTRC_H

#include <list>
#include <string>
#include <unistd.h>


#include "LogicFunction.h"

class PTRC : public LogicFunction {
public:
    PTRC(std::list<std::string> &CB_list,
        std::list<std::string>  &remote_CB_cyber_list);
    void start();

private:
    std::list<std::string> &cb_list;
    std::list<std::string> &remote_cb_list;
};

#endif //PTRC_H
