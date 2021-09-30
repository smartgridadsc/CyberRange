#ifndef PTOC50_H
#define PTOC50_H

#include <list>
#include <string>
#include <unistd.h>


#include "LogicFunction.h"

class PTOC50 : public LogicFunction {
public:
    PTOC50(std::list<std::string> &PTOC_phy_list, 
            std::list<double> &PTOC50_Thres_list,
			std::list<std::string> &CB_list);
    void start();

private:
    std::list<std::string> &phy_list;
    std::list<double> &threshold_list;
    std::list<std::string> &cb_list;
};

#endif //PTOC50_H
