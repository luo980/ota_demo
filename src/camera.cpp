#include <iostream>
#include <string>
#include <unistd.h>

// 定义版本号或tag
#define MAJOR_VERSION "1.1.0"
#define MINOR_VERSION "alpha"

int main(int argc, char *argv[]) {
    for (int i = 1; i < argc; ++i) {
        std::string arg(argv[i]);

        if (arg == "-v" || arg == "--version") {
            std::cout << "version: " << MAJOR_VERSION << "-" << MINOR_VERSION << std::endl;
            return 0;
        }
    }

    while(true){
        std::cout << "Hello, World! This is a camera ability." << std::endl;
        sleep(2);
    }
    // std::cout << "Hello, World! This is a camera ability." << std::endl;

    return 0;
}
