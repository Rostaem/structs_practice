cmake_minimum_required(VERSION 3.30)
project(structs_practice)

set(CMAKE_CXX_STANDARD 26)

add_executable(structs_practice main.cpp
        utils/formatting.cpp
        utils/formatting.h
        utils/input_validation.cpp
        utils/input_validation.h
        utils/customer.h)
