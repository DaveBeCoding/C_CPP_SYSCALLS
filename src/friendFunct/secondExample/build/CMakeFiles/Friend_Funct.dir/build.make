# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.26

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
CMAKE_COMMAND = /opt/homebrew/Cellar/cmake/3.26.1/bin/cmake

# The command to remove a file.
RM = /opt/homebrew/Cellar/cmake/3.26.1/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/dave/Documents/src/c++/C_CPP_SYSCALLS/src/friendFunct/secondExample

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/dave/Documents/src/c++/C_CPP_SYSCALLS/src/friendFunct/secondExample/build

# Include any dependencies generated for this target.
include CMakeFiles/Friend_Funct.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Friend_Funct.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Friend_Funct.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Friend_Funct.dir/flags.make

CMakeFiles/Friend_Funct.dir/main.cxx.o: CMakeFiles/Friend_Funct.dir/flags.make
CMakeFiles/Friend_Funct.dir/main.cxx.o: /Users/dave/Documents/src/c++/C_CPP_SYSCALLS/src/friendFunct/secondExample/main.cxx
CMakeFiles/Friend_Funct.dir/main.cxx.o: CMakeFiles/Friend_Funct.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/dave/Documents/src/c++/C_CPP_SYSCALLS/src/friendFunct/secondExample/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Friend_Funct.dir/main.cxx.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Friend_Funct.dir/main.cxx.o -MF CMakeFiles/Friend_Funct.dir/main.cxx.o.d -o CMakeFiles/Friend_Funct.dir/main.cxx.o -c /Users/dave/Documents/src/c++/C_CPP_SYSCALLS/src/friendFunct/secondExample/main.cxx

CMakeFiles/Friend_Funct.dir/main.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Friend_Funct.dir/main.cxx.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/dave/Documents/src/c++/C_CPP_SYSCALLS/src/friendFunct/secondExample/main.cxx > CMakeFiles/Friend_Funct.dir/main.cxx.i

CMakeFiles/Friend_Funct.dir/main.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Friend_Funct.dir/main.cxx.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/dave/Documents/src/c++/C_CPP_SYSCALLS/src/friendFunct/secondExample/main.cxx -o CMakeFiles/Friend_Funct.dir/main.cxx.s

# Object files for target Friend_Funct
Friend_Funct_OBJECTS = \
"CMakeFiles/Friend_Funct.dir/main.cxx.o"

# External object files for target Friend_Funct
Friend_Funct_EXTERNAL_OBJECTS =

Friend_Funct: CMakeFiles/Friend_Funct.dir/main.cxx.o
Friend_Funct: CMakeFiles/Friend_Funct.dir/build.make
Friend_Funct: CMakeFiles/Friend_Funct.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/dave/Documents/src/c++/C_CPP_SYSCALLS/src/friendFunct/secondExample/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Friend_Funct"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Friend_Funct.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Friend_Funct.dir/build: Friend_Funct
.PHONY : CMakeFiles/Friend_Funct.dir/build

CMakeFiles/Friend_Funct.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Friend_Funct.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Friend_Funct.dir/clean

CMakeFiles/Friend_Funct.dir/depend:
	cd /Users/dave/Documents/src/c++/C_CPP_SYSCALLS/src/friendFunct/secondExample/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/dave/Documents/src/c++/C_CPP_SYSCALLS/src/friendFunct/secondExample /Users/dave/Documents/src/c++/C_CPP_SYSCALLS/src/friendFunct/secondExample /Users/dave/Documents/src/c++/C_CPP_SYSCALLS/src/friendFunct/secondExample/build /Users/dave/Documents/src/c++/C_CPP_SYSCALLS/src/friendFunct/secondExample/build /Users/dave/Documents/src/c++/C_CPP_SYSCALLS/src/friendFunct/secondExample/build/CMakeFiles/Friend_Funct.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Friend_Funct.dir/depend

