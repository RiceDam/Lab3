cmake_minimum_required(VERSION 3.17)
project(Lab3)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS} -Wall -Wextra -pedantic -Wa,-mbig-obj")

add_executable(Lab3 main.cpp stack.cpp stack.hpp catch.hpp unit_tests.cpp)