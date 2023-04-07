cmake_minimum_required(VERSION 3.22)
project(cpp)

set(CMAKE_CXX_STANDARD 14)

add_executable(cpp main.cpp StringReverser.cpp StringReverser.h Expression.cpp Expression.h myStack.cpp myStack.h TwoStacks.cpp TwoStacks.h MinStack.cpp MinStack.h)
