cmake_minimum_required(VERSION 3.23.2)

preoject(test_example)

add_executable(${PROJECT_NAME} main.cpp)

add_subdirectories(Sum)

target_link_directories(${PROJECT_NAME} Sum/)
target_link_libraries(${PROJECT_NAME} sum)
