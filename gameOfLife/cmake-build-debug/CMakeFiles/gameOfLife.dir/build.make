# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.7

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/lizzy/class_c/gameOfLife

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/lizzy/class_c/gameOfLife/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/gameOfLife.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/gameOfLife.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/gameOfLife.dir/flags.make

CMakeFiles/gameOfLife.dir/gameoflife.cpp.o: CMakeFiles/gameOfLife.dir/flags.make
CMakeFiles/gameOfLife.dir/gameoflife.cpp.o: ../gameoflife.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/lizzy/class_c/gameOfLife/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/gameOfLife.dir/gameoflife.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/gameOfLife.dir/gameoflife.cpp.o -c /Users/lizzy/class_c/gameOfLife/gameoflife.cpp

CMakeFiles/gameOfLife.dir/gameoflife.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/gameOfLife.dir/gameoflife.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/lizzy/class_c/gameOfLife/gameoflife.cpp > CMakeFiles/gameOfLife.dir/gameoflife.cpp.i

CMakeFiles/gameOfLife.dir/gameoflife.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/gameOfLife.dir/gameoflife.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/lizzy/class_c/gameOfLife/gameoflife.cpp -o CMakeFiles/gameOfLife.dir/gameoflife.cpp.s

CMakeFiles/gameOfLife.dir/gameoflife.cpp.o.requires:

.PHONY : CMakeFiles/gameOfLife.dir/gameoflife.cpp.o.requires

CMakeFiles/gameOfLife.dir/gameoflife.cpp.o.provides: CMakeFiles/gameOfLife.dir/gameoflife.cpp.o.requires
	$(MAKE) -f CMakeFiles/gameOfLife.dir/build.make CMakeFiles/gameOfLife.dir/gameoflife.cpp.o.provides.build
.PHONY : CMakeFiles/gameOfLife.dir/gameoflife.cpp.o.provides

CMakeFiles/gameOfLife.dir/gameoflife.cpp.o.provides.build: CMakeFiles/gameOfLife.dir/gameoflife.cpp.o


# Object files for target gameOfLife
gameOfLife_OBJECTS = \
"CMakeFiles/gameOfLife.dir/gameoflife.cpp.o"

# External object files for target gameOfLife
gameOfLife_EXTERNAL_OBJECTS =

gameOfLife: CMakeFiles/gameOfLife.dir/gameoflife.cpp.o
gameOfLife: CMakeFiles/gameOfLife.dir/build.make
gameOfLife: CMakeFiles/gameOfLife.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/lizzy/class_c/gameOfLife/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable gameOfLife"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/gameOfLife.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/gameOfLife.dir/build: gameOfLife

.PHONY : CMakeFiles/gameOfLife.dir/build

CMakeFiles/gameOfLife.dir/requires: CMakeFiles/gameOfLife.dir/gameoflife.cpp.o.requires

.PHONY : CMakeFiles/gameOfLife.dir/requires

CMakeFiles/gameOfLife.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/gameOfLife.dir/cmake_clean.cmake
.PHONY : CMakeFiles/gameOfLife.dir/clean

CMakeFiles/gameOfLife.dir/depend:
	cd /Users/lizzy/class_c/gameOfLife/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/lizzy/class_c/gameOfLife /Users/lizzy/class_c/gameOfLife /Users/lizzy/class_c/gameOfLife/cmake-build-debug /Users/lizzy/class_c/gameOfLife/cmake-build-debug /Users/lizzy/class_c/gameOfLife/cmake-build-debug/CMakeFiles/gameOfLife.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/gameOfLife.dir/depend

