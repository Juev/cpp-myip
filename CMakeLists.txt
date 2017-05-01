cmake_minimum_required(VERSION 3.7)
project(myip)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp)
add_executable(myip ${SOURCE_FILES})

target_link_libraries(myip curl curlpp)