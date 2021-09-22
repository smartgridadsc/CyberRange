#include <list>
#include <string>

class Parser {
public:
    static list<LogicFunction*> parse(std::string cpmapping_filename, std::string thresholds_filename);
};