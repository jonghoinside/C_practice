# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /mnt/c/Users/user/Desktop/Github/C_practice

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/c/Users/user/Desktop/Github/C_practice/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/prac07.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/prac07.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/prac07.dir/flags.make

CMakeFiles/prac07.dir/practice07/main.c.o: CMakeFiles/prac07.dir/flags.make
CMakeFiles/prac07.dir/practice07/main.c.o: ../practice07/main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/user/Desktop/Github/C_practice/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/prac07.dir/practice07/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/prac07.dir/practice07/main.c.o   -c /mnt/c/Users/user/Desktop/Github/C_practice/practice07/main.c

CMakeFiles/prac07.dir/practice07/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/prac07.dir/practice07/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /mnt/c/Users/user/Desktop/Github/C_practice/practice07/main.c > CMakeFiles/prac07.dir/practice07/main.c.i

CMakeFiles/prac07.dir/practice07/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/prac07.dir/practice07/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /mnt/c/Users/user/Desktop/Github/C_practice/practice07/main.c -o CMakeFiles/prac07.dir/practice07/main.c.s

CMakeFiles/prac07.dir/practice07/solution.c.o: CMakeFiles/prac07.dir/flags.make
CMakeFiles/prac07.dir/practice07/solution.c.o: ../practice07/solution.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/user/Desktop/Github/C_practice/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/prac07.dir/practice07/solution.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/prac07.dir/practice07/solution.c.o   -c /mnt/c/Users/user/Desktop/Github/C_practice/practice07/solution.c

CMakeFiles/prac07.dir/practice07/solution.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/prac07.dir/practice07/solution.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /mnt/c/Users/user/Desktop/Github/C_practice/practice07/solution.c > CMakeFiles/prac07.dir/practice07/solution.c.i

CMakeFiles/prac07.dir/practice07/solution.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/prac07.dir/practice07/solution.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /mnt/c/Users/user/Desktop/Github/C_practice/practice07/solution.c -o CMakeFiles/prac07.dir/practice07/solution.c.s

# Object files for target prac07
prac07_OBJECTS = \
"CMakeFiles/prac07.dir/practice07/main.c.o" \
"CMakeFiles/prac07.dir/practice07/solution.c.o"

# External object files for target prac07
prac07_EXTERNAL_OBJECTS =

prac07: CMakeFiles/prac07.dir/practice07/main.c.o
prac07: CMakeFiles/prac07.dir/practice07/solution.c.o
prac07: CMakeFiles/prac07.dir/build.make
prac07: CMakeFiles/prac07.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/c/Users/user/Desktop/Github/C_practice/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable prac07"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/prac07.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/prac07.dir/build: prac07

.PHONY : CMakeFiles/prac07.dir/build

CMakeFiles/prac07.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/prac07.dir/cmake_clean.cmake
.PHONY : CMakeFiles/prac07.dir/clean

CMakeFiles/prac07.dir/depend:
	cd /mnt/c/Users/user/Desktop/Github/C_practice/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/c/Users/user/Desktop/Github/C_practice /mnt/c/Users/user/Desktop/Github/C_practice /mnt/c/Users/user/Desktop/Github/C_practice/cmake-build-debug /mnt/c/Users/user/Desktop/Github/C_practice/cmake-build-debug /mnt/c/Users/user/Desktop/Github/C_practice/cmake-build-debug/CMakeFiles/prac07.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/prac07.dir/depend

