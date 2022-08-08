#ifndef PTUV27_H
#define PTUV27_H

#include <list>
#include <string>
#include <unistd.h>
#include <math.h>
#include <chrono>

#include "LogicFunction.h"

class PTUV27 : public LogicFunction {
public:
    PTUV27(std::list<std::string> &PTV_Phy_list, 
            std::list<double> &PTUV27_alarm_limit_list,
			std::list<double> &PTUV27_alarm_period_list,
			std::list<double> &PTUV27_trip_limit_list,
			std::list<double> &PTUV27_trip_period_list,
			std::vector<long long> &PTUV27_alarm_store_time,
			std::vector<long long> &PTUV27_trip_store_time,
			std::list<std::string> &CB_list);
    void start();

private:
    std::list<std::string> &phy_list;
    std::list<double> &alarm_limit_list;
   	std::list<double> &alarm_period_list;
	std::list<double> &trip_limit_list;
	std::list<double> &trip_period_list;
	std::vector<long long> &alarm_store_time;
	std::vector<long long> &trip_store_time;
	std::list<std::string> &cb_list;  
};

#endif //PTUV27_H
