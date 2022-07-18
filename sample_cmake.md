cmake_minimum_required(VERSION x.xx)

project(ProjectName)

add_executable(${PROJECT_NAME} advancedProgram.cxx )



```cpp

cmake_minimum_required(VERSION 3.23)

project(main VERSION 1.0.0)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# /path/to/dir/boost_1_79_0/boost
set(Boost_INCLUDE_DIR /path/to/dir/boost_1_79_0/)
set(Boost_LIBRARY_DIR /path/to/dir/boost_1_79_0/stage/lib)

# find_package(Boost COMPONENTS system filesystem multiprecision) //REQUIRED)

include_directories(${Boost_INCLUDE_DIR})
link_directories(${Boost_LIBRARY_DIR})

find_package(Boost COMPONENTS)

add_executable(main.exe main.cxx)
target_link_libraries(${Boost_LIBRARIES} main.exe)


//note

// cmake .. -DBOOST_ROOT="/path/to/dir/boost_1_79_0" -DBOOST_LIBRARYDIR="/path/to/dir/boost_1_79_0/boost"
// ./main.exe install --prefix="/path/to/dir/boost_1_79_0" --with-system --with-date_time --with-random link=static runtime-link=shared threading=multi

```
