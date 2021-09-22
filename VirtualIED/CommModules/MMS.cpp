#include <time.h>
#include <string>
#include <vector>

#include "MMS.h"
#include "Utils.h"
#include "static_model.h"
#include "hal_thread.h"

#define INTERVAL 1000; //millis

extern IedModel iedModel;

using namespace std;

MMSModule::MMSModule() {
    iedServer = NULL;
    interval = INTERVAL;
}

void MMSModule::start() {
    iedServer = IedServer_create(&iedModel);

    // Map objects to addresses (maybe map during compilation time)
    // report sending

    IedServer_setWriteAccessPolicy(iedServer, IEC61850_FC_ALL, ACCESS_POLICY_ALLOW);

    vector<void*> ctrl_param;
    ctrl_param.push_back(&iedServer);
    ctrl_param.push_back(IEDMODEL_LogicalDevice_GGIO3_SPC1);
    IedServer_setControlHandler(iedServer, IEDMODEL_LogicalDevice_GGIO3_SPC1, (ControlHandler)MMSModule::control_handler, &ctrl_param);

    // start server
    IedServer_start(iedServer, 102);

    if (!IedServer_isRunning(iedServer)) {
        LOG(ERROR,"Starting MMS Server failed! (Ensure sudo permissions)\n");
        IedServer_destroy(iedServer);
        return;
    }

    LOG(DEBUG, "MMS: start\n");

    while (ied_running) {
        main_loop();
        Thread_sleep(interval);
    }

    // clean up
    LOG(DEBUG, "MMS: stop...\n");
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
    IedServer *iedServer = (IedServer*) ctrl_param->at(0);
    DataObject *data_attr = (DataObject*) ctrl_param->at(1);

    uint64_t timeStamp = Hal_getTimeInMs();
    if (data_attr == IEDMODEL_LogicalDevice_GGIO3_SPC1) {
        IedServer_updateUTCTimeAttributeValue(
                *iedServer, IEDMODEL_LogicalDevice_GGIO3_SPC1_t, timeStamp);
        IedServer_updateAttributeValue(
                *iedServer, IEDMODEL_LogicalDevice_GGIO3_SPC1_stVal, value);

        // write to database
        // std::string querystring;
        // if (MmsValue_getBoolean(value))
        //     querystring = "UPDATE line_cb SET value=1 WHERE name=\"line_cb_0\"";
        // else
        //     querystring = "UPDATE line_cb SET value=0 WHERE name=\"line_cb_0\"";
        // std::cout << querystring << std::endl;
        // try {
        //     mysqlpp::Query query = db_conn.query(querystring);
        //     query.exec();
        // }
        // catch (mysqlpp::Exception e) {
        //     printf("Exception when writing to database\n");
        //     std::cout << e.what() << std::endl;
        // }
    }
    else
        return CONTROL_RESULT_FAILED;

    return CONTROL_RESULT_OK;
}