cmake_minimum_required(VERSION 4.2.0)

project(cppLearn
    VERSION 1.0
    DESCRIPTION "my personal c++ learning project"
    LANGUAGES CXX
)

set(PROJECT_SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/..)

set(CMAKE_BINARY_DIR ${PROJECT_SOURCE_DIR}/build/bin)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/build/output)
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/build/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR})

include_directories(${PROJECT_SOURCE_DIR}/include)

add_executable(cppLearn ${PROJECT_SOURCE_DIR}/src/main.cpp)
