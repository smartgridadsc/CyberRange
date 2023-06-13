/*
 *  PDIF87L.h
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
