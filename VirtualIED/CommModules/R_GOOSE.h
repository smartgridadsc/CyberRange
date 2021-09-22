#ifndef R_GOOSE_H
#define R_GOOSE_H

#include "CommModule.h"

class R_GOOSEModule : public CommModule {
public:
    R_GOOSEModule();
    void start();
private:
    static void main_loop();
};

#endif //R_GOOSE_H