#ifndef MODELUPDATER_H
#define MODELUPDATER_H

#include <vector>
#include <string>

#include "DatabaseConn.h"
#include "iec61850_server.h"
#include "iec61850_model.h"

extern bool ied_running;

struct DataPoint {
    DataAttribute *data_attr;
    std::string tableName;
    std::string entryKey;
    std::string targetColumn;
};

class ModelUpdater {
public:
    ModelUpdater() = delete;
    ModelUpdater(std::vector<std::string> &da_strings,
                    std::vector<std::string> &db_entries);

    void start();
    void set_db_conn(std::string _db_configs) {
        db_conn = new DatabaseConn(_db_configs);
    }
    void set_mms_server(IedServer *_mms_server) {
        mms_server = _mms_server;
    }

private:
    std::vector<DataPoint> datapoints;
    DatabaseConn *db_conn;
    IedServer *mms_server; //need reference to mms_server to lock it when updating values

    void update_model();
};

#endif