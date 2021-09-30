#ifndef Power_meas_H
#define Power_meas_H

#include <list>
#include <string>
#include <unistd.h>

#include "LogicFunction.h"

class Power_meas : public LogicFunction {
public:
    Power_meas(std::list<std::string> &real_power_phy_list, 
            std::list<std::string> &reactive_power_phy_list);

    void start();

private:
    std::list<std::string> &real_phy_list;
    std::list<std::string> &reactive_phy_list;
};

#endif //Power_meas_H
