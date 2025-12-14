#include <string>
#include <fstream>
#include <chrono>
#include <ctime>
#include <sstream>
#include <ctime>
#include <vector>
#include <numeric>
#include <random>
#include <algorithm>

class wheel {
    public:
        char wheel1[24];
        char wheel2[24];
        char wheel3[24];

        wheel();
        void init();
        void init(std::string filename);

    private:
        bool read_wheel_from_txt(std::string file_name);
        void random_wheel_generator();

        std::vector<int> vec_exists;
};

wheel::wheel() {
    srand(time(NULL));
};

void wheel::init() {
    random_wheel_generator();
};

void wheel::init(std::string filename) {
    bool validFile = read_wheel_from_txt(filename);
};

bool wheel::read_wheel_from_txt(std::string file_name) {
    std::ifstream file("wheel_data/" + file_name);

    return file.is_open();
};

void wheel::random_wheel_generator() {
    auto now = std::chrono::system_clock::now();
    std::time_t now_c = std::chrono::system_clock::to_time_t(now);
    std::tm* parts = std::localtime(&now_c);

    std::ostringstream oss;
    oss << "wheel_data/" << std::put_time(parts, "%d-%m-%Y") << ".txt";

    std::ofstream o_file(oss.str());

    for(int i = 0; i < 24; ++i) {
        int temp = rand() % 24 + 1;
        if(std::find(vec_exists.begin(), vec_exists.end(), temp) == vec_exists.end()) {
            vec_exists.push_back(temp);
            wheel1[i] = temp;
        }
        else {
            i--;
        }
    }

    // for(auto c: vec_exists) {
    //     std::cout << c << std::endl;
    // }
}

std::vector<int> init_vector_check() {
    std::vector<int> temp;
    for(int i = 1; i <= 24;++i) {
        temp.push_back(i);
    }
    return temp;
};