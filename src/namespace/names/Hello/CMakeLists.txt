cmake_minimum_required(VERSION 3.23)

add_library(
    src_hello
    src/HI_HELLO.cpp
    src/HI_HELLO.hpp
)

target_include_directories(src PUBLIC '${CMAKE_SOURCE_DIR}/src')