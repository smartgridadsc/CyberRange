#ifndef PTOV59_H
#define PTOV59_H

#include <list>
#include <string>
#include <unistd.h>
#include <math.h>
#include <chrono>

#include "LogicFunction.h"

class PTOV59 : public LogicFunction {
public:

    PTOV59(std::list<std::string> &PTV_Phy_list, 
            std::list<double> &PTOV59_alarm_limit_list,
			std::list<double> &PTOV59_alarm_period_list,
			std::vector<long long> &PTOV59_alarm_store_time,
			std::list<double> &PTOV59_trip_limit_list,
			std::list<double> &PTOV59_trip_period_list,
			std::vector<long long> &PTOV59_trip_store_time,
			std::list<std::string> &CB_list);
    void start();

private:
    std::list<std::string> &phy_list;
    std::list<double> &alarm_limit_list;
   	std::list<double> &alarm_period_list;
	std::vector<long long> &alarm_store_time;
	std::list<double> &trip_limit_list;
	std::list<double> &trip_period_list;
	std::vector<long long> &trip_store_time;
	std::list<std::string> &cb_list;  
};

#endif //PTOV59_H
