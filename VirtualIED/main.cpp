#include <list>
#include <thread>
#include <unistd.h>
#include <signal.h>

#include "DatabaseConn.h"
#include "Parser.h"
#include "Utils.h"
#include "ProtectionLogics/LogicFunction.h"
#include "CommModules/CommModule.h"

#define BINARY_NAME "./VIRTUAL_IED"

using namespace std;

bool ied_running = true;

void sigint_handler(int signalId) { 
    LOG(ERROR, "INTERRUPT! Shutting down IED...\n"); 
    ied_running = false; 
}

static void startThread_LogicFunction(LogicFunction &logic) {
    logic.start();
}

/*static void startThread_CommModule(CommModule &comm) {
    comm.start();
} */

// prints general usage help 
static void print_usage() {
    printf("Usage:\n\t"
            BINARY_NAME" <db-config> <cpmapping> <thresholds>\n");
}

// checks for validity of input arguments
static bool has_valid_args(int argc, char **argv) {
    if (argc != 4) {
        return false;
    }

    LOG(INFO, "DBconfig file: %s\n", argv[1]);
    LOG(INFO, "CPMapping file: %s\n", argv[2]);
    LOG(INFO, "Threshold file: %s\n", argv[3]);

    return true;
}

// main module for virtual IED
int main(int argc, char ** argv) {

    if (!has_valid_args(argc, argv)) {
        print_usage();
        return 0;
    }

    //initialize database connection

    list<LogicFunction*> logicList = Parser::parse_config(string(argv[2]), string(argv[3]));
    //list<CommModule*> commList = Parser::parse_comm_config();

    for (LogicFunction *logic : logicList) {
        //pass db_conn
        logic->set_db_conn(string(argv[1]));
    }
    /*for (CommModule *comm : commList) {
        //pass db_conn
    } */

    list<thread> threads;

    //start all threads
    for (LogicFunction *logic : logicList) {
        threads.push_back(thread(startThread_LogicFunction, ref(*logic)));
    }
    /*for (CommModule *comm : commList) {
        threads.push_back(thread(startThread_CommModule, ref(*comm)));
    } */

    signal(SIGINT, sigint_handler);

    //loop
    while(ied_running) {
        sleep(5);
    }

    for (auto &t : threads) {
        t.join();
    }
    //close threads and terminate

    return 0;
}