#include <vector>
#include <array>
#include <chrono>
#include <cmath>

#include <assert.h>

#include "Utils.h"

using namespace std;

// Returns the number of bytes to hold a given UINT32 number
unsigned char Utils::getUINT32Length(unsigned int num)
{
    if (num < 0x10000)
    {
        if (num < 0x100)
            return 0x01;
        else
            return 0x02;
    }
    else
    {
        if (num < 0x1000000)
            return 0x03;
        else
            return 0x04;
    }
}

// Converts a given UINT32 number into a vector of up to 4 bytes (as output parameter)
void Utils::convertUINT32IntoBytes(unsigned int num, vector<unsigned char> &vecOut)
{
    const size_t byte_count{getUINT32Length(num)};

    constexpr uint_fast32_t mask0 { 0xFF000000 };
    constexpr uint_fast32_t mask1 { 0x00FF0000 };
    constexpr uint_fast32_t mask2 { 0x0000FF00 };
    constexpr uint_fast32_t mask3 { 0x000000FF };

    if (byte_count == 4)
        vecOut.push_back(static_cast<unsigned char>((mask0 & num) >> 24));
    if (byte_count >= 3)
        vecOut.push_back(static_cast<unsigned char>((mask1 & num) >> 16));
    if (byte_count >= 2)
        vecOut.push_back(static_cast<unsigned char>((mask2 & num) >> 8));
    if (byte_count >= 1)
        vecOut.push_back(static_cast<unsigned char>((mask3 & num)));

    assert(vecOut.size() >= 1 && vecOut.size() <= 4);
}

// Set timestamp in an 8-byte array
void Utils::set_timestamp(std::array<unsigned char, 8> &timeArrOut)
{
    auto nanosec_since_epoch = chrono::duration_cast<chrono::nanoseconds>(chrono::system_clock::now().time_since_epoch()).count();
    auto sec_since_epoch = chrono::duration_cast<chrono::seconds>(chrono::system_clock::now().time_since_epoch()).count();

    unsigned int subsec_component = nanosec_since_epoch - (sec_since_epoch * 1'000'000'000);
    double frac_sec{static_cast<double>(subsec_component)};

    // Convert from [nanosecond] to [second]
    for (int i = 0; i < 9; i++)
    {
        frac_sec = frac_sec / 10;
    }

    // Convert to 3-byte (24-bit) fraction of second value (ref: ISO 9506-2)
    for (int i = 0; i < 24; i++)
    {
        frac_sec = frac_sec * 2;
    }

    frac_sec = round(frac_sec);
    subsec_component = static_cast<unsigned int>(frac_sec);

    // Set integer seconds in array's high order octets (0 to 3)
    for (std::size_t i{ 0 }; i < (timeArrOut.size() / 2); i++)
    {
        timeArrOut[i] = static_cast<int>((sec_since_epoch >> (24 - 8 * i)) & 0xff);
    }

    // Set fractional second in array's octets 4 to 6
    for (std::size_t i{ timeArrOut.size() / 2 }; i < (timeArrOut.size() - 1); i++)
    {
        timeArrOut[i] = static_cast<int>(subsec_component >> (16 - 8 * (i - timeArrOut.size() / 2)) & 0xff);
    }

}

/*
    Converts char buffer into its hex string representation
*/
void Utils::hex_string(const char* buffer, unsigned int length, string &output) {
    if (length <= 0 ) {
        LOG(DEBUG, "Utils::hex_string(): input length = 0\n");
    }
    if (!output.empty()) {
        LOG(DEBUG, "Utils::hex_string(): output buffer not empty, contents will be removed\n");
        output = "";
    }

    char hexchar[] = {'0','1','2','3','4','5','6','7','8','9',
                        'A','B','C','D','E','F'};

    for (int i = 0; i < length; i++) {
        output.push_back(hexchar[buffer[i] / 16]);
        output.push_back(hexchar[buffer[i] % 16]);
    }

    if (output.length() != (length * 2)) {
        LOG(DEBUG, "Utils::hex_string(): output length irregular\n");
    }
}
