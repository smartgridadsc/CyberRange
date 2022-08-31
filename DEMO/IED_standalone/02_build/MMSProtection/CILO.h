/*
 *  CILO.h
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
 
#ifndef CILO_H
#define CILO_H

#include <list>
#include <string>
#include "iec61850_model.h"


class CILO{

public:
    CILO();
    void set_list(std::list<std::string> &remote_cb_cyber_list);
    bool check();

private:
    std::list<std::string> remote_cb_cyber_list;
};

#endif //CILO_H
