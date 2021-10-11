#include <string>
#include <unordered_map>

#include "SharedMemory.h"
#include "Utils.h"

using namespace std;

SharedMemory::SharedMemory()
{
}

void SharedMemory::insert(string &key, MemBlock &value) {
    const lock_guard<mutex> lock(mem_lock);

    mapping[key] = value;

}

//unused
void SharedMemory::reassign(std::string &key, MemBlock &new_value) {
    const lock_guard<mutex> lock(mem_lock);

    auto it = mapping.find(key);
    if (it != mapping.end()) {
        it->second = new_value;
    }
    else { //do not operate on map if key does not exist
        LOG(ERROR, "reassign(): Key (%s) does not exist in SharedMemory\n", key.c_str());
    }
}

MemBlock SharedMemory::getValue(string &key) {
    const lock_guard<mutex> lock(mem_lock); 

    auto it = mapping.find(key);
    if (it != mapping.end()) {
        return it->second;
    }
    else { //do not operate on map if key does not exist
        LOG(ERROR, "getValue(): Key (%s) does not exist in SharedMemory\n", key.c_str());
        return MemBlock{MemType::FAILED};
    }
}

void SharedMemory::print() {
    const lock_guard<mutex> lock(mem_lock);
        LOG(DEBUG, "----------------------------------------------\n");
    LOG(DEBUG, "SHARED MEMORY:\n");
    for (auto &it : mapping) {
        LOG(DEBUG, "%s = ", it.first.c_str());
        MemBlock &memblk = it.second;
        if (memblk.type == MemType::BOOL) {
            if (memblk.bool_val) {
                LOG(DEBUG, "true\n");
            }
            else {
                LOG(DEBUG, "false\n");
            }
        }
        else if (memblk.type == MemType::FLOAT32) {
            LOG(DEBUG, "%f\n", memblk.float_val);
        }
    }
    LOG(DEBUG, "----------------------------------------------\n");
}
