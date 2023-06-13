/*
 *  PTRC.h
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
 
#ifndef PTRC_H
#define PTRC_H

#include <list>
#include <string>
#include <unistd.h>


#include "LogicFunction.h"

class PTRC : public LogicFunction {
public:
    PTRC(std::list<std::string> &CB_list,
        std::list<std::string>  &remote_CB_cyber_list);
    void start();

private:
    std::list<std::string> &cb_list;
    std::list<std::string> &remote_cb_list;
};

#endif //PTRC_H
