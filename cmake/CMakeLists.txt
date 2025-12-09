cmake_minimum_required(VERSION 4.2.0)

project(cppLearn)

set(PROJECT_SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/..)

set(CMAKE_BINARY_DIR ${PROJECT_SOURCE_DIR}/build/bin)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/build/output)
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/build/lib)



include_directories(${PROJECT_SOURCE_DIR})

add_executable(cppLearn ${PROJECT_SOURCE_DIR}/src/main.cpp)