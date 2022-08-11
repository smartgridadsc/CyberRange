#ifndef PDIF87L_H
#define PDIF87L_H

#include <list>
#include <string>
#include <unistd.h>


#include "LogicFunction.h"

class PDIF87L : public LogicFunction {
public:
    PDIF87L(std::list<std::string> &PTOC_phy_list, 
            std::list<double> &PDIF87L_Thres_list,
			std::list<std::string> &CB_list,
            std::list<std::string> &remote_current_cyber_list);
    void start();

private:
    std::list<std::string> &phy_list;
    std::list<double> &threshold_list;
    std::list<std::string> &cb_list;
    std::list<std::string> &remote_current_list;
};

#endif //PDIF87L_H
