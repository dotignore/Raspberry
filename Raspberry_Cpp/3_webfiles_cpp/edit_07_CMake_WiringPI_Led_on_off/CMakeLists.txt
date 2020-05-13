cmake_minimum_required(VERSION 3.13)
project(WiringPi)

set(CMAKE_CXX_STANDARD 11)

add_executable(WiringPi main.cpp)


find_library(WiringPi wiringPi)
target_link_libraries(WiringPi ${wiringPi_LIB})
