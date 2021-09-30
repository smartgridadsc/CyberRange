#ifndef UTILS_H
#define UTILS_H

#include <string>

#define DEBUG 10
#define INFO 20
#define WARNING 30
#define ERROR 40

#define LOG_LEVEL DEBUG
#define LOG(logLevel, ...) \
        if (logLevel >= LOG_LEVEL) \
        printf(__VA_ARGS__);

class Utils {
public:

};

#endif //UTILS_H