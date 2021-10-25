#include <time.h>
#include <string>
#include <vector>

#include "MMS.h"
#include "Utils.h"
#include "static_model.h"
#include "ModelMutex.h"
#include "DatabaseConn.h"
#include "hal_thread.h"

#define MMS_INTERVAL 1000; //millis

extern IedModel iedModel;

using namespace std;

MMSModule::MMSModule() {
    LOG(DEBUG, "Creating MMSModule >>>>>>>>>>>>>>>>>\n");

    printf("here\n");
    iedServer = IedServer_create(&iedModel);
    interval = MMS_INTERVAL;

    IedServer_setWriteAccessPolicy(iedServer, IEC61850_FC_ALL, ACCESS_POLICY_ALLOW);

    //Control Handlers
    //HARD-CODING
    //TO DO: dynamic control handler setting
    vector<void*> *ctrl_param1 = new vector<void*>();
    ctrl_param1->push_back(&iedServer);
    ctrl_param1->push_back(IEDMODEL_CTRL_XCBR1_Pos);
    ctrl_param1->push_back(db_conn);
    controlParams.push_back(ctrl_param1);
    IedServer_setControlHandler(iedServer, IEDMODEL_CTRL_XCBR1_Pos, (ControlHandler)MMSModule::control_handler, controlParams[0]);

    vector<void*> *ctrl_param2 = new vector<void*>();
    ctrl_param2->push_back(&iedServer);
    ctrl_param2->push_back(IEDMODEL_CTRL_XCBR2_Pos);
    ctrl_param2->push_back(db_conn);
    controlParams.push_back(ctrl_param2);
    IedServer_setControlHandler(iedServer, IEDMODEL_CTRL_XCBR2_Pos, (ControlHandler)MMSModule::control_handler, controlParams[1]);
    
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


//TO DO: customize control_handler() callback function for each IED
ControlHandlerResult MMSModule::control_handler(ControlAction action, void *parameter, MmsValue *value, bool test) {
    if (test)
        return CONTROL_RESULT_FAILED;

    ClientConnection clientCon = ControlAction_getClientConnection(action);

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
    //hardcoded 
    if (ctrl_param->size() != 3) {
        LOG(ERROR, "Control_handler() failed! Parameters must be 3 (current: %u)\n", ctrl_param->size());
        return CONTROL_RESULT_FAILED;
    }

    IedServer *iedServer = (IedServer*) ctrl_param->at(0);
    DataObject *data_attr = (DataObject*) ctrl_param->at(1);
    DatabaseConn *db_conn = (DatabaseConn*) ctrl_param->at(2);

    uint64_t timeStamp = Hal_getTimeInMs();
    //if (data_attr == IEDMODEL_LogicalDevice_GGIO3_SPC1) {
    if (data_attr == IEDMODEL_CTRL_XCBR1_Pos) {
        { //limit scope of mutex
            lock_guard<mutex> lock(static_model_lock);
            IedServer_updateUTCTimeAttributeValue(
                    *iedServer, IEDMODEL_CTRL_XCBR1_Pos_t, timeStamp);

            //for bit-string MmsValue (not working, must find out bitstring encoding)
            // MmsValue *newStVal = MmsValue_newBitString(4); //not sure what is the proper length of bitstring (may not be 8)
            // if (MmsValue_getBoolean(value) == true) 
            //     MmsValue_setBitStringFromInteger(newStVal, 1); //on = 1, based in enum value defined in MIED1.icd
            // else 
            //     MmsValue_setBitStringFromInteger(newStVal, 5); //off = 5, based in enum value defined in MIED1.icd
            // IedServer_updateAttributeValue( 
            //         *iedServer, IEDMODEL_CTRL_XCBR1_Pos_stVal, newStVal);
        }

        //write to database
        //TO DO: get
        string querystring;
        if (MmsValue_getBoolean(value))
            querystring = "UPDATE line_cb SET value=1 WHERE name=\"line_cb_0_1\"";
        else
            querystring = "UPDATE line_cb SET value=0 WHERE name=\"line_cb_0_1\"";
        LOG(DEBUG, "Writing to database: [%s]\n", querystring.c_str())
        try {
            //mysqlpp::Query query = db_conn->conn.query(querystring);
            //query.exec();
        }
        catch (mysqlpp::Exception e) {
            LOG(DEBUG, "Exception when writing to database\n");
            return CONTROL_RESULT_FAILED;
        }
    }
    else
        return CONTROL_RESULT_FAILED;

    return CONTROL_RESULT_OK;
}
