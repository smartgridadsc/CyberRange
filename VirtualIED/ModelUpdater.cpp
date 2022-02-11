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
        string query_str("SELECT " + dp.targetColumn + " FROM " + dp.tableName + " WHERE name = '" + dp.entryKey + "'");
        //weizhe
        //cout << "SELECT " + dp.targetColumn + " FROM " + dp.tableName + " WHERE name = '" + dp.entryKey << endl;
        mysqlpp::Query cb_query = db_conn->conn.query(query_str);
        mysqlpp::StoreQueryResult res = cb_query.store();

        if (res.empty()) {
            LOG(ERROR, "Query returned empty for [%s]\n", query_str.c_str());
            continue;
        } 

        mysqlpp::Row row = res[0];
        std::string res_val(row[0].c_str());
        //weizhe
        //cout << "res[0]: " << row[0].c_str() << endl;

        DataAttribute *da = dp.data_attr;

        MmsValue *new_mms_val;
        bool isTypeSupported = true;

        //TO DO: add more data types
        if (da->type == IEC61850_FLOAT32) {
            float flt_val = atof(res_val.c_str());
            new_mms_val = MmsValue_newFloat(flt_val);
            //weizhe
            //cout << "IEC61850_FLOAT32: " << flt_val << endl;
        }
        else if (da->type == IEC61850_BOOLEAN) {
            int res = atoi(res_val.c_str());
            bool bool_val = (bool) res;
            new_mms_val = MmsValue_newBoolean(bool_val);
            //weizhe
            //cout << "IEC61850_BOOLEAN: " << bool_val << endl;
        }
        else if (da->type == IEC61850_INT32) {
            int res = atoi(res_val.c_str());
            //new_mms_val = MmsValue_newInteger(res); //setting size of integer
            new_mms_val = MmsValue_newIntegerFromInt32(res);
            //weizhe
            //cout << "IEC61850_INT32: " << res << endl;
        }
        else if (da->type == IEC61850_CODEDENUM) {
            int res = atoi(res_val.c_str());
            bool bool_val = (bool) res;
			new_mms_val = MmsValue_newBitString(2);

			if(bool_val)
				MmsValue_setBitStringFromIntegerBigEndian(new_mms_val, 2);
			else
				MmsValue_setBitStringFromIntegerBigEndian(new_mms_val, 1);
        }

        else {
            isTypeSupported = false;
        }

        if (isTypeSupported) {
            if (mms_server != nullptr) IedServer_lockDataModel(*mms_server);
            lock_guard<mutex>lock(static_model_lock);
            MmsValue_update(da->mmsValue, new_mms_val);
            if (mms_server != nullptr) IedServer_unlockDataModel(*mms_server);
        }
    }
}