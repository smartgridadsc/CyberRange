#include <nlohmann/json.hpp>
using json = nlohmann::json;

#include <fstream>
#include <unordered_map>

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

#include "MMS.h"
#include "R_GOOSE.h"
#include "R_SV.h"
#include "UDPReceiver.h"

#include "rapidxml.hpp"
#include "rapidxml_print.hpp"
#include "rapidxml_utils.hpp"

#define CONFIG_DIR "config_files/"

using namespace std;

vector<long long> PTOC51_store_time, PTOV59_alarm_store_time, PTOV59_trip_store_time, PTUV27_alarm_store_time, PTUV27_trip_store_time;

list<LogicFunction *> Parser::parse_protection_logic_config(std::string &cpmapping_filename, std::string &thresholds_filename)
{
    list<LogicFunction *> logicList;

    //JSON parsing
    std::ifstream ifs_cp(cpmapping_filename);
    json jf_cp = json::parse(ifs_cp);

    for (auto &el : jf_cp["CPMapping"].items())
    {
        string temp_cyber = el.value()["Cyber"];

        if (temp_cyber.find(PTOC_Cyber) != std::string::npos)
        {
            PTOC_cyber_list.push_back(temp_cyber);
        }

        else if (temp_cyber.find(PTV_Cyber) != std::string::npos)
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
        for (auto &el : jf_cp["CPMapping"].items())
        {
            if (ptoc_cyb_val == el.value()["Cyber"])
            {
                PTOC_phy_list.push_back(el.value()["Physical"]);
            }
        }
    }

    for (auto ptv_cyb_val : PTV_cyber_list)
    {
        for (auto &el : jf_cp["CPMapping"].items())
        {
            if (ptv_cyb_val == el.value()["Cyber"])
            {
                PTV_phy_list.push_back(el.value()["Physical"]);
            }
        }
    }

    for (auto cb_cyb_val : CB_cyber_list)
    {
        for (auto &el : jf_cp["CPMapping"].items())
        {
            if (cb_cyb_val == el.value()["Cyber"])
            {
                CB_list.push_back(el.value()["Physical"]);
            }
        }
    }

    for (auto pttr_cyb_val : PTTR_cyber_list)
    {
        for (auto &el : jf_cp["CPMapping"].items())
        {
            if (pttr_cyb_val == el.value()["Cyber"])
            {
                PTTR_phy_list.push_back(el.value()["Physical"]);
            }
        }
    }

    for (auto pressv_cyb_val : PresSV_cyber_list)
    {
        for (auto &el : jf_cp["CPMapping"].items())
        {
            if (pressv_cyb_val == el.value()["Cyber"])
            {
                PresSV_phy_list.push_back(el.value()["Physical"]);
            }
        }
    }

    //Threshold
    std::ifstream ifs_t(thresholds_filename);
    json jf_t = json::parse(ifs_t);

    if (jf_t.contains("PTOC50"))
    {
        for (auto &el : jf_t["PTOC50"].items())
        {
            PTOC50_Thres_list.push_back(stod(el.value()["Threshold"].get<string>()));
        }
    }

    if (jf_t.contains("PTOV59"))
    {
        for (auto &el : jf_t["PTOV59"].items())
        {
            for (auto &inner_el : el.value()["AlarmThreshold"]["Limit_p.u."].items())
            {
                PTOV59_alarm_limit_list.push_back(stod(inner_el.value().get<string>()));
            }

            for (auto &inner_el : el.value()["AlarmThreshold"]["Period_s"].items())
            {
                PTOV59_alarm_period_list.push_back(stod(inner_el.value().get<string>()));
            }

            for (auto &inner_el : el.value()["TripThreshold"]["Limit_p.u."].items())
            {
                PTOV59_trip_limit_list.push_back(stod(inner_el.value().get<string>()));
            }

            for (auto &inner_el : el.value()["TripThreshold"]["Period_s"].items())
            {
                PTOV59_trip_period_list.push_back(stod(inner_el.value().get<string>()));
            }
        }
    }

    if (jf_t.contains("PTUV27"))
    {
        for (auto &el : jf_t["PTUV27"].items())
        {
            for (auto &inner_el : el.value()["AlarmThreshold"]["Limit_p.u."].items())
            {
                PTUV27_alarm_limit_list.push_back(stod(inner_el.value().get<string>()));
            }

            for (auto &inner_el : el.value()["AlarmThreshold"]["Period_s"].items())
            {
                PTUV27_alarm_period_list.push_back(stod(inner_el.value().get<string>()));
            }

            for (auto &inner_el : el.value()["TripThreshold"]["Limit_p.u."].items())
            {
                PTUV27_trip_limit_list.push_back(stod(inner_el.value().get<string>()));
            }

            for (auto &inner_el : el.value()["TripThreshold"]["Period_s"].items())
            {
                PTUV27_trip_period_list.push_back(stod(inner_el.value().get<string>()));
            }
        }
    }

    if (jf_t.contains("PTTR"))
    {
        for (auto &el : jf_t["PTTR"].items())
        {
            PTTR_limit_list.push_back(stod(el.value()["Limit"].get<string>()));
        }
    }

    if (jf_t.contains("PresSV"))
    {
        for (auto &el : jf_t["PresSV"].items())
        {
            PresSV_limit_list.push_back(stod(el.value()["Limit"].get<string>()));
        }
    }

    //for time stamp
    if (!PTOV59_alarm_limit_list.empty())
    {
        for (int i = 0; i < PTV_phy_list.size(); i++)
        {
            PTOV59_alarm_store_time.push_back(0);
            PTOV59_trip_store_time.push_back(0);
        }
    }

    if (!PTUV27_alarm_limit_list.empty())
    {
        for (int i = 0; i < PTV_phy_list.size(); i++)
        {
            PTUV27_alarm_store_time.push_back(0);
            PTUV27_trip_store_time.push_back(0);
        }
    }
    if (!PTOC51_currentNom_list.empty())
    {
        for (int i = 0; i < PTOC_phy_list.size(); i++)
        {
            PTOC51_store_time.push_back(0);
        }
    }

    //list empty

    if (!PTOC50_Thres_list.empty())
    {
        PTOC50 *ptoc50 = new PTOC50(PTOC_phy_list, PTOC50_Thres_list, CB_list);
        logicList.push_back(ptoc50);
        LOG(INFO, "PTOC50 added\n");
    }

    if (!PTOV59_alarm_limit_list.empty())
    {
        PTOV59 *ptov59 = new PTOV59(PTV_phy_list, PTOV59_alarm_limit_list, PTOV59_alarm_period_list, PTOV59_alarm_store_time, PTOV59_trip_limit_list, PTOV59_trip_period_list, PTOV59_trip_store_time, CB_list);
        logicList.push_back(ptov59);
        LOG(INFO, "PTOV59 added\n");
    }

    if (!PTUV27_alarm_limit_list.empty())
    {
        PTUV27 *ptuv27 = new PTUV27(PTV_phy_list, PTUV27_alarm_limit_list, PTUV27_alarm_period_list, PTUV27_trip_limit_list, PTUV27_trip_period_list, PTUV27_alarm_store_time, PTUV27_trip_store_time, CB_list);
        logicList.push_back(ptuv27);
        LOG(INFO, "PTUV27 added\n");
    }

    if (!PTTR_limit_list.empty())
    {
        PTTR *pttr = new PTTR(PTTR_phy_list, CB_list, PTTR_limit_list);
        logicList.push_back(pttr);
        LOG(INFO, "PTTR added\n");
    }

    if (!PresSV_limit_list.empty())
    {
        PresSV *pressv = new PresSV(PresSV_phy_list, CB_list, PresSV_limit_list);
        logicList.push_back(pressv);
        LOG(INFO, "PresSV added\n");
    }

    if (!real_power_phy_list.empty())
    {
        Power_meas *power_meas = new Power_meas(real_power_phy_list, reactive_power_phy_list);
        logicList.push_back(power_meas);
        LOG(INFO, "Power added\n");
    }

    return logicList;
}

ModelUpdater Parser::parse_model_updater_config(std::string &cpmapping_filename)
{
    vector<string> da_strings;
    vector<string> db_entries;

    //JSON parsing
    std::ifstream ifs_cp(cpmapping_filename);
    json jf_cp = json::parse(ifs_cp);

    for (auto &el : jf_cp["CPMapping"].items())
    {
        string temp_cyber = el.value()["Cyber"];

        //Get DataAttribute ref string
        //Need to modify string, given the current CPMapping schema
        //e.g. MIED1.MEAS.MMXU1.TotW.mag.i --> MIED1MEAS/MMXU1.TotW.mag.i
        int pos = temp_cyber.find_first_of('.', 0);
        temp_cyber.replace(pos, 1, "");

        pos = temp_cyber.find_first_of('.', 0);
        temp_cyber.replace(pos, 1, "/");

        da_strings.push_back(temp_cyber);

        //Get database tableName, entryKey and targetColumn
        string temp_phy = el.value()["Physical"];
        db_entries.push_back(temp_phy);
    }

    ModelUpdater modelUpdater(da_strings, db_entries);
    return modelUpdater;
}

list<CommModule *> Parser::parse_comm_config(std::string &sed_filename, std::string &ied_name, std::string &cpmapping_filename)
{
    list<CommModule *> commList;
    CommModule *commMod;
    /*--------------------------------------
        UDPReceiver (.sed)
    --------------------------------------*/

    if (!sed_filename.empty())
        commMod = config_UDPRecv(sed_filename, ied_name);
    if (commMod != nullptr)
    {
        commList.push_back(commMod);
        LOG(INFO, "UDPRecv added\n\n");
    }

    /*--------------------------------------
        R_SVModule (ied_name)
    --------------------------------------*/
    //commMod = config_RSV(ied_name);
    if (commMod != nullptr)
    {
        commList.push_back(commMod);
        LOG(INFO, "R-SV added\n\n");
    }

    /*--------------------------------------
        R_GOOSEModule (ied_name)
    --------------------------------------*/
    //commMod = config_RGOOSE(ied_name);
    if (commMod != nullptr)
    {
        commList.push_back(commMod);
        LOG(INFO, "R-GOOSE added\n\n");
    }

    /*--------------------------------------
        MMSModule (N.A.)
    --------------------------------------*/
    commMod = config_MMS(ied_name, cpmapping_filename);
    if (commMod != nullptr)
    {
        commList.push_back(commMod);
        LOG(INFO, "MMS added\n");
    }

    return commList;
}

// Current code only parses if there is 1 logical device
// TO DO: handle multiple logical device
CommModule *Parser::config_UDPRecv(string &sed_filename, string &this_ied)
{
    unordered_map<string, GOOSE_Subscription> goose_subs;
    unordered_map<string, SV_Subscription> sv_subs;
    string local_ip;
    vector<string> multicast_addrs;

    string filename = CONFIG_DIR + sed_filename;
    rapidxml::file<> xmlFile(filename.c_str());
    rapidxml::xml_document<> doc;
    doc.parse<0>(xmlFile.data());

    // Find out the root node: prints "Root Node's name: SCL" for a SED file
    xml_node *root_node = doc.first_node();
    if (static_cast<string>(root_node->name()) == "SCL")
    {
        LOG(DEBUG, "Parsing for UDPRecv Module (%s)\n", filename.c_str());
    }
    else
    {
        LOG(ERROR, "Name of Root Node is not \"SCL\"! Please check format of ICD file: %s", sed_filename.c_str());
        return nullptr;
    }

    xml_node *comm_node = root_node->first_node("Communication");

    // map to temporarily hold references to each IEDs comm node
    // and get local_ip
    unordered_map<string, xml_node *> connAP_map;
    for (xml_node *subnet_node = comm_node->first_node("SubNetwork"); subnet_node; subnet_node = subnet_node->next_sibling("SubNetwork"))
    {
        for (xml_node *connAP_node = subnet_node->first_node("ConnectedAP"); connAP_node; connAP_node = connAP_node->next_sibling("ConnectedAP"))
        {
            xml_attr *name_attr = connAP_node->first_attribute("iedName");
            if (name_attr == nullptr)
                continue;
            string ied_name(name_attr->value());
            //get local ip
            if (ied_name.compare(this_ied) == 0)
            {
                for (xml_node *p_node = connAP_node->first_node("Address")->first_node("P"); p_node; p_node = p_node->next_sibling("P"))
                {
                    xml_attr *type_attr = p_node->first_attribute("type");
                    if (strncmp(type_attr->value(), "IP", strlen("IP")) == 0 && (strlen("IP") == strlen(type_attr->value())))
                    {
                        local_ip = string(p_node->value());
                        continue;
                    }
                }
            }
            connAP_map[ied_name] = connAP_node;
        }
    }

    bool found = false;

    //Find goose/sampled values control blocks that this IED should subscribe to
    for (xml_node *ied_node = root_node->first_node("IED"); ied_node; ied_node = ied_node->next_sibling("IED"))
    {
        xml_attr *name_attr = ied_node->first_attribute("name");
        if (name_attr == nullptr)
            continue;
        string ied_name(name_attr->value());
        if (this_ied.compare(ied_name) == 0)
            continue;

        xml_node *ln0_node = ied_node->first_node("AccessPoint")
                                 ->first_node("LDevice")
                                 ->first_node("LN0");
        if (ln0_node == nullptr)
        {
            LOG(DEBUG, "ln0 node not found for %s\n", name_attr->value());
            continue;
        }
        //FOR GOOSECTL BLOCKS
        LOG(DEBUG, "Parsing available GOOSE_CTL_BLOCKS\n");
        for (xml_node *gsectl_node = ln0_node->first_node("GSEControl"); gsectl_node; gsectl_node = gsectl_node->next_sibling("GSEControl"))
        {
            for (xml_node *sub_ied = gsectl_node->first_node("IEDName"); sub_ied; sub_ied = sub_ied->next_sibling("IEDName"))
            {
                if (this_ied.compare(sub_ied->value()) != 0)
                    continue;

                GOOSE_Subscription gse_sub;
                string temp_multicast;

                xml_node *connAP_node;
                try
                {
                    connAP_node = connAP_map.at(ied_name);
                }
                catch (out_of_range e)
                {
                    LOG(ERROR, "Cannot find IED communication details in <Communication>\n");
                    continue;
                }

                //get sourceIP
                found = false;
                for (xml_node *p_node = connAP_node->first_node("Address")->first_node("P"); p_node; p_node = p_node->next_sibling("P"))
                {
                    xml_attr *type_attr = p_node->first_attribute("type");
                    if (strncmp(type_attr->value(), "IP", strlen("IP")) == 0 && (strlen("IP") == strlen(type_attr->value())))
                    {
                        gse_sub.sourceIP = string(p_node->value());
                        found = true;
                    }
                }
                if (!found)
                {
                    LOG(ERROR, "Cannot find source IP\n");
                }

                //get gocb_ref
                xml_attr *gsectl_name = gsectl_node->first_attribute("Name");
                if (gsectl_name == nullptr)
                    continue;
                gse_sub.gocb_ref = string(gsectl_name->value());
                LOG(DEBUG, "Found GSEControl %s\n", gse_sub.gocb_ref.c_str());

                //get dataset name
                xml_attr *gsectl_dsname = gsectl_node->first_attribute("datSet");
                if (gsectl_dsname == nullptr)
                    continue;
                gse_sub.dataset_name = string(gsectl_dsname->value());

                found = false;
                //get da strings and numDataSetEntries
                for (xml_node *ds_node = ln0_node->first_node("DataSet"); ds_node; ds_node = ds_node->next_sibling("DataSet"))
                {
                    xml_attr *ds_name = ds_node->first_attribute("name");
                    if (strncmp(ds_name->value(), gsectl_dsname->value(), strlen(gsectl_dsname->value())) == 0)
                    {
                        found = true;
                        LOG(DEBUG, "Found Dataset %s\n", ds_name->value());
                        for (xml_node *fcda_node = ds_node->first_node("FCDA"); fcda_node; fcda_node = fcda_node->next_sibling("FCDA"))
                        {
                            if (fcda_node == 0)
                            {
                                LOG(ERROR, "Cannot find FCDA node\n");
                                return nullptr;
                            }
                            //Ied name
                            string da_ref(ied_name);
                            //LD name
                            xml_attr *entry_attr = fcda_node->first_attribute("ldInst");
                            if (entry_attr == 0)
                            {
                                LOG(ERROR, "Cannot find ldInst\n");
                                return nullptr;
                            }
                            da_ref.append(entry_attr->value());
                            da_ref.append("/");
                            //LN name
                            entry_attr = fcda_node->first_attribute("lnClass");
                            if (entry_attr == 0)
                            {
                                LOG(ERROR, "Cannot find lnClass\n");
                                return nullptr;
                            }
                            da_ref.append(entry_attr->value());
                            entry_attr = fcda_node->first_attribute("lnInst");
                            if (entry_attr == 0)
                            {
                                LOG(ERROR, "Cannot find lnInst\n");
                                return nullptr;
                            }
                            da_ref.append(entry_attr->value());
                            da_ref.append(".");
                            //DO name
                            entry_attr = fcda_node->first_attribute("doName");
                            if (entry_attr == 0)
                            {
                                LOG(ERROR, "Cannot find doName\n");
                                return nullptr;
                            }
                            da_ref.append(entry_attr->value());
                            da_ref.append(".");
                            //DA name
                            entry_attr = fcda_node->first_attribute("daName");
                            if (entry_attr == 0)
                            {
                                LOG(ERROR, "Cannot find daName\n");
                                return nullptr;
                            }
                            da_ref.append(entry_attr->value());

                            gse_sub.da_strs.push_back(da_ref);
                            gse_sub.num_dataSet_entries++;
                        } // end for each fcda node
                    }     // endif dsname == ds_in_gocb
                }         // end for each dataset in ln0
                if (!found)
                {
                    LOG(ERROR, "\tCannot find dataset definition\n");
                    return nullptr;
                }

                //get multicast addr and appID
                for (xml_node *gse_node = connAP_node->first_node("GSE"); gse_node; gse_node = gse_node->next_sibling("GSE"))
                {
                    xml_attr *cbName_attr = gse_node->first_attribute("cbName");
                    if (cbName_attr == nullptr)
                        continue;
                    if (gse_sub.gocb_ref.compare(cbName_attr->value()) != 0)
                        continue;

                    for (xml_node *p_node = gse_node->first_node("Address")->first_node("P"); p_node; p_node = p_node->next_sibling("P"))
                    {
                        xml_attr *type_attr = p_node->first_attribute("type");
                        if (type_attr == nullptr)
                            continue;
                        //get multicast addr
                        if (strncmp(type_attr->value(), "IP", strlen("IP")) == 0 && (strlen("IP") == strlen(type_attr->value())))
                        {
                            temp_multicast = string(p_node->value());
                        }
                        //get appID
                        else if (strncmp(type_attr->value(), "APPID", strlen("APPID")) == 0)
                        {
                            gse_sub.app_ID = string(p_node->value());
                        }
                    }
                }
                if (temp_multicast.compare("") == 0)
                {
                    LOG(ERROR, "Cannot find multicast addr\n");
                    return nullptr;
                }
                if (gse_sub.app_ID.compare("") == 0)
                {
                    LOG(ERROR, "Cannot find appID\n");
                    return nullptr;
                }
                //add if okay
                multicast_addrs.push_back(temp_multicast);
                goose_subs[gse_sub.sourceIP] = gse_sub;
                break; //can exit if this GSEControl already added
            }          // END for each subscribing IED
        }              // END for each GSEControl node
        // END check for goose

        //FOR SVCTL BLOCKS
        LOG(DEBUG, "Parsing available SV_CTL_BLOCKS\n");
        for (xml_node *svctl_node = ln0_node->first_node("SampledValuesControl"); svctl_node; svctl_node = svctl_node->next_sibling("SampledValuesControl"))
        {
            for (xml_node *sub_ied = svctl_node->first_node("IEDName"); sub_ied; sub_ied = sub_ied->next_sibling("IEDName"))
            {
                if (this_ied.compare(sub_ied->value()) != 0)
                    continue;

                SV_Subscription sv_sub;
                string temp_multicast;

                xml_node *connAP_node;
                try
                {
                    connAP_node = connAP_map.at(ied_name);
                }
                catch (out_of_range e)
                {
                    LOG(ERROR, "Cannot find IED communication details in <Communication>\n");
                    continue;
                }

                //get sourceIP
                found = false;
                for (xml_node *p_node = connAP_node->first_node("Address")->first_node("P"); p_node; p_node = p_node->next_sibling("P"))
                {
                    xml_attr *type_attr = p_node->first_attribute("type");
                    if (strncmp(type_attr->value(), "IP", strlen("IP")) == 0 && (strlen("IP") == strlen(type_attr->value())))
                    {
                        sv_sub.sourceIP = string(p_node->value());
                        found = true;
                    }
                }
                if (!found)
                {
                    LOG(ERROR, "Cannot find source IP\n");
                }

                //get gocb_ref
                xml_attr *svctl_name = svctl_node->first_attribute("Name");
                if (svctl_name == nullptr)
                    continue;
                sv_sub.svcb_ref = string(svctl_name->value());
                LOG(DEBUG, "Found SampledValuesControl %s\n", sv_sub.svcb_ref.c_str());

                //get dataset name
                xml_attr *svctl_dsname = svctl_node->first_attribute("datSet");
                if (svctl_dsname == nullptr)
                    continue;
                sv_sub.dataset_name = string(svctl_dsname->value());

                found = false;
                //get da strings and numDataSetEntries
                for (xml_node *ds_node = ln0_node->first_node("DataSet"); ds_node; ds_node = ds_node->next_sibling("DataSet"))
                {
                    xml_attr *ds_name = ds_node->first_attribute("name");
                    if (strncmp(ds_name->value(), svctl_dsname->value(), strlen(svctl_dsname->value())) == 0)
                    {
                        found = true;
                        LOG(DEBUG, "Found Dataset %s\n", ds_name->value());
                        for (xml_node *fcda_node = ds_node->first_node("FCDA"); fcda_node; fcda_node = fcda_node->next_sibling("FCDA"))
                        {
                            if (fcda_node == 0)
                            {
                                LOG(ERROR, "Cannot find FCDA node\n");
                                return nullptr;
                            }
                            //Ied name
                            string da_ref(ied_name);
                            //LD name
                            xml_attr *entry_attr = fcda_node->first_attribute("ldInst");
                            if (entry_attr == 0)
                            {
                                LOG(ERROR, "Cannot find ldInst\n");
                                return nullptr;
                            }
                            da_ref.append(entry_attr->value());
                            da_ref.append("/");
                            //LN name
                            entry_attr = fcda_node->first_attribute("lnClass");
                            if (entry_attr == 0)
                            {
                                LOG(ERROR, "Cannot find lnClass\n");
                                return nullptr;
                            }
                            da_ref.append(entry_attr->value());
                            entry_attr = fcda_node->first_attribute("lnInst");
                            if (entry_attr == 0)
                            {
                                LOG(ERROR, "Cannot find lnInst\n");
                                return nullptr;
                            }
                            da_ref.append(entry_attr->value());
                            da_ref.append(".");
                            //DO name
                            entry_attr = fcda_node->first_attribute("doName");
                            if (entry_attr == 0)
                            {
                                LOG(ERROR, "Cannot find doName\n");
                                return nullptr;
                            }
                            da_ref.append(entry_attr->value());
                            da_ref.append(".");
                            //DA name
                            entry_attr = fcda_node->first_attribute("daName");
                            if (entry_attr == 0)
                            {
                                LOG(ERROR, "Cannot find daName\n");
                                return nullptr;
                            }
                            da_ref.append(entry_attr->value());

                            sv_sub.da_strs.push_back(da_ref);
                            sv_sub.num_dataSet_entries++;
                        } // end for each fcda node
                    }     // endif dsname == ds_in_svcb
                }         // end for each dataset in ln0
                if (!found)
                {
                    LOG(ERROR, "\tCannot find dataset definition\n");
                    return nullptr;
                }

                //get multicast addr and appID
                for (xml_node *sv_node = connAP_node->first_node("SMV"); sv_node; sv_node = sv_node->next_sibling("SMV"))
                {
                    xml_attr *cbName_attr = sv_node->first_attribute("cbName");
                    if (cbName_attr == nullptr)
                        continue;
                    if (sv_sub.svcb_ref.compare(cbName_attr->value()) != 0)
                        continue;

                    for (xml_node *p_node = sv_node->first_node("Address")->first_node("P"); p_node; p_node = p_node->next_sibling("P"))
                    {
                        xml_attr *type_attr = p_node->first_attribute("type");
                        if (type_attr == nullptr)
                            continue;
                        //get multicast addr
                        if (strncmp(type_attr->value(), "IP", strlen("IP")) == 0 && (strlen("IP") == strlen(type_attr->value())))
                        {
                            temp_multicast = string(p_node->value());
                        }
                        //get appID
                        else if (strncmp(type_attr->value(), "APPID", strlen("APPID")) == 0)
                        {
                            sv_sub.app_ID = string(p_node->value());
                        }
                    }
                }
                if (temp_multicast.compare("") == 0)
                {
                    LOG(ERROR, "Cannot find multicast addr\n");
                    return nullptr;
                }
                if (sv_sub.app_ID.compare("") == 0)
                {
                    LOG(ERROR, "Cannot find appID\n");
                    return nullptr;
                }
                //add if okay
                multicast_addrs.push_back(temp_multicast);
                sv_subs[sv_sub.sourceIP] = sv_sub;
                break; //can exit if this GSEControl already added
            }          // END for each subscribing IED
        }              // END for each SVControl node
        // END check for SV

    } // END for each IED node

    doc.clear();

    if (multicast_addrs.size() != goose_subs.size() + sv_subs.size())
    {
        LOG(ERROR, "list sizes don't match\n");
        return nullptr;
    }

    UDPReceiver *udprecv = new UDPReceiver(goose_subs, sv_subs, local_ip, multicast_addrs);
    return (CommModule *)udprecv;
}

// Current code only parses if there is 1 logical device
// TO DO: handle multiple logical device
CommModule *Parser::config_RSV(string &this_ied)
{
    bool found = false;

    vector<string> svcb_refs;
    vector<string> dataSet_names;
    vector<string> app_IDs;
    vector<vector<string>> data_attrs;
    vector<string> multicast_ips;
    string local_ip;

    string filename = CONFIG_DIR + this_ied + ".icd";
    rapidxml::file<> xmlFile(filename.c_str());
    rapidxml::xml_document<> doc;
    doc.parse<0>(xmlFile.data());

    // Find out the root node: prints "Root Node's name: SCL" for a SED file
    xml_node *root_node = doc.first_node();
    if (static_cast<string>(root_node->name()) == "SCL")
    {
        LOG(DEBUG, "Parsing for R-SV Module (%s)\n", filename.c_str());
    }
    else
    {
        LOG(ERROR, "Parsing FAILED to start for R-SV Module (%s)\n", filename.c_str());
        return nullptr;
    }

    xml_node *ied_node = root_node->first_node("IED");
    xml_node *ap_node = ied_node->first_node("AccessPoint");
    xml_node *connAP_node = root_node->first_node("Communication")
                                ->first_node("SubNetwork")
                                ->first_node("ConnectedAP");
    xml_node *ln0_node = ied_node->first_node("AccessPoint")
                             ->first_node("Server")
                             ->first_node("LDevice")
                             ->first_node("LN0");

    //Get Local IP
    for (xml_node *p_node = connAP_node->first_node("Address")->first_node("P"); p_node; p_node = p_node->next_sibling("P"))
    {
        xml_attr *type_attr = p_node->first_attribute("type");
        if (strncmp(type_attr->value(), "IP", strlen("IP")) == 0 && (strlen("IP") == strlen(type_attr->value())))
        {
            local_ip = string(p_node->value());
            found = true;
            break;
        }
    }
    if (!found)
    {
        LOG(ERROR, "\tFailed to find local IP\n");
        return nullptr;
    }

    //Get SVControl
    for (xml_node *svCTL_node = ln0_node->first_node("SampledValuesControl"); svCTL_node; svCTL_node = svCTL_node->next_sibling("SampledValuesControl"))
    {
        //Get SV CB REF
        xml_attr *svcb_attr = svCTL_node->first_attribute("Name");
        if (svcb_attr == 0)
        {
            LOG(ERROR, "Failed to get gocb_ref attr\n");
            return nullptr;
        }
        svcb_refs.push_back(svcb_attr->value());

        //Get AppID
        xml_attr *appID_attr = svCTL_node->first_attribute("appID");
        if (appID_attr == 0)
        {
            LOG(ERROR, "Failed to get appID attr\n");
            return nullptr;
        }
        app_IDs.push_back(appID_attr->value());

        //Get Dataset associated with CB
        xml_attr *ds_attr = svCTL_node->first_attribute("datSet");
        if (ds_attr == 0)
        {
            LOG(ERROR, "Failed to get datSet attr\n");
            return nullptr;
        }
        dataSet_names.push_back(ds_attr->value());

        //Get Data Attrs
        found = false;
        vector<string> da_vector;
        for (xml_node *ds_node = ln0_node->first_node("DataSet"); ds_node; ds_node = ds_node->next_sibling("DataSet"))
        {
            xml_attr *ds_name = ds_node->first_attribute("name");
            if (strncmp(ds_name->value(), ds_attr->value(), strlen(ds_attr->value())) == 0)
            {
                found = true;
                //LOG(DEBUG, "\tFound dataset %s\n", ds_name->value());
                for (xml_node *fcda_node = ds_node->first_node("FCDA"); fcda_node; fcda_node = fcda_node->next_sibling("FCDA"))
                {
                    if (fcda_node == 0)
                    {
                        LOG(ERROR, "Cannot find FCDA node\n");
                        return nullptr;
                    }
                    //Ied name
                    string da_ref = this_ied;
                    //LD name
                    xml_attr *entry_attr = fcda_node->first_attribute("ldInst");
                    if (entry_attr == 0)
                    {
                        LOG(ERROR, "Cannot find ldInst\n");
                        return nullptr;
                    }
                    da_ref.append(entry_attr->value());
                    da_ref.append("/");
                    //LN name
                    entry_attr = fcda_node->first_attribute("lnClass");
                    if (entry_attr == 0)
                    {
                        LOG(ERROR, "Cannot find lnClass\n");
                        return nullptr;
                    }
                    da_ref.append(entry_attr->value());
                    entry_attr = fcda_node->first_attribute("lnInst");
                    if (entry_attr == 0)
                    {
                        LOG(ERROR, "Cannot find lnInst\n");
                        return nullptr;
                    }
                    da_ref.append(entry_attr->value());
                    da_ref.append(".");
                    //DO name
                    entry_attr = fcda_node->first_attribute("doName");
                    if (entry_attr == 0)
                    {
                        LOG(ERROR, "Cannot find doName\n");
                        return nullptr;
                    }
                    da_ref.append(entry_attr->value());
                    da_ref.append(".");
                    //DA name
                    entry_attr = fcda_node->first_attribute("daName");
                    if (entry_attr == 0)
                    {
                        LOG(ERROR, "Cannot find daName\n");
                        return nullptr;
                    }
                    da_ref.append(entry_attr->value());

                    da_vector.push_back(da_ref);
                }
            }
        }
        if (!found)
        {
            LOG(ERROR, "\tCannot find dataset definition\n");
            return nullptr;
        }
        data_attrs.push_back(da_vector);

        //Get Multicast addrs
        found = false;
        for (xml_node *conn_node = connAP_node->first_node("SMV"); conn_node; conn_node = conn_node->next_sibling("SMV"))
        {
            if (strncmp(conn_node->first_attribute("cbName")->value(), svcb_attr->value(), strlen(svcb_attr->value())) == 0)
            {
                for (xml_node *p_node = conn_node->first_node("Address")->first_node("P"); p_node; p_node = p_node->next_sibling("P"))
                {
                    xml_attr *type_attr = p_node->first_attribute("type");
                    if (strncmp(type_attr->value(), "IP", strlen("IP")) == 0 && (strlen("IP") == strlen(type_attr->value())))
                    {
                        multicast_ips.push_back(p_node->value());
                        found = true;
                        break;
                    }
                }
            }
            if (found)
                break;
        }
        if (!found)
        {
            LOG(ERROR, "\tCannot find MulticastIP\n");
            return nullptr;
        }
    }

    doc.clear();

    R_SVModule *rsv = new R_SVModule(svcb_refs, dataSet_names,
                                     app_IDs, data_attrs,
                                     multicast_ips, local_ip);
    return (CommModule *)rsv;
}

// Current code only parses if there is 1 logical device
// TO DO: handle multiple logical device
CommModule *Parser::config_RGOOSE(string &this_ied)
{
    bool found = false;

    vector<string> gocb_refs;
    vector<string> dataSet_names;
    vector<string> app_IDs;
    vector<vector<string>> data_attrs;
    vector<string> multicast_ips;
    string local_ip;

    string filename = CONFIG_DIR + this_ied + ".icd";
    rapidxml::file<> xmlFile(filename.c_str());
    rapidxml::xml_document<> doc;
    doc.parse<0>(xmlFile.data());

    // Find out the root node: prints "Root Node's name: SCL" for a SED file
    xml_node *root_node = doc.first_node();
    if (static_cast<string>(root_node->name()) == "SCL")
    {
        LOG(DEBUG, "Parsing for R-GOOSE Module (%s)\n", filename.c_str());
    }
    else
    {
        LOG(ERROR, "Parsing FAILED to start for R-GOOSE Module (%s)\n", filename.c_str());
        return nullptr;
    }

    xml_node *ied_node = root_node->first_node("IED");
    xml_node *ap_node = ied_node->first_node("AccessPoint");
    xml_node *connAP_node = root_node->first_node("Communication")
                                ->first_node("SubNetwork")
                                ->first_node("ConnectedAP");
    xml_node *ln0_node = ied_node->first_node("AccessPoint")
                             ->first_node("Server")
                             ->first_node("LDevice")
                             ->first_node("LN0");

    //Get Local IP
    for (xml_node *p_node = connAP_node->first_node("Address")->first_node("P"); p_node; p_node = p_node->next_sibling("P"))
    {
        xml_attr *type_attr = p_node->first_attribute("type");
        if (strncmp(type_attr->value(), "IP", strlen("IP")) == 0)
        {
            local_ip = string(p_node->value());
            found = true;
            break;
        }
    }
    if (!found)
    {
        LOG(ERROR, "\tFailed to find local IP\n");
        return nullptr;
    }

    //Get GSEControl
    for (xml_node *gseCTL_node = ln0_node->first_node("GSEControl"); gseCTL_node; gseCTL_node = gseCTL_node->next_sibling("GSEControl"))
    {
        //Get GOOSE CB REF
        xml_attr *gocb_attr = gseCTL_node->first_attribute("Name");
        if (gocb_attr == 0)
        {
            LOG(ERROR, "Failed to get gocb_ref attr\n");
            return nullptr;
        }
        gocb_refs.push_back(gocb_attr->value());

        //Get AppID
        xml_attr *appID_attr = gseCTL_node->first_attribute("appID");
        if (appID_attr == 0)
        {
            LOG(ERROR, "Failed to get appID attr\n");
            return nullptr;
        }
        app_IDs.push_back(appID_attr->value());

        //Get Dataset associated with CB
        xml_attr *ds_attr = gseCTL_node->first_attribute("datSet");
        if (ds_attr == 0)
        {
            LOG(ERROR, "Failed to get datSet attr\n");
            return nullptr;
        }
        dataSet_names.push_back(ds_attr->value());

        //Get Data Attrs
        found = false;
        vector<string> da_vector;
        for (xml_node *ds_node = ln0_node->first_node("DataSet"); ds_node; ds_node = ds_node->next_sibling("DataSet"))
        {
            xml_attr *ds_name = ds_node->first_attribute("name");
            if (strncmp(ds_name->value(), ds_attr->value(), strlen(ds_attr->value())) == 0)
            {
                found = true;
                for (xml_node *fcda_node = ds_node->first_node("FCDA"); fcda_node; fcda_node = fcda_node->next_sibling("FCDA"))
                {
                    if (fcda_node == 0)
                    {
                        LOG(ERROR, "Cannot find FCDA node\n");
                        return nullptr;
                    }
                    //Ied name
                    string da_ref = this_ied;
                    //LD name
                    xml_attr *entry_attr = fcda_node->first_attribute("ldInst");
                    if (entry_attr == 0)
                    {
                        LOG(ERROR, "Cannot find ldInst\n");
                        return nullptr;
                    }
                    da_ref.append(entry_attr->value());
                    da_ref.append("/");
                    //LN name
                    entry_attr = fcda_node->first_attribute("lnClass");
                    if (entry_attr == 0)
                    {
                        LOG(ERROR, "Cannot find lnClass\n");
                        return nullptr;
                    }
                    da_ref.append(entry_attr->value());
                    entry_attr = fcda_node->first_attribute("lnInst");
                    if (entry_attr == 0)
                    {
                        LOG(ERROR, "Cannot find lnInst\n");
                        return nullptr;
                    }
                    da_ref.append(entry_attr->value());
                    da_ref.append(".");
                    //DO name
                    entry_attr = fcda_node->first_attribute("doName");
                    if (entry_attr == 0)
                    {
                        LOG(ERROR, "Cannot find doName\n");
                        return nullptr;
                    }
                    da_ref.append(entry_attr->value());
                    da_ref.append(".");
                    //DA name
                    entry_attr = fcda_node->first_attribute("daName");
                    if (entry_attr == 0)
                    {
                        LOG(ERROR, "Cannot find daName\n");
                        return nullptr;
                    }
                    da_ref.append(entry_attr->value());

                    da_vector.push_back(da_ref);
                }
            }
        }
        if (!found)
        {
            LOG(ERROR, "\tCannot find dataset definition\n");
            return nullptr;
        }
        data_attrs.push_back(da_vector);

        //Get Multicast addrs
        found = false;
        for (xml_node *conn_node = connAP_node->first_node("GSE"); conn_node; conn_node = conn_node->next_sibling("GSE"))
        {
            if (strncmp(conn_node->first_attribute("cbName")->value(), gocb_attr->value(), strlen(gocb_attr->value())) == 0)
            {
                for (xml_node *p_node = conn_node->first_node("Address")->first_node("P"); p_node; p_node = p_node->next_sibling("P"))
                {
                    xml_attr *type_attr = p_node->first_attribute("type");
                    if (strncmp(type_attr->value(), "IP", strlen("IP")) == 0 && (strlen("IP") == strlen(type_attr->value())))
                    {
                        multicast_ips.push_back(p_node->value());
                        found = true;
                        break;
                    }
                }
            }
            if (found)
                break;
        }
        if (!found)
        {
            LOG(ERROR, "\tCannot find MulticastIP\n");
            return nullptr;
        }
    }

    doc.clear();

    R_GOOSEModule *rgoose = new R_GOOSEModule(gocb_refs, dataSet_names,
                                              app_IDs, data_attrs,
                                              multicast_ips, local_ip);

    return (CommModule *)rgoose;
}

CommModule *Parser::config_MMS(string &this_ied, string &cpmapping_filename)
{
    /* 
        Parse ICD File:
        1. Parse DataTypeTemplates for LNodeType and DOType, and store in maps
        2. Parse entire IED definition in SCL file (.icd) to look for any Oper data attribute 
            e.g. MIED1CTRL/XCBR1.Pos.Oper  
        3. For each Oper data attribute:
            a. look for corresponding stVal WITHIN the same data object
                e.g. MIED1CTRL/XCBR1.Pos.stVal
            b. look for corresponding time data attribute (optional)
                e.g. MIED1CTRL/XCBR1.Pos.t
        Parse CPMapping:
        4. Extract database string

        5. Pass DO, stVal and time string references to MMSModule constructor
    */
    vector<string> do_strings;
    vector<string> t_strings;
    vector<string> stVal_strings;

    string filename = CONFIG_DIR + this_ied + ".icd";
    rapidxml::file<> xmlFile(filename.c_str());
    rapidxml::xml_document<> doc;
    doc.parse<0>(xmlFile.data());

    // Find out the root node: prints "Root Node's name: SCL" for a SED file
    xml_node *root_node = doc.first_node();
    if (static_cast<string>(root_node->name()) == "SCL")
    {
        LOG(DEBUG, "Parsing for MMS Module (%s)\n", filename.c_str());
    }
    else
    {
        LOG(ERROR, "Parsing FAILED to start for MMS Module (%s)\n", filename.c_str());
        return nullptr;
    }

    xml_node *ied_node = root_node->first_node("IED");
    if (ied_node == nullptr)
    {
        LOG(ERROR, "<IED> xml node not found, FAILED\n");
        return nullptr;
    }
    xml_node *ap_node = ied_node->first_node("AccessPoint");
    if (ap_node == nullptr)
    {
        LOG(ERROR, "<AccessPoint> xml node not found, FAILED\n");
        return nullptr;
    }
    xml_node *server_node = ap_node->first_node("Server");
    if (server_node == nullptr)
    {
        LOG(ERROR, "<Server> xml node not found, FAILED\n");
        return nullptr;
    }

    // Parse through DataTypeTemplates to store in map
    xml_node *datatemplate_node = root_node->first_node("DataTypeTemplates");
    if (server_node == nullptr)
    {
        LOG(ERROR, "<DataTypeTemplates> xml node not found, FAILED\n");
        return nullptr;
    }

    unordered_map<string, xml_node *> ln_template_map;
    unordered_map<string, xml_node *> do_template_map; //contains sdo too

    for (xml_node *lnodetype_node = datatemplate_node->first_node("LNodeType"); lnodetype_node; lnodetype_node = lnodetype_node->next_sibling("LNodeType"))
    {
        xml_attr *lnodetype_id_attr = lnodetype_node->first_attribute("id");
        if (lnodetype_id_attr == nullptr)
            continue;
        string lnodetype_id_string(lnodetype_id_attr->value());
        ln_template_map[lnodetype_id_string] = lnodetype_node;
    }

    for (xml_node *dotype_node = datatemplate_node->first_node("DOType"); dotype_node; dotype_node = dotype_node->next_sibling("DOType"))
    {
        xml_attr *dotype_id_attr = dotype_node->first_attribute("id");
        if (dotype_id_attr == nullptr)
            continue;
        string dotype_id_string(dotype_id_attr->value());
        do_template_map[dotype_id_string] = dotype_node;
    }

    // Iterate through IED definition
    for (xml_node *ld_node = server_node->first_node("LDevice"); ld_node; ld_node = ld_node->next_sibling("LDevice"))
    {
        xml_attr *ld_name_attr = ld_node->first_attribute("inst");
        if (ld_name_attr == nullptr)
            continue;
        string ld_name(ld_name_attr->value());
        //printf("START LDevice %s\n", ld_name.c_str());

        for (xml_node *ln_node = ld_node->first_node("LN"); ln_node; ln_node = ln_node->next_sibling("LN"))
        {
            xml_attr *ln_lnclass_attr = ln_node->first_attribute("lnClass");
            if (ln_lnclass_attr == nullptr)
                continue;
            string ln_name(ln_lnclass_attr->value());
            xml_attr *ln_inst_attr = ln_node->first_attribute("inst");
            if (ln_inst_attr == nullptr)
                continue;
            ln_name.append(ln_inst_attr->value());

            //check logical node definition
            xml_attr *ln_lntype_attr = ln_node->first_attribute("lnType");
            if (ln_lntype_attr == nullptr)
                continue;
            string ln_lntype_string(ln_lntype_attr->value());

            auto it = ln_template_map.find(ln_lntype_string);
            if (it == ln_template_map.end())
            {
                LOG(ERROR, "Cannot find <LNodeType> for id = \"%s\"\n", ln_lntype_string.c_str());
                continue;
            }
            xml_node *lnodetype_node = it->second;
            mmsmodule_check_logical_node(lnodetype_node,
                                         this_ied + ld_name + "/" + ln_name,
                                         ln_template_map,
                                         do_template_map,
                                         do_strings,
                                         t_strings,
                                         stVal_strings);
        }
        //printf("END LDevice %s\n", ld_name.c_str());
    }

    doc.clear();

    //CPMapping

    unordered_map<string, string> da_to_db_map;

    //JSON parsing
    std::ifstream ifs_cp(cpmapping_filename);
    json jf_cp = json::parse(ifs_cp);

    for (auto &el : jf_cp["CPMapping"].items())
    {
        string temp_cyber = el.value()["Cyber"];

        //Get DataAttribute ref string
        //Need to modify string, given the current CPMapping schema
        //e.g. MIED1.MEAS.MMXU1.TotW.mag.i --> MIED1MEAS/MMXU1.TotW.mag.i
        int pos = temp_cyber.find_first_of('.', 0);
        temp_cyber.replace(pos, 1, "");

        pos = temp_cyber.find_first_of('.', 0);
        temp_cyber.replace(pos, 1, "/");

        //Get database tableName, entryKey and targetColumn
        string temp_phy = el.value()["Physical"];

        da_to_db_map[temp_cyber] = temp_phy;
    }

    vector<string> db_strings;

    for (int i = 0; i < stVal_strings.size(); i++) {
        string &stVal_ref_str = stVal_strings[i];
        auto it = da_to_db_map.find(stVal_ref_str);
        if (it == da_to_db_map.end()) {
            LOG(ERROR, "Cannot find %s in CPMapping\n", stVal_ref_str.c_str());
            db_strings.push_back("null");
        }
        else {
            db_strings.push_back(it->second);
            LOG(DEBUG, "Found mapping for %s in CPMapping\n", stVal_ref_str.c_str())
        }
    }

    MMSModule *mms = new MMSModule(do_strings,
                                   t_strings,
                                   stVal_strings,
                                   db_strings);
    return (CommModule *)mms;
}

void Parser::mmsmodule_check_logical_node(xml_node *lnodetype_node,
                                          string current_string,
                                          unordered_map<string, xml_node *> &ln_template_map,
                                          unordered_map<string, xml_node *> &do_template_map,
                                          vector<string> &do_strings,
                                          vector<string> &t_strings,
                                          vector<string> &stVal_strings)
{

    //printf("\tSTART LNode %s\n", current_string.c_str());
    for (xml_node *do_node = lnodetype_node->first_node("DO"); do_node; do_node = do_node->next_sibling("DO"))
    {
        xml_attr *do_name_attr = do_node->first_attribute("name");
        if (do_name_attr == nullptr)
            continue;
        string do_name(do_name_attr->value());

        //check data object definition
        xml_attr *do_type_attr = do_node->first_attribute("type");
        if (do_type_attr == nullptr)
            continue;
        string do_type_string(do_type_attr->value());

        auto it = do_template_map.find(do_type_string);
        if (it == do_template_map.end())
        {
            LOG(ERROR, "Cannot find <DOType> for id = \"%s\"\n", do_type_string.c_str());
            continue;
        }
        xml_node *dotype_node = it->second;
        mmsmodule_check_data_object(dotype_node,
                                    current_string + "." + do_name,
                                    do_template_map,
                                    do_strings,
                                    t_strings,
                                    stVal_strings);
    }
    //printf("\tEND LNode %s\n", current_string.c_str());
}

void Parser::mmsmodule_check_data_object(xml_node *dotype_node,
                                         string current_string,
                                         unordered_map<string, xml_node *> &do_template_map,
                                         vector<string> &do_strings,
                                         vector<string> &t_strings,
                                         vector<string> &stVal_strings)
{
    //printf("\t\tSTART DO %s\n", current_string.c_str());
    bool hasSDO = false;
    // Data object may contain SDO or DA
    //SDO
    for (xml_node *sdo_node = dotype_node->first_node("SDO"); sdo_node; sdo_node = sdo_node->next_sibling("SDO"))
    {
        hasSDO = true;

        xml_attr *sdo_name_attr = sdo_node->first_attribute("name");
        if (sdo_name_attr == nullptr)
            continue;
        string sdo_name(sdo_name_attr->value());

        //check sdo definition
        xml_attr *sdo_type_attr = sdo_node->first_attribute("type");
        if (sdo_type_attr == nullptr)
            continue;
        string sdo_type_string(sdo_type_attr->value());

        auto it = do_template_map.find(sdo_type_string);
        if (it == do_template_map.end())
        {
            LOG(ERROR, "Cannot find <DOType> for id = \"%s\"\n", sdo_type_string.c_str());
            continue;
        }
        xml_node *dotype_node = it->second;
        mmsmodule_check_data_object(dotype_node,
                                    current_string + "." + sdo_name,
                                    do_template_map,
                                    do_strings,
                                    t_strings,
                                    stVal_strings);
    }
    //DA

    if (hasSDO)
        return;

    bool hasOper = false;
    bool hasStVal = false;
    bool hasTime = false;
    for (xml_node *da_node = dotype_node->first_node("DA"); da_node; da_node = da_node->next_sibling("DA"))
    {
        xml_attr *da_name_attr = da_node->first_attribute("name");
        if (da_name_attr == nullptr)
            continue;
        string da_name_string(da_name_attr->value());
        //printf("\t\t\tSTART DA %s\n", da_name_string.c_str());

        if (da_name_string.compare("Oper") == 0)
        {
            hasOper = true;
        }
        else if (da_name_string.compare("stVal") == 0)
        {
            hasStVal = true;
        }
        else if (da_name_string.compare("t") == 0)
        {
            hasTime = true;
        }

        //printf("\t\t\tEND DA %s\n", da_name_string.c_str());
    }

    if (hasOper && hasStVal)
    {
        do_strings.push_back(current_string);
        LOG(DEBUG, "Found Oper for %s\n", current_string.c_str());
        stVal_strings.push_back(current_string + ".stVal");
        LOG(DEBUG, "Found %s\n", (current_string + ".stVal").c_str());
        if (hasTime)
        {
            t_strings.push_back(current_string + ".t");
            LOG(DEBUG, "Found %s\n", (current_string + ".t").c_str());
        }
        else
        {
            t_strings.push_back("null");
        }
    }

    //printf("\t\tEND DO %s\n", current_string.c_str());
}

// CommModule *Parser::config_MMS_stub(string &this_ied)
// {
//     vector<string> do_strings;
//     do_strings.push_back("MIED1CTRL/XCBR1.Pos");
//     do_strings.push_back("MIED1CTRL/GGIO1.SPCSO1");

//     vector<string> t_strings;
//     t_strings.push_back("MIED1CTRL/XCBR1.Pos.t");
//     t_strings.push_back("MIED1CTRL/GGIO1.Pos.t");

//     vector<string> stVal_strings;
//     stVal_strings.push_back("MIED1CTRL/XCBR1.Pos.stVal");
//     stVal_strings.push_back("MIED1CTRL/GGIO1.SPCSO1.stVal");

//     MMSModule *mms = new MMSModule(do_strings, t_strings, stVal_strings);
//     return (CommModule *)mms;
// }