/*
 *  MMS.h
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
 
#ifndef MMS_H
#define MMS_H

#include <vector>
#include <string>

#include "CommModule.h"
#include "iec61850_server.h"
#include "DatabaseConn.h"

class MMSModule : public CommModule {
public:
    MMSModule();
    MMSModule(std::vector<std::string> &do_strings,
            std::vector<std::string> &t_strings,
            std::vector<std::string> &stVal_strings,
            std::vector<std::string> &db_strings);
    void start();
    void set_db_conn (std::string _db_configs) override;
    IedServer *get_mms_server() {
        return &iedServer;
    }
    
private:
    IedServer iedServer;
    DatabaseConn *db_conn;
    unsigned int interval;
    
    //to store parameters for control handlers
    std::vector<std::vector<void*> *> controlParams;
    
    static void main_loop();
    static ControlHandlerResult control_handler(ControlAction action, void *parameter, MmsValue *value, bool test);
};

#endif //MMS_H
