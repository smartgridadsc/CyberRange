#ifndef SHAREDMEMORY_H
#define SHAREDMEMORY_H

#include <unordered_map>
#include <string>
#include <mutex>

enum MemType {
    BOOL, INT32, FLOAT32, UINT32, FAILED
};

struct MemBlock {
    MemType type;
    union {
        bool bool_val;
        int int_val;
        float float_val;
        uint32_t uint32_val;
    };
};

class SharedMemory {
public:
    SharedMemory();
    void insert(std::string &key, MemBlock &value);
    void reassign(std::string &key, MemBlock &value); //unused
    MemBlock getValue(std::string &key);
    void print();

private:
    std::mutex mem_lock;
    std::unordered_map<std::string, MemBlock> mapping;
};

extern SharedMemory g_sh_mem;

#endif //SHAREDMEMORY_H