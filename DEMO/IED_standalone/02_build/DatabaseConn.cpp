/*
 *  DatabaseConn.cpp
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
 
#include <fstream>
#include <sstream>
#include <vector>
#include <string>

#include "DatabaseConn.h"
#include "Utils.h"

using namespace std;

bool isempty(const char *s)
{
  while (*s) {
    if (!isspace(*s))
      return false;
    s++;
  }
  return true;
}

DatabaseConn::DatabaseConn(string config_filename) {

    vector<string> db_file;
    ifstream file(config_filename);
    string line;
    while (getline(file, line))
    {
        stringstream linestream(line);
        string item;
        while (getline(linestream, item, '"'))
        {
            if ( !isempty(item.c_str()) )
                db_file.push_back(item);
        }
    }
    username = db_file[1];
    password = db_file[3];
    db_name = db_file[5];
    hostname = db_file[7];
    port_num = db_file[9];

    connect();
}

bool DatabaseConn::connect() {
    
    try {
        conn.set_option(new mysqlpp::SetCharsetNameOption("utf8"));
        conn.connect(db_name.c_str(), hostname.c_str(), username.c_str(), password.c_str(), static_cast<unsigned int>(std::stoul(port_num)));
        printf("successful connection to %s database\n", db_name.c_str());
    }
    catch (mysqlpp::Exception e) {
        printf("Exception, cannot connect to %s' database\n", db_name.c_str());
        std::cout << e.what() << std::endl;
        conn.disconnect();
        exit(-1);
    } 
    return true;
}

void DatabaseConn::close() {
    conn.disconnect();
}
