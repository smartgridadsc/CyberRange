/*
 *  PTOV59.h
 *
 *  Copyright 2022 ADSC
 *
 *  This file is part of SGCR.
 *
 *  SGCR is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  SGCR is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with SGCR. If not, see <http://www.gnu.org/licenses/>.
 *
 */
 
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
