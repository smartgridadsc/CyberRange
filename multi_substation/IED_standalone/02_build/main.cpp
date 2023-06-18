/*
 *  main.cpp
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
#include "CommModules/MMS.h"
#include "ModelUpdater.h"
#include "SharedMemory.h"
#include "MMSProtection/CILO.h"

#define BINARY_NAME "./VIRTUAL_IED"

using namespace std;

bool ied_running = true;

SharedMemory g_sh_mem;

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

static void print_usage() 
{
    printf("Usage:\n\t"
            BINARY_NAME" <ied-name> <db-config> <cpmapping> <thresholds> [<sed-file>] \n");
}


static bool has_valid_args(int argc, char **argv) 
{
    if (argc != 6 && argc != 5) //can run with/without sed-file
    {
        return false;
    }

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

    string ied_name(argv[1]);
    LOG(INFO, "IED NAME: %s\n", ied_name.c_str());
    string dbconfig_filename(argv[2]);
    LOG(INFO, "DBconfig file: %s\n", dbconfig_filename.c_str());
    string cpmapping_filename(argv[3]);
    LOG(INFO, "CPMapping file: %s\n", cpmapping_filename.c_str());
    string thresholds_filename(argv[4]);
    LOG(INFO, "Threshold file: %s\n", thresholds_filename.c_str());
    string sed_filename("");
    if (argc == 6) {
        sed_filename = string(argv[5]);
        LOG(INFO, "SED file: %s\n", sed_filename.c_str());
    }
    else 
        LOG(INFO, "SED file: none (will not start UDPReceiver)\n");
    
    LOG(INFO, "---------------Configuring ModelUpdater---------------\n");
    ModelUpdater modelUpdater = Parser::parse_model_updater_config(cpmapping_filename);
    LOG(INFO, "------------------ModelUpdater Done-------------------\n\n");

    LOG(INFO, "-----------------Configuring logicList----------------\n");
    list<LogicFunction*> logicList = Parser::parse_protection_logic_config(cpmapping_filename, thresholds_filename, ied_name, sed_filename);
    LOG(INFO, "--------------------logicList Done--------------------\n\n");
    
    LOG(INFO, "-----------------Configuring commList-----------------\n");
    list<CommModule*> commList = Parser::parse_comm_config(sed_filename, ied_name);
    LOG(INFO, "--------------------commList Done---------------------\n\n");

    LOG(INFO, "-----------------Configuring MMS server-----------------\n");
    MMSModule* mmsModule = Parser::parse_mms_server(ied_name, cpmapping_filename);
    if (mmsModule != nullptr) {
        modelUpdater.set_mms_server(mmsModule->get_mms_server());
        LOG(INFO, "MMS server linked to ModelUpdater\n");
        commList.push_back((CommModule *) mmsModule);
    }
    LOG(INFO, "--------------------MMS server Done---------------------\n\n");

    //initialize database connection
    LOG(INFO, "-------------Initiating Database connections----------\n");
    modelUpdater.set_db_conn(dbconfig_filename);
    for (LogicFunction *logic : logicList) 
    {
        logic->set_db_conn(dbconfig_filename);
    }
    for (CommModule *comm : commList) 
    {
        comm->set_db_conn(dbconfig_filename);
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
        sleep(1000);
    }

    LOG(INFO, "Closing Threads\n");

    for (auto &t : threads) 
    {
        t.join();
    }

    LOG(INFO, "IED SHUTDOWN\n");
    
    return 0;
}


