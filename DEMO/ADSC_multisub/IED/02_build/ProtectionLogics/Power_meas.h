/*
 *  Power_meas.h
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