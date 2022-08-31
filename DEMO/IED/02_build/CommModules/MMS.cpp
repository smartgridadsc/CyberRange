/*
 *  MMS.cpp
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
 
#include <time.h>
#include <string>
#include <vector>

#include "MMS.h"
#include "Utils.h"
#include "static_model.h"
#include "ModelMutex.h"
#include "DatabaseConn.h"
#include "hal_thread.h"
#include "CILO.h"

#define MMS_INTERVAL 1000; //millis

extern IedModel iedModel;
extern bool CILO_exist;
extern CILO cilo;

using namespace std;

//TO DO: add database query to update database
MMSModule::MMSModule(vector<string> &do_strings,
                    vector<string> &t_strings,
                    vector<string> &stVal_strings,
                    vector<string> &db_strings) {
    LOG(DEBUG, "Creating MMSModule >>>>>>>>>>>>>>>>>\n");

    iedServer = IedServer_create(&iedModel);
    interval = MMS_INTERVAL;

    IedServer_setWriteAccessPolicy(iedServer, IEC61850_FC_ALL, ACCESS_POLICY_ALLOW);

    //Control Handlers
    LOG(INFO, "Setting Control Handlers\n");
    if (do_strings.size() != t_strings.size() ||
        t_strings.size() != stVal_strings.size() ||
        stVal_strings.size() != db_strings.size()) {
        LOG(ERROR, "DataObject (%d), time (%d), stVal (%d) and db_string (%d) vector size do not match, control handlers not set\n", 
                do_strings.size(),t_strings.size(), stVal_strings.size(), db_strings.size());
        return;
    }

    for (int i = 0; i < do_strings.size(); i++) {
        string &do_str = do_strings[i];
        string &t_str = t_strings[i];
        string &stVal_str = stVal_strings[i];
        string &db_str = db_strings[i];

        LOG(INFO, "DataObject[%d]:\n");
        LOG(INFO, "DataObject = %s\nTime_attr = %s\nstVal_attr = %s\n",
                do_str.c_str(), t_str.c_str(), stVal_str.c_str());

        DataObject *data_object = (DataObject *) IedModel_getModelNodeByObjectReference(&iedModel, do_str.c_str());
        if (data_object == NULL) {
            LOG(WARNING, "DataObject for %s not found in model\n", do_str.c_str());
            continue;
        }
        DataAttribute *time_da = (DataAttribute *) IedModel_getModelNodeByObjectReference(&iedModel, t_str.c_str());
        if (time_da == NULL) {
            LOG(WARNING, "time for %s not found in model (not fatal)\n", t_str.c_str());
        }
        DataAttribute *stVal_da = (DataAttribute *) IedModel_getModelNodeByObjectReference(&iedModel, stVal_str.c_str());
        if (stVal_da == NULL) {
            LOG(WARNING, "stVal for %s not found in model\n", stVal_str.c_str());
            continue;
        }
        if (db_str.compare("null") == 0) {
            LOG(WARNING, "db_string not found, control handler not set for %s\n", do_str.c_str());
            continue;
        }
        
        /* Form query string to update database */
        //Get table name
        int temp_pos = 0;
        int temp_end = db_str.find_first_of('.', temp_pos);
        string tableName = db_str.substr(temp_pos, temp_end);

        //Get entryKey
        temp_pos = temp_end + 1;
        temp_end = db_str.find_first_of('.', temp_pos);
        string entryKey = db_str.substr(temp_pos, temp_end - temp_pos);

        //Get targetColumn
        temp_pos = temp_end + 1;
        temp_end = db_str.size();
        string targetColumn = db_str.substr(temp_pos, temp_end - temp_pos);

        string *db_str_dynamic = new string(
                "UPDATE " + tableName + 
                " SET " + targetColumn + "=?" +
                " WHERE name=\"" +  entryKey + "\"");
        LOG(INFO, "db_string = %s\n", db_str_dynamic->c_str());

        vector<void *> *ctrl_param = new vector<void *>();
        ctrl_param->push_back(&iedServer);
        ctrl_param->push_back(time_da);
        ctrl_param->push_back(stVal_da);
        ctrl_param->push_back(db_conn);
        ctrl_param->push_back(db_str_dynamic);
        controlParams.push_back(ctrl_param);
        IedServer_setControlHandler(iedServer, data_object, (ControlHandler)MMSModule::control_handler, controlParams[i]);
        LOG(INFO, "OK\n");
    }

    LOG(DEBUG, ">>>>>>>>>>>>>>>>>> MMSModule created\n");
}

void MMSModule::start() {
    LOG(INFO, "MMS: start\n");

    // start server
    IedServer_start(iedServer, 102);

    if (!IedServer_isRunning(iedServer)) {
        LOG(ERROR,"Starting MMS Server failed! (Ensure sudo permissions)\n");
        IedServer_destroy(iedServer);
        LOG(INFO, "MMS: stop...\n");
        return;
    }

    while (ied_running) {
        //main_loop();
        Thread_sleep(interval);
    }

    // clean up
    LOG(INFO, "MMS: stop...\n");
    IedServer_stop(iedServer);
    IedServer_destroy(iedServer);
}

void MMSModule::main_loop() {
    LOG(DEBUG, "MMS: loop\n");
}

ControlHandlerResult MMSModule::control_handler(ControlAction action, void *parameter, MmsValue *value, bool test) {
    
    if (test)
        return CONTROL_RESULT_FAILED;

    ClientConnection clientCon = ControlAction_getClientConnection(action);

    if (CILO_exist == false)
    {
        printf("CILO NOT FOUND\n");
    }
    
    else if (CILO_exist == true) 
    {
        bool result = cilo.check();
    
        if (result == false && MmsValue_getBoolean(value))
        {            
            return CONTROL_RESULT_FAILED;
        }
    }

    if (MmsValue_getType(value) == MMS_BOOLEAN) {
        LOG(DEBUG,"MMS: received binary control command...\n");
        LOG(DEBUG, "    from: %s\n", ClientConnection_getPeerAddress(clientCon));
        LOG(DEBUG,"    ctlNum: %i\n", ControlAction_getCtlNum(action));

        if (MmsValue_getBoolean(value)) {
            LOG(DEBUG,"    val: on\n");
        }
        else {
            LOG(DEBUG,"    val: off\n");
        }
    }
    else {
        return CONTROL_RESULT_FAILED;
    }

    vector<void*> *ctrl_param = (vector<void*> *)parameter;
    if (ctrl_param->size() != 5) {
        LOG(ERROR, "Control_handler() failed! Parameters must be 4 (current: %u)\n", ctrl_param->size());
        return CONTROL_RESULT_FAILED;
    }
    LOG(DEBUG, "Got control params\n");

    IedServer *iedServer = (IedServer*) ctrl_param->at(0);
    LOG(DEBUG, "iedServer addr = 0x%X\n", iedServer);
    DataAttribute *time_da = (DataAttribute*) ctrl_param->at(1);
    LOG(DEBUG, "time_da addr = 0x%X\n", time_da);
    DataAttribute *stVal_da = (DataAttribute*) ctrl_param->at(2);
    LOG(DEBUG, "stVal_da addr = 0x%X\n", stVal_da);
    DatabaseConn *db_conn = (DatabaseConn*) ctrl_param->at(3);
    LOG(DEBUG, "db_conn addr = 0x%X\n", db_conn);
    string *db_str_ptr = (string *) ctrl_param->at(4);
    LOG(DEBUG, "db_string = \"%s\"\n", db_str_ptr->c_str());

    uint64_t timeStamp = Hal_getTimeInMs();

    // Update time and stVal
    { 
        lock_guard<mutex> lock(static_model_lock);
        if (time_da != NULL) {
            IedServer_updateUTCTimeAttributeValue(*iedServer, time_da, timeStamp);
            LOG(DEBUG, "Updated time\n");
        }
        else {
            LOG(DEBUG, "Time is NULL, not updated\n");
        }

        //TO DO: add more stVal types
        if (stVal_da->type == DataAttributeType::IEC61850_BOOLEAN) {
            LOG(DEBUG, "stVal type = BOOLEAN\n");
            IedServer_updateAttributeValue(*iedServer, stVal_da, value);
        }
        else if (stVal_da->type == DataAttributeType::IEC61850_CODEDENUM) {
            LOG(DEBUG, "stVal type = CODEDENUM\n");
            MmsValue *newStVal = MmsValue_newBitString(2); //inferred from static_model.c
            if (MmsValue_getBoolean(value) == true) 
                MmsValue_setBitStringFromIntegerBigEndian(newStVal, 2); //on = 10000000
            else 
                MmsValue_setBitStringFromIntegerBigEndian(newStVal, 1); //off = 01000000
            IedServer_updateAttributeValue(*iedServer, stVal_da, newStVal);
            LOG(DEBUG, "Updated value\n");
        }
        
    }

    // write to database (maybe add a string in one of the ctrl_params)
    string querystring (*db_str_ptr);
    int replace_pos = querystring.find_first_of('?', 0);
    if (MmsValue_getBoolean(value))
        querystring.replace(replace_pos, 1, string("1"));
    else
        querystring.replace(replace_pos, 1, string("0"));

    LOG(DEBUG, "Writing to database: [%s]\n", querystring.c_str())
    try {
        //updating database
        mysqlpp::Query query = db_conn->conn.query(querystring.c_str());
        query.exec();
    }
    catch (mysqlpp::Exception e) {
        LOG(DEBUG, "Exception when writing to database\n");
        return CONTROL_RESULT_FAILED;
    }

    return CONTROL_RESULT_OK;
}

void MMSModule::set_db_conn (std::string _db_configs) {
    db_conn = new DatabaseConn(_db_configs);

    for (auto it : controlParams) {
        it->at(3) = db_conn;
    }
}
