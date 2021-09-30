#ifndef COMM_MODULE_H
#define COMM_MODULE_H

extern bool ied_running;

class CommModule {
public:
    virtual void start() = 0;
};

#endif //COMM_MODULE_H