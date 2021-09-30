#ifndef R_SV_H
#define R_SV_H

#include "CommModule.h"

class R_SVModule : public CommModule {
public:
    R_SVModule();
    void start();
private:
    static void main_loop();
};


#endif // R_SV_H