/*
 *  PresSV.h
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
 
#ifndef PresSV_H
#define PresSV_H

#include <list>
#include <string>
#include <unistd.h>

#include "LogicFunction.h"

class PresSV : public LogicFunction{
	public:
		PresSV(std::list<std::string> &PresSV_phy_list, 
			 std::list<std::string> &CB_list, 
			 std::list<double> &PresSV_limit_list);
		
		void start();

	private:
		std::list<std::string> &phy_list;
		std::list<std::string> &cb_list;
		std::list<double> &limit_list;

};
#endif //PresSV_H
