cmake_minimum_required(VERSION 4.2.0)

project(cppLearn
    VERSION 1.0
    DESCRIPTION "my personal c++ learning project"
    LANGUAGES CXX
)

set(PROJECT_SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/..)

set(CMAKE_BINARY_DIR ${PROJECT_SOURCE_DIR}/build/bin)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR})
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/build/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR})
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_DEBUG ${PROJECT_SOURCE_DIR})
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_RELEASE ${PROJECT_SOURCE_DIR})
include_directories(${PROJECT_SOURCE_DIR}/include)

set(PARTS 
    src/part1-OOP
    src/part2-DataStructures
    src/part3-algoritms
)

foreach(PART_PATH ${PARTS})
    get_filename_component(PART_DIR ${PART_PATH} NAME)
    set(MAIN_FILE ${PROJECT_SOURCE_DIR}/${PART_PATH}/main.cpp)
    set(BUILD_NAME ${PART_DIR})
    add_executable(${BUILD_NAME}
        ${MAIN_FILE}
    )
    set_target_properties(${BUILD_NAME} PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin/${PART_DIR})
    message(STATUS "Added executable target: ${BUILD_NAME}")    
endforeach()
