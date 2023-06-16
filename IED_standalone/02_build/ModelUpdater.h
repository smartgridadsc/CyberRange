/*
 *  ModelUpdater.h
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
    IedServer *mms_server;

    void update_model();
};

#endif
