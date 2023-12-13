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
CMAKE_BINARY_DIR = /home/nash/git/Neuron

# Include any dependencies generated for this target.
include src/CMakeFiles/LLNeuron.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/CMakeFiles/LLNeuron.dir/compiler_depend.make

# Include the progress variables for this target.
include src/CMakeFiles/LLNeuron.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/LLNeuron.dir/flags.make

src/CMakeFiles/LLNeuron.dir/LLNeuron.cpp.o: src/CMakeFiles/LLNeuron.dir/flags.make
src/CMakeFiles/LLNeuron.dir/LLNeuron.cpp.o: src/LLNeuron.cpp
src/CMakeFiles/LLNeuron.dir/LLNeuron.cpp.o: src/CMakeFiles/LLNeuron.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nash/git/Neuron/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/LLNeuron.dir/LLNeuron.cpp.o"
	cd /home/nash/git/Neuron/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/LLNeuron.dir/LLNeuron.cpp.o -MF CMakeFiles/LLNeuron.dir/LLNeuron.cpp.o.d -o CMakeFiles/LLNeuron.dir/LLNeuron.cpp.o -c /home/nash/git/Neuron/src/LLNeuron.cpp

src/CMakeFiles/LLNeuron.dir/LLNeuron.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLNeuron.dir/LLNeuron.cpp.i"
	cd /home/nash/git/Neuron/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/nash/git/Neuron/src/LLNeuron.cpp > CMakeFiles/LLNeuron.dir/LLNeuron.cpp.i

src/CMakeFiles/LLNeuron.dir/LLNeuron.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLNeuron.dir/LLNeuron.cpp.s"
	cd /home/nash/git/Neuron/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/nash/git/Neuron/src/LLNeuron.cpp -o CMakeFiles/LLNeuron.dir/LLNeuron.cpp.s

# Object files for target LLNeuron
LLNeuron_OBJECTS = \
"CMakeFiles/LLNeuron.dir/LLNeuron.cpp.o"

# External object files for target LLNeuron
LLNeuron_EXTERNAL_OBJECTS =

src/libLLNeuron.a: src/CMakeFiles/LLNeuron.dir/LLNeuron.cpp.o
src/libLLNeuron.a: src/CMakeFiles/LLNeuron.dir/build.make
src/libLLNeuron.a: src/CMakeFiles/LLNeuron.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/nash/git/Neuron/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libLLNeuron.a"
	cd /home/nash/git/Neuron/src && $(CMAKE_COMMAND) -P CMakeFiles/LLNeuron.dir/cmake_clean_target.cmake
	cd /home/nash/git/Neuron/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/LLNeuron.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/LLNeuron.dir/build: src/libLLNeuron.a
.PHONY : src/CMakeFiles/LLNeuron.dir/build

src/CMakeFiles/LLNeuron.dir/clean:
	cd /home/nash/git/Neuron/src && $(CMAKE_COMMAND) -P CMakeFiles/LLNeuron.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/LLNeuron.dir/clean

src/CMakeFiles/LLNeuron.dir/depend:
	cd /home/nash/git/Neuron && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/nash/git/Neuron /home/nash/git/Neuron/src /home/nash/git/Neuron /home/nash/git/Neuron/src /home/nash/git/Neuron/src/CMakeFiles/LLNeuron.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/LLNeuron.dir/depend

