cmake_minimum_required(VERSION 3.23.2)

project(example_run)

add_executable(${PROJECT_NAME}.exe main.cxx)

# START();
# get <something> from hub
find_package(Git QUIET)
if(GIT_FOUND AND EXISTS "${PROJECT_SOURCE_DIR}/.git")
# Update submodules as needed
    option(GIT_SUBMODULE "Check submodules during build" ON)
    if(GIT_SUBMODULE)
        message(STATUS "Submodule update")
        execute_process(COMMAND ${GIT_EXECUTABLE} submodule update --init --recursive
                        WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
                        RESULT_VARIABLE GIT_SUBMOD_RESULT)
        if(NOT GIT_SUBMOD_RESULT EQUAL "0")
            message(FATAL_ERROR "git submodule update --init failed with ${GIT_SUBMOD_RESULT}, please checkout submodules")
        endif()
    endif()
endif()

#           CHECK ALL THE SUBMODULES
if(NOT EXISTS "${PROJECT_SOURCE_DIR}/external/<something>/CMakeLists.txt")
    message(FATAL_ERROR "The <something> submodules was not downloaded! GIT_SUBMODULE was turned off or failed. Please update submodules and try again.")
endif()
# END();

add_subdirectory(external/<something>)
target_include_directories(${PROJECT_NAME}.exe 
                PUBLIC external/<something>/where/do/I/live/include)

target_link_directories(${PROJECT_NAME}.exe
                        PRIVATE external/<something>/where/do/I/live/src)

target_link_libraries(${PROJECT_NAME}.exe something) # .a -> object(s), gti submodule add <something> <some/where/nice>
