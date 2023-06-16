/*
 *  DatabaseConn.h
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
 
#ifndef DatabaseConn_H
#define DatabaseConn_H

#include <string>
#include <mysql++.h>


class DatabaseConn {
public:
    DatabaseConn(std::string config_filename); 
    bool connect();
    void close();

    mysqlpp::Connection conn;
private:
    std::string username;
    std::string password;
    std::string db_name;
    std::string hostname;
    std::string port_num;
};

#endif
