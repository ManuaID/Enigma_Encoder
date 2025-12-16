#include <iostream>
#include "enigma_info.h"
int main(int argc, char* argv[]) {
    enigma_info enigma;
    wheel Wheel = enigma.Wheel;
    plugboard PB = enigma.PB;
    
    if(argc > 1) {
        std::string filename = argv[1];
        Wheel.init(filename);
    }
    else {
        Wheel.init();
    }

    return 0;
}