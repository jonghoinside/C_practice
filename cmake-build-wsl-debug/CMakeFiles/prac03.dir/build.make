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
CMAKE_SOURCE_DIR = "/mnt/c/Users/ajh07/Desktop/Github portfolio/practice"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/mnt/c/Users/ajh07/Desktop/Github portfolio/practice/cmake-build-wsl-debug"

# Include any dependencies generated for this target.
include CMakeFiles/prac03.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/prac03.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/prac03.dir/flags.make

CMakeFiles/prac03.dir/practice03/main.c.o: CMakeFiles/prac03.dir/flags.make
CMakeFiles/prac03.dir/practice03/main.c.o: ../practice03/main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/mnt/c/Users/ajh07/Desktop/Github portfolio/practice/cmake-build-wsl-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/prac03.dir/practice03/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/prac03.dir/practice03/main.c.o   -c "/mnt/c/Users/ajh07/Desktop/Github portfolio/practice/practice03/main.c"

CMakeFiles/prac03.dir/practice03/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/prac03.dir/practice03/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/mnt/c/Users/ajh07/Desktop/Github portfolio/practice/practice03/main.c" > CMakeFiles/prac03.dir/practice03/main.c.i

CMakeFiles/prac03.dir/practice03/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/prac03.dir/practice03/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/mnt/c/Users/ajh07/Desktop/Github portfolio/practice/practice03/main.c" -o CMakeFiles/prac03.dir/practice03/main.c.s

CMakeFiles/prac03.dir/practice03/solution.c.o: CMakeFiles/prac03.dir/flags.make
CMakeFiles/prac03.dir/practice03/solution.c.o: ../practice03/solution.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/mnt/c/Users/ajh07/Desktop/Github portfolio/practice/cmake-build-wsl-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/prac03.dir/practice03/solution.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/prac03.dir/practice03/solution.c.o   -c "/mnt/c/Users/ajh07/Desktop/Github portfolio/practice/practice03/solution.c"

CMakeFiles/prac03.dir/practice03/solution.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/prac03.dir/practice03/solution.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/mnt/c/Users/ajh07/Desktop/Github portfolio/practice/practice03/solution.c" > CMakeFiles/prac03.dir/practice03/solution.c.i

CMakeFiles/prac03.dir/practice03/solution.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/prac03.dir/practice03/solution.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/mnt/c/Users/ajh07/Desktop/Github portfolio/practice/practice03/solution.c" -o CMakeFiles/prac03.dir/practice03/solution.c.s

# Object files for target prac03
prac03_OBJECTS = \
"CMakeFiles/prac03.dir/practice03/main.c.o" \
"CMakeFiles/prac03.dir/practice03/solution.c.o"

# External object files for target prac03
prac03_EXTERNAL_OBJECTS =

prac03: CMakeFiles/prac03.dir/practice03/main.c.o
prac03: CMakeFiles/prac03.dir/practice03/solution.c.o
prac03: CMakeFiles/prac03.dir/build.make
prac03: CMakeFiles/prac03.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/mnt/c/Users/ajh07/Desktop/Github portfolio/practice/cmake-build-wsl-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable prac03"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/prac03.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/prac03.dir/build: prac03

.PHONY : CMakeFiles/prac03.dir/build

CMakeFiles/prac03.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/prac03.dir/cmake_clean.cmake
.PHONY : CMakeFiles/prac03.dir/clean

CMakeFiles/prac03.dir/depend:
	cd "/mnt/c/Users/ajh07/Desktop/Github portfolio/practice/cmake-build-wsl-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/mnt/c/Users/ajh07/Desktop/Github portfolio/practice" "/mnt/c/Users/ajh07/Desktop/Github portfolio/practice" "/mnt/c/Users/ajh07/Desktop/Github portfolio/practice/cmake-build-wsl-debug" "/mnt/c/Users/ajh07/Desktop/Github portfolio/practice/cmake-build-wsl-debug" "/mnt/c/Users/ajh07/Desktop/Github portfolio/practice/cmake-build-wsl-debug/CMakeFiles/prac03.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/prac03.dir/depend
