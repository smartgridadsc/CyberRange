#ifndef LISTS_H
#define LISTS_H

#define CB "Pos.stVal"
#define PTOC_Cyber "A.phs"
#define PTV_Cyber "PhV.phs"
#define real_power_Cyber "TotW.mag"
#define reactive_power_Cyber "TotVA.mag"
#define PTTR_Cyber "Tmp.mag"
#define PresSV_Cyber "PresSv.instMag"

extern std::list<double> PTOC50_Thres_list, PTOC51_currentNom_list, PTOV59_alarm_limit_list, PTOV59_alarm_period_list, PTOV59_trip_limit_list, PTOV59_trip_period_list,
                 PTUV27_alarm_limit_list, PTUV27_alarm_period_list, PTUV27_trip_limit_list, PTUV27_trip_period_list,PTTR_limit_list,PresSV_limit_list,
                 real_power_list,reactive_power_list, PDIF87L_Thres_list;

extern std::list<std::string> PTOC_phy_list, PTV_phy_list, PTOC_cyber_list, PTV_cyber_list, real_power_phy_list, reactive_power_phy_list, PTTR_phy_list, PTTR_cyber_list,
                        PresSV_phy_list, PresSV_cyber_list, CB_cyber_list, CB_list, remote_CB_cyber_list, remote_current_cyber_list;                  

#endif //LISTS_H
