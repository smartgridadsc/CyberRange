#include <nlohmann/json.hpp>
using json = nlohmann::json;

#include <fstream>

#include "Parser.h"
#include "Utils.h"

#include "Lists.h"
#include "Constants.h"
#include "PTOC50.h"
#include "PTOV59.h"
#include "PTUV27.h"
#include "PTTR.h"
#include "PresSV.h"
#include "Power_meas.h"

#include "CommModules/MMS.h"
#include "CommModules/R_GOOSE.h"
#include "CommModules/R_SV.h"

using namespace std;


list<LogicFunction *> Parser::parse_config(std::string cpmapping_filename, std::string thresholds_filename) {
list<LogicFunction *> logicList;

std::ifstream ifs_cp(cpmapping_filename);
json jf_cp = json::parse(ifs_cp);

for (auto& el:jf_cp["CPMapping"].items())
    {
        string temp_cyber = el.value()["Cyber"];
        if (temp_cyber.find(PTOC_Cyber) != std::string::npos)
        {
            PTOC_cyber_list.push_back(temp_cyber);
        }
        
        else if(temp_cyber.find(PTV_Cyber) != std::string::npos)
        {
            PTV_cyber_list.push_back(el.value()["Cyber"]);
        }

        else if (temp_cyber.find(CB) != std::string::npos)
        {
            CB_cyber_list.push_back(el.value()["Cyber"]);
        }

        else if (temp_cyber.find(real_power_Cyber) != std::string::npos)
        {
            real_power_phy_list.push_back(el.value()["Physical"]);
        }

        else if (temp_cyber.find(reactive_power_Cyber) != std::string::npos)
        {
            reactive_power_phy_list.push_back(el.value()["Physical"]);
        }

        else if (temp_cyber.find(PTTR_Cyber) != std::string::npos)
        {
                PTTR_cyber_list.push_back(temp_cyber);
        }

        else if (temp_cyber.find(PresSV_Cyber) != std::string::npos)
        {
                PresSV_cyber_list.push_back(temp_cyber);
        }
    }

    PTOC_cyber_list.sort();
    PTV_cyber_list.sort();
    CB_cyber_list.sort();
    PTTR_cyber_list.sort();
    PresSV_cyber_list.sort();

    for (auto ptoc_cyb_val : PTOC_cyber_list)
    {
        for (auto& el:jf_cp["CPMapping"].items())
        {
            if (ptoc_cyb_val == el.value()["Cyber"])
            {
                PTOC_phy_list.push_back(el.value()["Physical"]);
            }
        }
    }

    for (auto ptv_cyb_val : PTV_cyber_list)
    {
        for (auto& el:jf_cp["CPMapping"].items())
        {
            if (ptv_cyb_val == el.value()["Cyber"])
            {
                PTV_phy_list.push_back(el.value()["Physical"]);
            }
        }
    }

    for (auto cb_cyb_val : CB_cyber_list)
    {
        for (auto& el:jf_cp["CPMapping"].items())
        {
            if (cb_cyb_val == el.value()["Cyber"])
            {
                CB_list.push_back(el.value()["Physical"]);
            }
        }
    }

    for (auto pttr_cyb_val : PTTR_cyber_list)
    {
        for (auto& el:jf_cp["CPMapping"].items())
        {
            if (pttr_cyb_val == el.value()["Cyber"])
            {
                PTTR_phy_list.push_back(el.value()["Physical"]);
            }
        }
    }

    for (auto pressv_cyb_val : PresSV_cyber_list)
    {
        for (auto& el:jf_cp["CPMapping"].items())
        {
            if (pressv_cyb_val == el.value()["Cyber"])
            {
                PresSV_phy_list.push_back(el.value()["Physical"]);
            }
        }
    }

    vector<long long> PTOC51_store_time, PTOV59_alarm_store_time, PTOV59_trip_store_time, PTUV27_alarm_store_time, PTUV27_trip_store_time; 
    for (int i = 0; i < PTV_phy_list.size();i++)
    {
        PTOC51_store_time.push_back(0);
        PTOV59_alarm_store_time.push_back(0);
        PTOV59_trip_store_time.push_back(0);
        PTUV27_alarm_store_time.push_back(0);
        PTUV27_trip_store_time.push_back(0);
    }
    cout << "size of store time: " << PTOV59_trip_store_time.size() << endl;

    std::ifstream ifs_t(thresholds_filename);
    json jf_t = json::parse(ifs_t);

    if (jf_t.contains("PTOC50"))
    {
        for (auto& el : jf_t["PTOC50"].items())
        {
          PTOC50_Thres_list.push_back(stod(el.value()["Threshold"].get<string>()));
        }
    }

    if (jf_t.contains("PTOV59"))
    {
        for (auto& el : jf_t["PTOV59"].items())
        {
            for(auto& inner_el : el.value()["AlarmThreshold"]["Limit_p.u."].items()) 
            {
                PTOV59_alarm_limit_list.push_back(stod(inner_el.value().get<string>())); 
            }

            for(auto& inner_el : el.value()["AlarmThreshold"]["Period_s"].items())
            {
                PTOV59_alarm_period_list.push_back(stod(inner_el.value().get<string>()));
            }

            for(auto& inner_el : el.value()["TripThreshold"]["Limit_p.u."].items())
            {
                PTOV59_trip_limit_list.push_back(stod(inner_el.value().get<string>()));
            }

            for(auto& inner_el : el.value()["TripThreshold"]["Period_s"].items())
            {
                PTOV59_trip_period_list.push_back(stod(inner_el.value().get<string>()));
            }
        }
    }

    if (jf_t.contains("PTUV27"))
    {
        for (auto& el : jf_t["PTUV27"].items())
        {
            for(auto& inner_el : el.value()["AlarmThreshold"]["Limit_p.u."].items())
            {
                PTUV27_alarm_limit_list.push_back(stod(inner_el.value().get<string>()));
            }

            for(auto& inner_el : el.value()["AlarmThreshold"]["Period_s"].items())
            {
                PTUV27_alarm_period_list.push_back(stod(inner_el.value().get<string>()));
            }

            for(auto& inner_el : el.value()["TripThreshold"]["Limit_p.u."].items())
            {
                PTUV27_trip_limit_list.push_back(stod(inner_el.value().get<string>()));
            }

            for(auto& inner_el : el.value()["TripThreshold"]["Period_s"].items())
            {
                PTUV27_trip_period_list.push_back(stod(inner_el.value().get<string>()));
            }
        }
    }

    if (jf_t.contains("PTTR"))
    {
        for (auto& el : jf_t["PTTR"].items())
        {
            PTTR_limit_list.push_back(stod(el.value()["Limit"].get<string>()));
        }
    }

    if (jf_t.contains("PresSV"))
    {
        for (auto& el : jf_t["PresSV"].items())
        {
            PresSV_limit_list.push_back(stod(el.value()["Limit"].get<string>()));
        }
    }

    if (!PTOC50_Thres_list.empty())
    {
        PTOC50 *ptoc50 = new PTOC50(PTOC_phy_list, PTOC50_Thres_list, CB_list);
        logicList.push_back(ptoc50);
        LOG(INFO, "PTOC50 added\n");
    }

    if (!PTOV59_alarm_limit_list.empty())
    {
        PTOV59 *ptov59 = new PTOV59(PTV_phy_list,PTOV59_alarm_limit_list,PTOV59_alarm_period_list,PTOV59_alarm_store_time,PTOV59_trip_limit_list,PTOV59_trip_period_list, PTOV59_trip_store_time,CB_list);
        logicList.push_back(ptov59);
        LOG(INFO, "PTOV59 added\n");
    }

    if (!PTUV27_alarm_limit_list.empty())
    {
        PTUV27 *ptuv27 = new PTUV27(PTV_phy_list,PTUV27_alarm_limit_list,PTUV27_alarm_period_list,PTUV27_trip_limit_list,PTUV27_trip_period_list,PTUV27_alarm_store_time, PTUV27_trip_store_time,CB_list);
        logicList.push_back(ptuv27);
        LOG(INFO, "PTUV27 added\n");
    }

    if(!PTTR_limit_list.empty())
    {
        PTTR *pttr = new PTTR(PTTR_phy_list,CB_list,PTTR_limit_list);
        logicList.push_back(pttr);
        LOG(INFO, "PTTR added\n");
    }
    
    if(!PresSV_limit_list.empty())
    {
        PresSV *pressv = new PresSV(PresSV_phy_list,CB_list,PresSV_limit_list);
        logicList.push_back(pressv);
        LOG(INFO, "PresSV added\n");
    }

    if (!real_power_phy_list.empty())
    {
        Power_meas *power_meas = new Power_meas(real_power_phy_list,reactive_power_phy_list);
        logicList.push_back(power_meas);
        LOG(INFO, "Power added\n");
    }




    return logicList;
}

list<CommModule*> Parser::parse_comm_config() {
     list<CommModule*> commList;

     commList.push_back(new MMSModule());
     LOG(INFO, "MMS added\n"); 
     commList.push_back(new R_GOOSEModule());
     LOG(INFO, "R_GOOSE added\n"); 
     commList.push_back(new R_SVModule());
     LOG(INFO, "R_SV added\n"); 

     return commList;
}
