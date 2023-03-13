cmake_minimum_required(VERSION 3.22)
project(cpp)

set(CMAKE_CXX_STANDARD 14)

add_executable(cpp main.cpp Array.h)
add_executable(Array Array.cpp)
