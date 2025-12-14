#include <iostream>
#include "wheel.h"
int main(int argc, char* argv[]) {
    wheel Wheel;
    if(argc > 1) {
        std::string filename = argv[1];
        Wheel.init(filename);
    }
    else {
        Wheel.init();
    }
    return 0;
}