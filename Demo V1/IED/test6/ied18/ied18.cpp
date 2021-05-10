#include <stdio.h>
#include <stdlib.h>
#include <unordered_map>
#include <string>

#include <iostream>

#include "hal_thread.h"
#include "iec61850_server.h"
#include "pugixml.hpp"
#include "static_model.h"

#include <pthread.h>
#include <signal.h>
#include <time.h>
#include <mysql++.h>

bool running = true;
int interval = 1000;
std::unordered_map<std::string, std::string> mapping;

extern IedModel iedModel;
IedServer iedServer = NULL;

mysqlpp::Connection db_conn;

void sigint_handler(int signalId) { running = false; }
/*
static ControlHandlerResult controlHandlerForBinaryOutput(ControlAction action, void *parameter, MmsValue *value, bool test)
{
    if (test)
        return CONTROL_RESULT_FAILED;

    ClientConnection clientCon = ControlAction_getClientConnection(action);

    if (MmsValue_getType(value) == MMS_BOOLEAN) {
        printf("received binary control command: ");
        printf("    from: %s\n", ClientConnection_getPeerAddress(clientCon));
        printf("    ctlNum: %i\n", ControlAction_getCtlNum(action));

        if (MmsValue_getBoolean(value))
            printf("    val: on\n");
        else
            printf("    val: off\n");
    }
    else
        return CONTROL_RESULT_FAILED;

    uint64_t timeStamp = Hal_getTimeInMs();
    if (parameter == IEDMODEL_LogicalDevice_GGIO3_SPC1) {
        IedServer_updateUTCTimeAttributeValue(
                iedServer, IEDMODEL_LogicalDevice_GGIO3_SPC1_t, timeStamp);
        printf("    Wrote timestamp\n");
        IedServer_updateAttributeValue(
                iedServer, IEDMODEL_LogicalDevice_GGIO3_SPC1_stVal, value);
        printf("    Wrote stval\n");

        // write to database
        std::string querystring;
        if (MmsValue_getBoolean(value))
            querystring = "UPDATE line_cb SET value=1 WHERE name=\"line_cb_0\"";  
        else
            querystring = "UPDATE line_cb SET value=0 WHERE name=\"line_cb_0\"";
        std::cout << querystring << std::endl;
        try {
            mysqlpp::Query query = db_conn.query(querystring);
            query.exec();
        }
        catch (mysqlpp::Exception e) {
            printf("Exception when writing to database\n");
            std::cout << e.what() << std::endl;
        }
    }
    else
        return CONTROL_RESULT_FAILED;

    return CONTROL_RESULT_OK;
}
*/
void updateFunction()
{
    printf("****************************************************\n");
    uint64_t timestamp = Hal_getTimeInMs();
    
    Timestamp iecTimestamp;
    Timestamp_clearFlags(&iecTimestamp);
    Timestamp_setTimeInMilliseconds(&iecTimestamp, timestamp);
    Timestamp_setLeapSecondKnown(&iecTimestamp, true);

    IedServer_lockDataModel(iedServer);

    mysqlpp::StoreQueryResult result;
    try {
        const char* querystring = "SELECT value FROM relay ORDER BY LENGTH(name),name";
        mysqlpp::Query query = db_conn.query(querystring);
        result = query.store();
    }
    catch (mysqlpp::Exception e) {
        printf("Exception when querying database\n");
        std::cout << e.what() << std::endl;
        exit(-1);
    }

    std::cout << "Result size =[" << result.size() << "]\n";
    std::string resultstring = ((result.at(0)))[0].c_str();
    bool status = std::stof(resultstring);
    IedServer_updateTimestampAttributeValue(
            iedServer, IEDMODEL_PROT_PTRC1_Mod_t, &iecTimestamp);
    IedServer_updateBooleanAttributeValue(
            iedServer, IEDMODEL_PROT_PTRC1_Mod_stVal, status);
    bool read = IedServer_getBooleanAttributeValue(
            iedServer, IEDMODEL_PROT_PTRC1_Mod_stVal);
    printf("PTRC1_Mod_stVal (relay_0) = %d\n", read);

    resultstring = ((result.at(1)))[0].c_str();
    status = std::stof(resultstring);
    IedServer_updateTimestampAttributeValue(
            iedServer, IEDMODEL_PROT_PTRC2_Mod_t, &iecTimestamp);
    IedServer_updateBooleanAttributeValue(
            iedServer, IEDMODEL_PROT_PTRC2_Mod_stVal, status);
    read = IedServer_getBooleanAttributeValue(
            iedServer, IEDMODEL_PROT_PTRC2_Mod_stVal);
    printf("PTRC2_Mod_stVal (relay_1) = %d\n", read);

    resultstring = ((result.at(2)))[0].c_str();
    status = std::stof(resultstring);
    IedServer_updateTimestampAttributeValue(
            iedServer, IEDMODEL_PROT_PTRC3_Mod_t, &iecTimestamp);
    IedServer_updateBooleanAttributeValue(
            iedServer, IEDMODEL_PROT_PTRC3_Mod_stVal, status);
    read = IedServer_getBooleanAttributeValue(
            iedServer, IEDMODEL_PROT_PTRC3_Mod_stVal);
    printf("PTRC3_Mod_stVal (relay_2) = %d\n", read);

    resultstring = ((result.at(3)))[0].c_str();
    status = std::stof(resultstring);
    IedServer_updateTimestampAttributeValue(
            iedServer, IEDMODEL_PROT_PTRC4_Mod_t, &iecTimestamp);
    IedServer_updateBooleanAttributeValue(
            iedServer, IEDMODEL_PROT_PTRC4_Mod_stVal, status);
    read = IedServer_getBooleanAttributeValue(
            iedServer, IEDMODEL_PROT_PTRC4_Mod_stVal);
    printf("PTRC4_Mod_stVal (relay_3) = %d\n", read);

    IedServer_unlockDataModel(iedServer);
}

void run_ied()
{
    iedServer = IedServer_create(&iedModel);

    // Map objects to addresses (maybe map during compilation time)
    // report sending

    IedServer_setWriteAccessPolicy(iedServer, IEC61850_FC_ALL, ACCESS_POLICY_ALLOW);

    //IedServer_setControlHandler(iedServer, IEDMODEL_LogicalDevice_GGIO3_SPC1, (ControlHandler)controlHandlerForBinaryOutput, IEDMODEL_LogicalDevice_GGIO3_SPC1);

    //connect to db
    try {
        db_conn.set_option(new mysqlpp::SetCharsetNameOption("utf8"));
        db_conn.connect("test_db_2", "localhost", "adsc", "Adsc2021!", 3306);
    }
    catch (mysqlpp::Exception e) {
        printf("Exception, cannot connect to MySQL database\n");
        std::cout << e.what() << std::endl;
        db_conn.disconnect();
        exit(-1);
    }
    
    // start server
    IedServer_start(iedServer, 102);

    if (!IedServer_isRunning(iedServer)) {
        printf("Starting IEC61850 Server failed! (Ensure sudo permissions)\n");
        IedServer_destroy(iedServer);
        exit(-1);
    }

    // Continuously update
    struct timespec timer_start;
    clock_gettime(CLOCK_MONOTONIC, &timer_start);

    signal(SIGINT, sigint_handler);

    while (running) {
        updateFunction();
        Thread_sleep(interval);
    }

    // clean up
    printf("Stopping server...");
    IedServer_stop(iedServer);
    IedServer_destroy(iedServer);
}

void getVarAddrMapping(pugi::xml_node parent, std::string pathstring)
{
    if (parent.child("Private")) {
        for (pugi::xml_node priv_node = parent.child("Private"); priv_node; priv_node = priv_node.next_sibling("Private")) {
            std::string newpathstring = pathstring + "." + priv_node.attribute("name").value();
            getVarAddrMapping(priv_node, newpathstring);
        }
    }
    else if (parent.child("Property")) {
        for (pugi::xml_node prop_node = parent.child("Property"); prop_node; prop_node = prop_node.next_sibling("Property")) {
            std::string prop_name = prop_node.attribute("Name").value();
            std::string prop_value = prop_node.attribute("Value").value();
            if (prop_name.compare("sMonitoringVar") == 0 && !prop_value.empty()) {
                mapping[pathstring] = prop_value;
            }
        }
    }
}

int get_mapping(char *filename)
{
    pugi::xml_document sclfile;
    pugi::xml_parse_result result = sclfile.load_file(filename);

    if (result.status == pugi::status_file_not_found) {
        std::cout << "Failed to open SCL file " << filename << "!\n";
        return 1;
    }
    else if (result.status == pugi::status_io_error) {
        std::cout << "Failed to read SCL file " << filename << "!\n";
        return 1;
    }
    else if (result.status != pugi::status_ok) {
        std::cout << "Error parsing SCL file " << filename << ": " << result.status << "!\n";
        return 1;
    }
    else {
        std::cout << "Parsing SCL file " << filename << "\n";
    }

    pugi::xml_node dtt = sclfile.child("SCL").child("DataTypeTemplates");

    pugi::xml_node ied = sclfile.child("SCL").child("IED");
    std::string ied_name = ied.attribute("name").value();

    pugi::xml_node ld = ied.child("AccessPoint").child("Server").child("LDevice");
    std::string ld_name = ld.attribute("inst").value();

    std::unordered_map<std::string, std::string> lntype_lninst_mapping;
    
    //Get map of ln type -> ln instance
    for (pugi::xml_node ln_node = ld.child("LN"); ln_node; ln_node = ln_node.next_sibling("LN")) {
        std::string ln_type = ln_node.attribute("lnType").value();
        std::string ln_class = ln_node.attribute("lnClass").value();
        std::string ln_inst = ln_node.attribute("inst").value();

        lntype_lninst_mapping[ln_type] = ln_class + ln_inst;
    }

    std::unordered_map<std::string, std::string> do_ln_mapping;

    //Get map of do_type -> (ln_name + do_name)
    for (pugi::xml_node ln_node = dtt.child("LNodeType"); ln_node; ln_node = ln_node.next_sibling("LNodeType")) {
        std::string ln_type = ln_node.attribute("id").value();

        for (pugi::xml_node do_node = ln_node.child("DO"); do_node; do_node = do_node.next_sibling("DO")) {
            pugi::xml_attribute do_name = do_node.attribute("name");
            pugi::xml_attribute do_type = do_node.attribute("type");
            std::string do_namestring = do_name.value();

            do_ln_mapping[do_type.value()] = ied_name + ld_name + "/" + lntype_lninst_mapping[ln_type] + "." + do_namestring;
        }
    }

    //Path to get var names: dtt > dotype > da > private [ > private]* > property (sMonitoringVar/scontrolVar)
    for (pugi::xml_node do_node = dtt.child("DOType"); do_node; do_node = do_node.next_sibling("DOType")) {
        pugi::xml_attribute do_name = do_node.attribute("id");
        std::string do_namestring = do_name.value();

        for (pugi::xml_node da_node = do_node.child("DA"); da_node; da_node = da_node.next_sibling("DA")) {
            std::string pathstring = do_ln_mapping[do_namestring];
            getVarAddrMapping(da_node, pathstring);
        }
    }

    return 0;
}

int main(int argc, char **argv)
{
    char *mapping_file_name = "ied18scl.icd";
    interval = 1000;

    if (get_mapping(mapping_file_name)) {
        printf("Failed to get mapping\n");
    }

    for (auto it: mapping) {
        printf("%s %s\n", it.first.c_str(), it.second.c_str());
    }

    run_ied();

    return 0;
}
