/*
 *  Parser.h
 *
 *  Copyright 2023 ADSC
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
 
#ifndef Parser_H
#define Parser_H

#include <list>
#include <string>
#include <unordered_map>

#include "LogicFunction.h"
#include "CommModule.h"
#include "MMS.h"
#include "ModelUpdater.h"

#include "rapidxml.hpp"
#include "rapidxml_print.hpp"
#include "rapidxml_utils.hpp"

typedef rapidxml::xml_node<> xml_node;
typedef rapidxml::xml_attribute<> xml_attr;

class Parser
{
public:
    //For Protections
    static std::list<LogicFunction *> parse_protection_logic_config(std::string &cpmapping_filename, std::string &thresholds_filename, std::string &ied_name, std::string &sed_filename);
    //For CommModules
    static std::list<CommModule *> parse_comm_config(std::string &sed_filename, std::string &ied_name);
    //For MMSModule
    static MMSModule *parse_mms_server(std::string &ied_name, std::string &cpmapping_filename);

    static ModelUpdater parse_model_updater_config(std::string &cpmapping_filename);
    

private:
    static CommModule *config_UDPRecv(std::string &sed_filename, std::string &this_ied);
    static CommModule *config_RSV(std::string &this_ied);
    static CommModule *config_RGOOSE(std::string &this_ied);
    static CommModule *config_MMS(std::string &this_ied, std::string &cpmapping_filename);
    
    //helper functions for config_MMS()
    static void mmsmodule_check_logical_node(xml_node *lnodetype_node,
                                             std::string current_string,
                                             std::unordered_map<std::string, xml_node *> &ln_template_map,
                                             std::unordered_map<std::string, xml_node *> &do_template_map,
                                             std::vector<std::string> &do_strings,
                                             std::vector<std::string> &t_strings,
                                             std::vector<std::string> &stVal_strings);
    static void mmsmodule_check_data_object(xml_node *dotype_node,
                                            std::string current_string,
                                            std::unordered_map<std::string, xml_node *> &do_template_map,
                                            std::vector<std::string> &do_strings,
                                            std::vector<std::string> &t_strings,
                                            std::vector<std::string> &stVal_strings);
};

#endif
