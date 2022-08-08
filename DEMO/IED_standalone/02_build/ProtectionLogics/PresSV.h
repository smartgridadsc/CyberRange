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
