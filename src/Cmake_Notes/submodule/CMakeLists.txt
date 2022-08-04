cmake_minimum_required(VERSION 3.23.2)

project(example_run)

add_executable(${PROJECT_NAME}.exe main.cxx)

add_subdirectory(external/<something>)
target_include_directories(${PROJECT_NAME}.exe 
                PUBLIC external/<something>/where/do/I/live/include)

target_link_directories(${PROJECT_NAME}.exe
                        PRIVATE external/<something>/where/do/I/live/src)

target_link_libraries(${PROJECT_NAME}.exe something) # .a -> object(s)


