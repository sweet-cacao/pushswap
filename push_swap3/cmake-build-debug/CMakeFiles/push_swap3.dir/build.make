# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/gstarvin/CLionProjects/push_swap3

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/gstarvin/CLionProjects/push_swap3/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/push_swap3.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/push_swap3.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/push_swap3.dir/flags.make

CMakeFiles/push_swap3.dir/main.c.o: CMakeFiles/push_swap3.dir/flags.make
CMakeFiles/push_swap3.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/gstarvin/CLionProjects/push_swap3/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/push_swap3.dir/main.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/push_swap3.dir/main.c.o   -c /Users/gstarvin/CLionProjects/push_swap3/main.c

CMakeFiles/push_swap3.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/push_swap3.dir/main.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/gstarvin/CLionProjects/push_swap3/main.c > CMakeFiles/push_swap3.dir/main.c.i

CMakeFiles/push_swap3.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/push_swap3.dir/main.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/gstarvin/CLionProjects/push_swap3/main.c -o CMakeFiles/push_swap3.dir/main.c.s

CMakeFiles/push_swap3.dir/push_swap.c.o: CMakeFiles/push_swap3.dir/flags.make
CMakeFiles/push_swap3.dir/push_swap.c.o: ../push_swap.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/gstarvin/CLionProjects/push_swap3/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/push_swap3.dir/push_swap.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/push_swap3.dir/push_swap.c.o   -c /Users/gstarvin/CLionProjects/push_swap3/push_swap.c

CMakeFiles/push_swap3.dir/push_swap.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/push_swap3.dir/push_swap.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/gstarvin/CLionProjects/push_swap3/push_swap.c > CMakeFiles/push_swap3.dir/push_swap.c.i

CMakeFiles/push_swap3.dir/push_swap.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/push_swap3.dir/push_swap.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/gstarvin/CLionProjects/push_swap3/push_swap.c -o CMakeFiles/push_swap3.dir/push_swap.c.s

# Object files for target push_swap3
push_swap3_OBJECTS = \
"CMakeFiles/push_swap3.dir/main.c.o" \
"CMakeFiles/push_swap3.dir/push_swap.c.o"

# External object files for target push_swap3
push_swap3_EXTERNAL_OBJECTS =

push_swap3: CMakeFiles/push_swap3.dir/main.c.o
push_swap3: CMakeFiles/push_swap3.dir/push_swap.c.o
push_swap3: CMakeFiles/push_swap3.dir/build.make
push_swap3: CMakeFiles/push_swap3.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/gstarvin/CLionProjects/push_swap3/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable push_swap3"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/push_swap3.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/push_swap3.dir/build: push_swap3

.PHONY : CMakeFiles/push_swap3.dir/build

CMakeFiles/push_swap3.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/push_swap3.dir/cmake_clean.cmake
.PHONY : CMakeFiles/push_swap3.dir/clean

CMakeFiles/push_swap3.dir/depend:
	cd /Users/gstarvin/CLionProjects/push_swap3/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/gstarvin/CLionProjects/push_swap3 /Users/gstarvin/CLionProjects/push_swap3 /Users/gstarvin/CLionProjects/push_swap3/cmake-build-debug /Users/gstarvin/CLionProjects/push_swap3/cmake-build-debug /Users/gstarvin/CLionProjects/push_swap3/cmake-build-debug/CMakeFiles/push_swap3.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/push_swap3.dir/depend
