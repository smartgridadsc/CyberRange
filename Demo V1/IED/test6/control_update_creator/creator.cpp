#include <iostream>

int main(int argc, char **argv) {
    const char* scl_filename;

    if (argc == 2) {
        scl_filename = argv[1];
    }
    else {
        std::cout << "Invalid usage! ./create <SCL-filename> \n";
    }
}
