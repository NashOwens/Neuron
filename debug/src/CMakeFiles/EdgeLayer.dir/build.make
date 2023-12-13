# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/nash/git/Neuron

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/nash/git/Neuron/debug

# Include any dependencies generated for this target.
include src/CMakeFiles/EdgeLayer.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/CMakeFiles/EdgeLayer.dir/compiler_depend.make

# Include the progress variables for this target.
include src/CMakeFiles/EdgeLayer.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/EdgeLayer.dir/flags.make

src/CMakeFiles/EdgeLayer.dir/EdgeLayer.cpp.o: src/CMakeFiles/EdgeLayer.dir/flags.make
src/CMakeFiles/EdgeLayer.dir/EdgeLayer.cpp.o: ../src/EdgeLayer.cpp
src/CMakeFiles/EdgeLayer.dir/EdgeLayer.cpp.o: src/CMakeFiles/EdgeLayer.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nash/git/Neuron/debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/EdgeLayer.dir/EdgeLayer.cpp.o"
	cd /home/nash/git/Neuron/debug/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/EdgeLayer.dir/EdgeLayer.cpp.o -MF CMakeFiles/EdgeLayer.dir/EdgeLayer.cpp.o.d -o CMakeFiles/EdgeLayer.dir/EdgeLayer.cpp.o -c /home/nash/git/Neuron/src/EdgeLayer.cpp

src/CMakeFiles/EdgeLayer.dir/EdgeLayer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/EdgeLayer.dir/EdgeLayer.cpp.i"
	cd /home/nash/git/Neuron/debug/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/nash/git/Neuron/src/EdgeLayer.cpp > CMakeFiles/EdgeLayer.dir/EdgeLayer.cpp.i

src/CMakeFiles/EdgeLayer.dir/EdgeLayer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/EdgeLayer.dir/EdgeLayer.cpp.s"
	cd /home/nash/git/Neuron/debug/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/nash/git/Neuron/src/EdgeLayer.cpp -o CMakeFiles/EdgeLayer.dir/EdgeLayer.cpp.s

# Object files for target EdgeLayer
EdgeLayer_OBJECTS = \
"CMakeFiles/EdgeLayer.dir/EdgeLayer.cpp.o"

# External object files for target EdgeLayer
EdgeLayer_EXTERNAL_OBJECTS =

src/libEdgeLayer.a: src/CMakeFiles/EdgeLayer.dir/EdgeLayer.cpp.o
src/libEdgeLayer.a: src/CMakeFiles/EdgeLayer.dir/build.make
src/libEdgeLayer.a: src/CMakeFiles/EdgeLayer.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/nash/git/Neuron/debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libEdgeLayer.a"
	cd /home/nash/git/Neuron/debug/src && $(CMAKE_COMMAND) -P CMakeFiles/EdgeLayer.dir/cmake_clean_target.cmake
	cd /home/nash/git/Neuron/debug/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/EdgeLayer.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/EdgeLayer.dir/build: src/libEdgeLayer.a
.PHONY : src/CMakeFiles/EdgeLayer.dir/build

src/CMakeFiles/EdgeLayer.dir/clean:
	cd /home/nash/git/Neuron/debug/src && $(CMAKE_COMMAND) -P CMakeFiles/EdgeLayer.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/EdgeLayer.dir/clean

src/CMakeFiles/EdgeLayer.dir/depend:
	cd /home/nash/git/Neuron/debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/nash/git/Neuron /home/nash/git/Neuron/src /home/nash/git/Neuron/debug /home/nash/git/Neuron/debug/src /home/nash/git/Neuron/debug/src/CMakeFiles/EdgeLayer.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/EdgeLayer.dir/depend

