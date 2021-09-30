#ifndef Parser_H
#define Parser_H

#include <list>
#include <string>

#include "LogicFunction.h"

class Parser {
public:
    static std::list<LogicFunction *> parse_config(std::string cpmapping_filename, std::string thresholds_filename);
};

#endif