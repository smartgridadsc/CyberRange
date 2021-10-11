/* constants 
    for storing
*/

#ifndef CONSTANTS_H
#define CONSTANTS_H

#include <list>
#include <string>

//List
std::list<double> PTOC50_Thres_list, PTOC51_currentNom_list, PTOV59_alarm_limit_list, PTOV59_alarm_period_list, PTOV59_trip_limit_list, PTOV59_trip_period_list,
                 PTUV27_alarm_limit_list, PTUV27_alarm_period_list, PTUV27_trip_limit_list, PTUV27_trip_period_list,PTTR_limit_list,PresSV_limit_list,
                 real_power_list,reactive_power_list;

std::list<std::string> PTOC_phy_list, PTV_phy_list, PTOC_cyber_list, PTV_cyber_list, real_power_phy_list, reactive_power_phy_list, PTTR_phy_list, PTTR_cyber_list,
                        PresSV_phy_list, PresSV_cyber_list, CB_cyber_list, CB_list;

#endif //CONSTANTS_H
