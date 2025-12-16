#include <iostream>
#include "wheel.h"
#include "plugboard.h"

struct enigma_machine {
    wheel Wheel;
    plugboard PB;
};

int main(int argc, char* argv[]) {
    enigma_machine enigma;
    wheel &Wheel = enigma.Wheel;
    plugboard &PB = enigma.PB;
    
    if(argc > 1) {
        std::string filename = argv[1];
        Wheel.init(filename);
    }
    else {
        Wheel.init();
    }

    return 0;
}