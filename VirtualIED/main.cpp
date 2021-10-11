#include <list>
#include <thread>
#include <string>
#include <unistd.h>
#include <signal.h>

#include "DatabaseConn.h"
#include "Parser.h"
#include "Utils.h"
#include "ProtectionLogics/LogicFunction.h"
#include "CommModules/CommModule.h"
#include "ModelUpdater.h"
#include "SharedMemory.h"

#define BINARY_NAME "./VIRTUAL_IED"

using namespace std;

/* 
    Global variable shared with all modules
    If false, IED will stop running
*/
bool ied_running = true;

SharedMemory g_sh_mem;

/*
    Catch interrupt signal to stop IED and modules
*/
void sigint_handler(int signalId) 
{ 
    LOG(ERROR, "INTERRUPT! Shutting down IED...\n"); 
    ied_running = false; 
}

static void startThread_LogicFunction(LogicFunction &logic) 
{
    logic.start();
}

static void startThread_CommModule(CommModule &comm) 
{
    comm.start();
}

static void startThread_ModelUpdater(ModelUpdater &modelUpdater) 
{
    modelUpdater.start();
}


// prints general usage help 
static void print_usage() 
{
    printf("Usage:\n\t"
            BINARY_NAME" <db-config> <cpmapping> <thresholds> <sed-file> <ied-name>\n");
}

// checks for validity of input arguments
static bool has_valid_args(int argc, char **argv) 
{
    if (argc != 6) 
    {
        return false;
    }

    LOG(INFO, "DBconfig file: %s\n", argv[1]);
    LOG(INFO, "CPMapping file: %s\n", argv[2]);
    LOG(INFO, "Threshold file: %s\n", argv[3]);
    LOG(INFO, "SED file: %s\n", argv[4]);
    LOG(INFO, "IED NAME: %s\n", argv[5]);

    return true;
}


// main module for virtual IED
int main(int argc, char ** argv) 
{

    if (!has_valid_args(argc, argv)) 
    {
        print_usage();
        return 0;
    }

    LOG(INFO, "---------------Configuring ModelUpdater---------------\n");
    ModelUpdater modelUpdater = Parser::parse_model_updater_config(string(argv[2]));
    LOG(INFO, "------------------ModelUpdater Done-------------------\n\n");

    LOG(INFO, "-----------------Configuring logicList----------------\n");
    list<LogicFunction*> logicList = Parser::parse_protection_logic_config(string(argv[2]), string(argv[3]));
    LOG(INFO, "--------------------logicList Done--------------------\n\n");
    
    LOG(INFO, "-----------------Configuring commList-----------------\n");
    list<CommModule*> commList = Parser::parse_comm_config(string(argv[4]), string(argv[5]));
    LOG(INFO, "--------------------commList Done---------------------\n\n");

    //initialize database connection
    LOG(INFO, "-------------Initiating Database connections----------\n");
    modelUpdater.set_db_conn(string(argv[1]));
    for (LogicFunction *logic : logicList) 
    {
        logic->set_db_conn(string(argv[1]));
    }
    for (CommModule *comm : commList) 
    {
        comm->set_db_conn(string(argv[1]));
    }
    LOG(INFO, "--------------- Database connections done ------------\n\n");

    list<thread> threads;
    LOG(INFO, "\n-----------------------------------------\n"
              "Starting Threads\n"
              "-----------------------------------------\n\n");

    threads.push_back(thread(startThread_ModelUpdater, ref(modelUpdater)));

    for (LogicFunction *logic : logicList) 
    {
        threads.push_back(thread(startThread_LogicFunction, ref(*logic)));
    }
    for (CommModule *comm : commList) 
    {
        threads.push_back(thread(startThread_CommModule, ref(*comm)));
    }

    signal(SIGINT, sigint_handler);

    //loop
    while(ied_running) 
    {
        sleep(10);
    }

    LOG(INFO, "Closing Threads\n");

    for (auto &t : threads) 
    {
        t.join();
    }
    //close threads and terminate

    LOG(INFO, "IED SHUTDOWN\n");
    //close threads and terminate

    return 0;
}
