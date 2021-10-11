#include <vector>
#include <string>
#include <thread>
#include <chrono>

#include "ModelUpdater.h"
#include "ModelMutex.h"
#include "DatabaseConn.h"
#include "Utils.h"
#include "iec61850_model.h"
#include "static_model.h"

#define UPDATE_INTERVAL 1000

using namespace std;

ModelUpdater::ModelUpdater(vector<string> &da_strings,
                            vector<string> &db_entries) {
    LOG(DEBUG, "Creating ModelUpdater >>>>>>>>>>>>>>>>>\n");

    if (da_strings.size() != db_entries.size()) {
        LOG(ERROR, "ModelUpdater failed! Vector sizes not equal\n");
    }

    for (int i = 0; i < da_strings.size(); i++) {
        DataPoint dp {nullptr, "", ""};

        LOG(DEBUG, "DataAttr: %s\n", da_strings[i].c_str());
        DataAttribute *da = (DataAttribute *) IedModel_getModelNodeByObjectReference(&iedModel, da_strings[i].c_str());
        if (da == NULL) {
            LOG(ERROR, "\tDataAttribute not found for %s\n", da_strings[i].c_str());
            continue;
        }
        dp.data_attr = da;

        //Get table name
        int temp_pos = 0;
        int temp_end = db_entries[i].find_first_of('.', temp_pos);
        dp.tableName = db_entries[i].substr(temp_pos, temp_end);
        LOG(DEBUG, "\tTableName: %s\n", dp.tableName.c_str());

        //Get entryKey
        temp_pos = temp_end + 1;
        temp_end = db_entries[i].find_first_of('.', temp_pos);
        dp.entryKey = db_entries[i].substr(temp_pos, temp_end - temp_pos);
        LOG(DEBUG, "\tEntryKey: %s\n", dp.entryKey.c_str());

        //Get targetColumn
        temp_pos = temp_end + 1;
        temp_end = db_entries[i].size();
        dp.targetColumn = db_entries[i].substr(temp_pos, temp_end - temp_pos);
        LOG(DEBUG, "\tTargetColumn: %s\n", dp.targetColumn.c_str());
        
        datapoints.push_back(dp);
    }

    LOG(DEBUG, ">>>>>>>>>>>>>>>>>> ModelUpdater created\n");
}

void ModelUpdater::start() {
    LOG(INFO, "MODEL_UPDATER: start\n");

    while (ied_running) {
        update_model();
        this_thread::sleep_for(chrono::milliseconds(UPDATE_INTERVAL));
    }

    db_conn->close();

    LOG(INFO, "MODEL_UPDATER: stop\n");
}

void ModelUpdater::update_model() {
    for (DataPoint dp : datapoints) {
        //Querying the database
        mysqlpp::Query cb_query = db_conn->conn.query("SELECT " + dp.targetColumn + " FROM " + dp.tableName + " WHERE name = '" + dp.entryKey + "'");
        mysqlpp::StoreQueryResult res = cb_query.store();
        mysqlpp::Row row = res[0];
        std::string res_val(row[0].c_str());

        DataAttribute *da = dp.data_attr;
        lock_guard<mutex>lock(static_model_lock);
        if (da->mmsValue != nullptr) {
            MmsValue_delete(da->mmsValue);
        }
        //TO DO: add more data types
        if (da->type == IEC61850_FLOAT32) {
            float flt_val = atof(res_val.c_str());
            da->mmsValue = MmsValue_newFloat(flt_val);
        }
        else if (da->type == IEC61850_BOOLEAN) {
            bool bool_val = atoi(res_val.c_str());
            da->mmsValue = MmsValue_newBoolean(bool_val);
        }
    }
}