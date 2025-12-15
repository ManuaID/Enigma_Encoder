#include <utility>
#include <iostream>

class plugboard {
    public:
        std::pair<char, char> arr_plugboard[24];

        plugboard();

        void assign_char(char from, char to);
        void print_plugboard();
        void reset_plugboard();
    private:
};

plugboard::plugboard() {
    reset_plugboard();
}

void plugboard::assign_char(char from, char to) {
    for(auto& item: arr_plugboard) {
        if(item.first == from) {
            item.second = to;
            std::cout << "Converted" << std::endl;
        }
    }
}


void plugboard::print_plugboard() {
    for(auto item: arr_plugboard) {
        std::cout << item.first << ": " << item.second << std::endl;
    }
}

void plugboard::reset_plugboard() {
    char start_char = 'a';
    for(int i = 0; i < 24; ++i) {
        arr_plugboard[i] = {start_char, ' '};
        start_char += 1;
    }
};