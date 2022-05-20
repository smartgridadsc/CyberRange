#ifndef PTTR_H
#define PTTR_H

#include <list>
#include <string>
#include <unistd.h>

#include "LogicFunction.h"

class PTTR : public LogicFunction {
	public:
		PTTR(std::list<std::string> &PTTR_phy_list, 
			 std::list<std::string> &CB_list, 
			 std::list<double> &PTTR_limit_list);
		
		void start();

	private:
		std::list<std::string> &phy_list;
		std::list<std::string> &cb_list;
		std::list<double> &limit_list;

};
#endif //PTTR_H
