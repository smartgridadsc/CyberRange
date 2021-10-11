#ifndef Parser_H
#define Parser_H

#include <list>
#include <string>

#include "LogicFunction.h"
#include "CommModule.h"
#include "ModelUpdater.h"

class Parser {
public:
    //For Protections
    static std::list<LogicFunction *> parse_protection_logic_config(std::string cpmapping_filename, std::string thresholds_filename);
    //For CommModules
    static std::list<CommModule *> parse_comm_config(std::string sed_filename, std::string iedname);
    
    static ModelUpdater parse_model_updater_config(std::string cpmapping_filename);
private:
    static CommModule* config_UDPRecv(std::string &sed_filename, std::string &this_ied);
    static CommModule* config_RSV(std::string &this_ied);
    static CommModule* config_RGOOSE(std::string &this_ied);
    static CommModule* config_MMS();
};

#endif