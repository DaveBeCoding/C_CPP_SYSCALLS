# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.23

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /opt/homebrew/Cellar/cmake/3.23.2/bin/cmake

# The command to remove a file.
RM = /opt/homebrew/Cellar/cmake/3.23.2/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/dave/Documents/src/c++/C_CPP_SYSCALLS/src/Vector

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/dave/Documents/src/c++/C_CPP_SYSCALLS/src/Vector/build

# Include any dependencies generated for this target.
include CMakeFiles/VectorExample.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/VectorExample.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/VectorExample.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/VectorExample.dir/flags.make

CMakeFiles/VectorExample.dir/Vect_01_Example.cpp.o: CMakeFiles/VectorExample.dir/flags.make
CMakeFiles/VectorExample.dir/Vect_01_Example.cpp.o: ../Vect_01_Example.cpp
CMakeFiles/VectorExample.dir/Vect_01_Example.cpp.o: CMakeFiles/VectorExample.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/dave/Documents/src/c++/C_CPP_SYSCALLS/src/Vector/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/VectorExample.dir/Vect_01_Example.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/VectorExample.dir/Vect_01_Example.cpp.o -MF CMakeFiles/VectorExample.dir/Vect_01_Example.cpp.o.d -o CMakeFiles/VectorExample.dir/Vect_01_Example.cpp.o -c /Users/dave/Documents/src/c++/C_CPP_SYSCALLS/src/Vector/Vect_01_Example.cpp

CMakeFiles/VectorExample.dir/Vect_01_Example.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/VectorExample.dir/Vect_01_Example.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/dave/Documents/src/c++/C_CPP_SYSCALLS/src/Vector/Vect_01_Example.cpp > CMakeFiles/VectorExample.dir/Vect_01_Example.cpp.i

CMakeFiles/VectorExample.dir/Vect_01_Example.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/VectorExample.dir/Vect_01_Example.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/dave/Documents/src/c++/C_CPP_SYSCALLS/src/Vector/Vect_01_Example.cpp -o CMakeFiles/VectorExample.dir/Vect_01_Example.cpp.s

# Object files for target VectorExample
VectorExample_OBJECTS = \
"CMakeFiles/VectorExample.dir/Vect_01_Example.cpp.o"

# External object files for target VectorExample
VectorExample_EXTERNAL_OBJECTS =

VectorExample: CMakeFiles/VectorExample.dir/Vect_01_Example.cpp.o
VectorExample: CMakeFiles/VectorExample.dir/build.make
VectorExample: CMakeFiles/VectorExample.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/dave/Documents/src/c++/C_CPP_SYSCALLS/src/Vector/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable VectorExample"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/VectorExample.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/VectorExample.dir/build: VectorExample
.PHONY : CMakeFiles/VectorExample.dir/build

CMakeFiles/VectorExample.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/VectorExample.dir/cmake_clean.cmake
.PHONY : CMakeFiles/VectorExample.dir/clean

CMakeFiles/VectorExample.dir/depend:
	cd /Users/dave/Documents/src/c++/C_CPP_SYSCALLS/src/Vector/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/dave/Documents/src/c++/C_CPP_SYSCALLS/src/Vector /Users/dave/Documents/src/c++/C_CPP_SYSCALLS/src/Vector /Users/dave/Documents/src/c++/C_CPP_SYSCALLS/src/Vector/build /Users/dave/Documents/src/c++/C_CPP_SYSCALLS/src/Vector/build /Users/dave/Documents/src/c++/C_CPP_SYSCALLS/src/Vector/build/CMakeFiles/VectorExample.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/VectorExample.dir/depend

