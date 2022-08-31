/*
 *  LogicFunction.h
 *
 *  Copyright 2022 ADSC
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
 
#ifndef LOGIC_FUNCTION_H
#define LOGIC_FUNCTION_H

#include <string>

#include "DatabaseConn.h"
#include "Lists.h"

extern bool ied_running;

class LogicFunction {
public:
    LogicFunction() {
        db_conn = NULL; 
    }
    virtual void start() = 0;
    void set_db_conn(std::string _db_configs) {
        db_conn = new DatabaseConn(_db_configs);
    }
protected:
    DatabaseConn *db_conn;
};

#endif //LOGIC_FUNCTION_H
