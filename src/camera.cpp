#include <iostream>

// 定义版本号或tag
#define MAJOR_VERSION "1.0.0"
#define MINOR_VERSION "beta"

int main(int argc, char *argv[]) {
    for (int i = 1; i < argc; ++i) {
        std::string arg(argv[i]);

        // 检查是否有 '-v' 或 '--version' 参数
        if (arg == "-v" || arg == "--version") {
            std::cout << "version: " << MAJOR_VERSION << "-" << MINOR_VERSION << std::endl;
            return 0;
        }
    }

    // 这里是程序的主要部分
    std::cout << "Hello, World! This is a camera ability." << std::endl;

    return 0;
}
