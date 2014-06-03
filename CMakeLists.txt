cmake_minimum_required(VERSION 2.8)

project(ProgrammerTraining)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -ansi -pedantic")

file(GLOB_RECURSE SOURCE_CODE *.cpp)

add_executable(multiples_of_three ${SOURCE_CODE})