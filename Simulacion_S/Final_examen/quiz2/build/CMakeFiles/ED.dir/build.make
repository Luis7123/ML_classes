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
CMAKE_SOURCE_DIR = /home/luis/quiz2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/luis/quiz2/build

# Utility rule file for ED.

# Include any custom commands dependencies for this target.
include CMakeFiles/ED.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/ED.dir/progress.make

CMakeFiles/ED: exampleED

ED: CMakeFiles/ED
ED: CMakeFiles/ED.dir/build.make
.PHONY : ED

# Rule to build all files generated by this target.
CMakeFiles/ED.dir/build: ED
.PHONY : CMakeFiles/ED.dir/build

CMakeFiles/ED.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ED.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ED.dir/clean

CMakeFiles/ED.dir/depend:
	cd /home/luis/quiz2/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/luis/quiz2 /home/luis/quiz2 /home/luis/quiz2/build /home/luis/quiz2/build /home/luis/quiz2/build/CMakeFiles/ED.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ED.dir/depend

