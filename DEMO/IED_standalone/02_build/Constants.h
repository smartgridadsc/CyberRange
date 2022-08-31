/*
 *  Constants.h
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
 
#ifndef CONSTANTS_H
#define CONSTANTS_H

#include <list>
#include <string>

std::list<double> PTOC50_Thres_list, PTOC51_currentNom_list, PTOV59_alarm_limit_list, PTOV59_alarm_period_list, PTOV59_trip_limit_list, PTOV59_trip_period_list,
                 PTUV27_alarm_limit_list, PTUV27_alarm_period_list, PTUV27_trip_limit_list, PTUV27_trip_period_list, PTTR_limit_list, PresSV_limit_list,
                 real_power_list,reactive_power_list, PDIF87L_Thres_list;

std::list<std::string> PTOC_phy_list, PTV_phy_list, PTOC_cyber_list, PTV_cyber_list, real_power_phy_list, reactive_power_phy_list, PTTR_phy_list, PTTR_cyber_list,
                        PresSV_phy_list, PresSV_cyber_list, CB_cyber_list, CB_list, remote_CB_cyber_list, remote_current_cyber_list;
                        
#endif //CONSTANTS_H
