cmake_minimum_required(VERSION 3.0.0)
project(Task_1 VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

add_executable(Task_1 main.cpp)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
target_compile_features(Task_1 PRIVATE cxx_std_20)


target_compile_options(Task_1 PRIVATE -std=c++20)
include(CPack)