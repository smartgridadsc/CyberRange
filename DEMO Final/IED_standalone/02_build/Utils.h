#ifndef UTILS_H
#define UTILS_H

#include <string>
#include <vector>
#include <array>

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
    Utils() = delete;

    static unsigned char getUINT32Length(unsigned int num);
    static void convertUINT32IntoBytes(unsigned int num, std::vector<unsigned char> &vecOut);
    static void set_timestamp(std::array<unsigned char, 8> &timeArrOut);
    static void hex_string(const char* buffer, unsigned int length, std::string &output);
};

#endif //UTILS_H