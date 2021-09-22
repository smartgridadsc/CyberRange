#include <stdio.h>
#include <unistd.h>

#include "R_GOOSE.h"
#include "Utils.h"

R_GOOSEModule::R_GOOSEModule() {

}

void R_GOOSEModule::start() {
    LOG(DEBUG, "R_GOOSE: start\n");
    while (ied_running) {
        main_loop();
        sleep(1);
    }
    LOG(DEBUG,"R_GOOSE: stop\n");
}

void R_GOOSEModule::main_loop() {
    LOG(DEBUG, "R_GOOSE: loop\n");
}