#include <stdio.h>
#include <unistd.h>

#include "R_SV.h"
#include "Utils.h"

R_SVModule::R_SVModule() {

}

void R_SVModule::start() {
    LOG(DEBUG, "R_SV: start\n");
    while (ied_running) {
        main_loop();
        sleep(1);
    }
    LOG(DEBUG, "R_SV: stop\n");
}

void R_SVModule::main_loop() {
    LOG(DEBUG, "R_SV: loop\n");
}