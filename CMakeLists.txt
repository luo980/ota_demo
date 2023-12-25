cmake_minimum_required(VERSION 3.0.0)
project(MyProject VERSION 0.1.0)

# 查找Git并确保其已安装
find_package(Git REQUIRED)

# 获取当前的Git分支名称
execute_process(
    COMMAND ${GIT_EXECUTABLE} rev-parse --abbrev-ref HEAD
    WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}
    OUTPUT_VARIABLE GIT_BRANCH_NAME
    OUTPUT_STRIP_TRAILING_WHITESPACE
)

# 打印分支名称（可选）
message(STATUS "Git branch name: ${GIT_BRANCH_NAME}")

set(PROJECT_NAME camera_ability)

# 设置目标文件名为当前的Git分支名称
set(TARGET_NAME "${PROJECT_NAME}_${GIT_BRANCH_NAME}")

# 添加源代码文件
add_executable(${TARGET_NAME} src/camera.cpp)