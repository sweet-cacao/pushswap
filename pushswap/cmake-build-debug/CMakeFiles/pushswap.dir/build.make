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
CMAKE_SOURCE_DIR = /Users/gstarvin/pushswap/pushswap

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/gstarvin/pushswap/pushswap/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/pushswap.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/pushswap.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/pushswap.dir/flags.make

CMakeFiles/pushswap.dir/main.c.o: CMakeFiles/pushswap.dir/flags.make
CMakeFiles/pushswap.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/gstarvin/pushswap/pushswap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/pushswap.dir/main.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/pushswap.dir/main.c.o   -c /Users/gstarvin/pushswap/pushswap/main.c

CMakeFiles/pushswap.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/pushswap.dir/main.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/gstarvin/pushswap/pushswap/main.c > CMakeFiles/pushswap.dir/main.c.i

CMakeFiles/pushswap.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/pushswap.dir/main.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/gstarvin/pushswap/pushswap/main.c -o CMakeFiles/pushswap.dir/main.c.s

CMakeFiles/pushswap.dir/list_functions.c.o: CMakeFiles/pushswap.dir/flags.make
CMakeFiles/pushswap.dir/list_functions.c.o: ../list_functions.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/gstarvin/pushswap/pushswap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/pushswap.dir/list_functions.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/pushswap.dir/list_functions.c.o   -c /Users/gstarvin/pushswap/pushswap/list_functions.c

CMakeFiles/pushswap.dir/list_functions.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/pushswap.dir/list_functions.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/gstarvin/pushswap/pushswap/list_functions.c > CMakeFiles/pushswap.dir/list_functions.c.i

CMakeFiles/pushswap.dir/list_functions.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/pushswap.dir/list_functions.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/gstarvin/pushswap/pushswap/list_functions.c -o CMakeFiles/pushswap.dir/list_functions.c.s

CMakeFiles/pushswap.dir/Users/gstarvin/gnl/get_next_line.c.o: CMakeFiles/pushswap.dir/flags.make
CMakeFiles/pushswap.dir/Users/gstarvin/gnl/get_next_line.c.o: /Users/gstarvin/gnl/get_next_line.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/gstarvin/pushswap/pushswap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/pushswap.dir/Users/gstarvin/gnl/get_next_line.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/pushswap.dir/Users/gstarvin/gnl/get_next_line.c.o   -c /Users/gstarvin/gnl/get_next_line.c

CMakeFiles/pushswap.dir/Users/gstarvin/gnl/get_next_line.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/pushswap.dir/Users/gstarvin/gnl/get_next_line.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/gstarvin/gnl/get_next_line.c > CMakeFiles/pushswap.dir/Users/gstarvin/gnl/get_next_line.c.i

CMakeFiles/pushswap.dir/Users/gstarvin/gnl/get_next_line.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/pushswap.dir/Users/gstarvin/gnl/get_next_line.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/gstarvin/gnl/get_next_line.c -o CMakeFiles/pushswap.dir/Users/gstarvin/gnl/get_next_line.c.s

CMakeFiles/pushswap.dir/Users/gstarvin/gnl/libft/ft_atoi.c.o: CMakeFiles/pushswap.dir/flags.make
CMakeFiles/pushswap.dir/Users/gstarvin/gnl/libft/ft_atoi.c.o: /Users/gstarvin/gnl/libft/ft_atoi.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/gstarvin/pushswap/pushswap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/pushswap.dir/Users/gstarvin/gnl/libft/ft_atoi.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/pushswap.dir/Users/gstarvin/gnl/libft/ft_atoi.c.o   -c /Users/gstarvin/gnl/libft/ft_atoi.c

CMakeFiles/pushswap.dir/Users/gstarvin/gnl/libft/ft_atoi.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/pushswap.dir/Users/gstarvin/gnl/libft/ft_atoi.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/gstarvin/gnl/libft/ft_atoi.c > CMakeFiles/pushswap.dir/Users/gstarvin/gnl/libft/ft_atoi.c.i

CMakeFiles/pushswap.dir/Users/gstarvin/gnl/libft/ft_atoi.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/pushswap.dir/Users/gstarvin/gnl/libft/ft_atoi.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/gstarvin/gnl/libft/ft_atoi.c -o CMakeFiles/pushswap.dir/Users/gstarvin/gnl/libft/ft_atoi.c.s

CMakeFiles/pushswap.dir/Users/gstarvin/gnl/libft/ft_strchr.c.o: CMakeFiles/pushswap.dir/flags.make
CMakeFiles/pushswap.dir/Users/gstarvin/gnl/libft/ft_strchr.c.o: /Users/gstarvin/gnl/libft/ft_strchr.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/gstarvin/pushswap/pushswap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/pushswap.dir/Users/gstarvin/gnl/libft/ft_strchr.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/pushswap.dir/Users/gstarvin/gnl/libft/ft_strchr.c.o   -c /Users/gstarvin/gnl/libft/ft_strchr.c

CMakeFiles/pushswap.dir/Users/gstarvin/gnl/libft/ft_strchr.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/pushswap.dir/Users/gstarvin/gnl/libft/ft_strchr.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/gstarvin/gnl/libft/ft_strchr.c > CMakeFiles/pushswap.dir/Users/gstarvin/gnl/libft/ft_strchr.c.i

CMakeFiles/pushswap.dir/Users/gstarvin/gnl/libft/ft_strchr.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/pushswap.dir/Users/gstarvin/gnl/libft/ft_strchr.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/gstarvin/gnl/libft/ft_strchr.c -o CMakeFiles/pushswap.dir/Users/gstarvin/gnl/libft/ft_strchr.c.s

CMakeFiles/pushswap.dir/Users/gstarvin/gnl/libft/ft_strdup.c.o: CMakeFiles/pushswap.dir/flags.make
CMakeFiles/pushswap.dir/Users/gstarvin/gnl/libft/ft_strdup.c.o: /Users/gstarvin/gnl/libft/ft_strdup.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/gstarvin/pushswap/pushswap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building C object CMakeFiles/pushswap.dir/Users/gstarvin/gnl/libft/ft_strdup.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/pushswap.dir/Users/gstarvin/gnl/libft/ft_strdup.c.o   -c /Users/gstarvin/gnl/libft/ft_strdup.c

CMakeFiles/pushswap.dir/Users/gstarvin/gnl/libft/ft_strdup.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/pushswap.dir/Users/gstarvin/gnl/libft/ft_strdup.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/gstarvin/gnl/libft/ft_strdup.c > CMakeFiles/pushswap.dir/Users/gstarvin/gnl/libft/ft_strdup.c.i

CMakeFiles/pushswap.dir/Users/gstarvin/gnl/libft/ft_strdup.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/pushswap.dir/Users/gstarvin/gnl/libft/ft_strdup.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/gstarvin/gnl/libft/ft_strdup.c -o CMakeFiles/pushswap.dir/Users/gstarvin/gnl/libft/ft_strdup.c.s

CMakeFiles/pushswap.dir/Users/gstarvin/gnl/libft/ft_strjoin.c.o: CMakeFiles/pushswap.dir/flags.make
CMakeFiles/pushswap.dir/Users/gstarvin/gnl/libft/ft_strjoin.c.o: /Users/gstarvin/gnl/libft/ft_strjoin.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/gstarvin/pushswap/pushswap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building C object CMakeFiles/pushswap.dir/Users/gstarvin/gnl/libft/ft_strjoin.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/pushswap.dir/Users/gstarvin/gnl/libft/ft_strjoin.c.o   -c /Users/gstarvin/gnl/libft/ft_strjoin.c

CMakeFiles/pushswap.dir/Users/gstarvin/gnl/libft/ft_strjoin.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/pushswap.dir/Users/gstarvin/gnl/libft/ft_strjoin.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/gstarvin/gnl/libft/ft_strjoin.c > CMakeFiles/pushswap.dir/Users/gstarvin/gnl/libft/ft_strjoin.c.i

CMakeFiles/pushswap.dir/Users/gstarvin/gnl/libft/ft_strjoin.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/pushswap.dir/Users/gstarvin/gnl/libft/ft_strjoin.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/gstarvin/gnl/libft/ft_strjoin.c -o CMakeFiles/pushswap.dir/Users/gstarvin/gnl/libft/ft_strjoin.c.s

CMakeFiles/pushswap.dir/Users/gstarvin/gnl/libft/ft_strnew.c.o: CMakeFiles/pushswap.dir/flags.make
CMakeFiles/pushswap.dir/Users/gstarvin/gnl/libft/ft_strnew.c.o: /Users/gstarvin/gnl/libft/ft_strnew.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/gstarvin/pushswap/pushswap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building C object CMakeFiles/pushswap.dir/Users/gstarvin/gnl/libft/ft_strnew.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/pushswap.dir/Users/gstarvin/gnl/libft/ft_strnew.c.o   -c /Users/gstarvin/gnl/libft/ft_strnew.c

CMakeFiles/pushswap.dir/Users/gstarvin/gnl/libft/ft_strnew.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/pushswap.dir/Users/gstarvin/gnl/libft/ft_strnew.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/gstarvin/gnl/libft/ft_strnew.c > CMakeFiles/pushswap.dir/Users/gstarvin/gnl/libft/ft_strnew.c.i

CMakeFiles/pushswap.dir/Users/gstarvin/gnl/libft/ft_strnew.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/pushswap.dir/Users/gstarvin/gnl/libft/ft_strnew.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/gstarvin/gnl/libft/ft_strnew.c -o CMakeFiles/pushswap.dir/Users/gstarvin/gnl/libft/ft_strnew.c.s

CMakeFiles/pushswap.dir/Users/gstarvin/gnl/libft/ft_strcmp.c.o: CMakeFiles/pushswap.dir/flags.make
CMakeFiles/pushswap.dir/Users/gstarvin/gnl/libft/ft_strcmp.c.o: /Users/gstarvin/gnl/libft/ft_strcmp.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/gstarvin/pushswap/pushswap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building C object CMakeFiles/pushswap.dir/Users/gstarvin/gnl/libft/ft_strcmp.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/pushswap.dir/Users/gstarvin/gnl/libft/ft_strcmp.c.o   -c /Users/gstarvin/gnl/libft/ft_strcmp.c

CMakeFiles/pushswap.dir/Users/gstarvin/gnl/libft/ft_strcmp.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/pushswap.dir/Users/gstarvin/gnl/libft/ft_strcmp.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/gstarvin/gnl/libft/ft_strcmp.c > CMakeFiles/pushswap.dir/Users/gstarvin/gnl/libft/ft_strcmp.c.i

CMakeFiles/pushswap.dir/Users/gstarvin/gnl/libft/ft_strcmp.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/pushswap.dir/Users/gstarvin/gnl/libft/ft_strcmp.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/gstarvin/gnl/libft/ft_strcmp.c -o CMakeFiles/pushswap.dir/Users/gstarvin/gnl/libft/ft_strcmp.c.s

CMakeFiles/pushswap.dir/Users/gstarvin/gnl/libft/ft_strdel.c.o: CMakeFiles/pushswap.dir/flags.make
CMakeFiles/pushswap.dir/Users/gstarvin/gnl/libft/ft_strdel.c.o: /Users/gstarvin/gnl/libft/ft_strdel.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/gstarvin/pushswap/pushswap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building C object CMakeFiles/pushswap.dir/Users/gstarvin/gnl/libft/ft_strdel.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/pushswap.dir/Users/gstarvin/gnl/libft/ft_strdel.c.o   -c /Users/gstarvin/gnl/libft/ft_strdel.c

CMakeFiles/pushswap.dir/Users/gstarvin/gnl/libft/ft_strdel.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/pushswap.dir/Users/gstarvin/gnl/libft/ft_strdel.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/gstarvin/gnl/libft/ft_strdel.c > CMakeFiles/pushswap.dir/Users/gstarvin/gnl/libft/ft_strdel.c.i

CMakeFiles/pushswap.dir/Users/gstarvin/gnl/libft/ft_strdel.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/pushswap.dir/Users/gstarvin/gnl/libft/ft_strdel.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/gstarvin/gnl/libft/ft_strdel.c -o CMakeFiles/pushswap.dir/Users/gstarvin/gnl/libft/ft_strdel.c.s

CMakeFiles/pushswap.dir/Users/gstarvin/gnl/libft/ft_strlen.c.o: CMakeFiles/pushswap.dir/flags.make
CMakeFiles/pushswap.dir/Users/gstarvin/gnl/libft/ft_strlen.c.o: /Users/gstarvin/gnl/libft/ft_strlen.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/gstarvin/pushswap/pushswap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building C object CMakeFiles/pushswap.dir/Users/gstarvin/gnl/libft/ft_strlen.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/pushswap.dir/Users/gstarvin/gnl/libft/ft_strlen.c.o   -c /Users/gstarvin/gnl/libft/ft_strlen.c

CMakeFiles/pushswap.dir/Users/gstarvin/gnl/libft/ft_strlen.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/pushswap.dir/Users/gstarvin/gnl/libft/ft_strlen.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/gstarvin/gnl/libft/ft_strlen.c > CMakeFiles/pushswap.dir/Users/gstarvin/gnl/libft/ft_strlen.c.i

CMakeFiles/pushswap.dir/Users/gstarvin/gnl/libft/ft_strlen.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/pushswap.dir/Users/gstarvin/gnl/libft/ft_strlen.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/gstarvin/gnl/libft/ft_strlen.c -o CMakeFiles/pushswap.dir/Users/gstarvin/gnl/libft/ft_strlen.c.s

CMakeFiles/pushswap.dir/Users/gstarvin/gnl/libft/ft_strsub.c.o: CMakeFiles/pushswap.dir/flags.make
CMakeFiles/pushswap.dir/Users/gstarvin/gnl/libft/ft_strsub.c.o: /Users/gstarvin/gnl/libft/ft_strsub.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/gstarvin/pushswap/pushswap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building C object CMakeFiles/pushswap.dir/Users/gstarvin/gnl/libft/ft_strsub.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/pushswap.dir/Users/gstarvin/gnl/libft/ft_strsub.c.o   -c /Users/gstarvin/gnl/libft/ft_strsub.c

CMakeFiles/pushswap.dir/Users/gstarvin/gnl/libft/ft_strsub.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/pushswap.dir/Users/gstarvin/gnl/libft/ft_strsub.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/gstarvin/gnl/libft/ft_strsub.c > CMakeFiles/pushswap.dir/Users/gstarvin/gnl/libft/ft_strsub.c.i

CMakeFiles/pushswap.dir/Users/gstarvin/gnl/libft/ft_strsub.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/pushswap.dir/Users/gstarvin/gnl/libft/ft_strsub.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/gstarvin/gnl/libft/ft_strsub.c -o CMakeFiles/pushswap.dir/Users/gstarvin/gnl/libft/ft_strsub.c.s

CMakeFiles/pushswap.dir/check_functions.c.o: CMakeFiles/pushswap.dir/flags.make
CMakeFiles/pushswap.dir/check_functions.c.o: ../check_functions.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/gstarvin/pushswap/pushswap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building C object CMakeFiles/pushswap.dir/check_functions.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/pushswap.dir/check_functions.c.o   -c /Users/gstarvin/pushswap/pushswap/check_functions.c

CMakeFiles/pushswap.dir/check_functions.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/pushswap.dir/check_functions.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/gstarvin/pushswap/pushswap/check_functions.c > CMakeFiles/pushswap.dir/check_functions.c.i

CMakeFiles/pushswap.dir/check_functions.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/pushswap.dir/check_functions.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/gstarvin/pushswap/pushswap/check_functions.c -o CMakeFiles/pushswap.dir/check_functions.c.s

CMakeFiles/pushswap.dir/Users/gstarvin/gnl/libft/ft_isdigit.c.o: CMakeFiles/pushswap.dir/flags.make
CMakeFiles/pushswap.dir/Users/gstarvin/gnl/libft/ft_isdigit.c.o: /Users/gstarvin/gnl/libft/ft_isdigit.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/gstarvin/pushswap/pushswap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Building C object CMakeFiles/pushswap.dir/Users/gstarvin/gnl/libft/ft_isdigit.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/pushswap.dir/Users/gstarvin/gnl/libft/ft_isdigit.c.o   -c /Users/gstarvin/gnl/libft/ft_isdigit.c

CMakeFiles/pushswap.dir/Users/gstarvin/gnl/libft/ft_isdigit.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/pushswap.dir/Users/gstarvin/gnl/libft/ft_isdigit.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/gstarvin/gnl/libft/ft_isdigit.c > CMakeFiles/pushswap.dir/Users/gstarvin/gnl/libft/ft_isdigit.c.i

CMakeFiles/pushswap.dir/Users/gstarvin/gnl/libft/ft_isdigit.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/pushswap.dir/Users/gstarvin/gnl/libft/ft_isdigit.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/gstarvin/gnl/libft/ft_isdigit.c -o CMakeFiles/pushswap.dir/Users/gstarvin/gnl/libft/ft_isdigit.c.s

CMakeFiles/pushswap.dir/do_action.c.o: CMakeFiles/pushswap.dir/flags.make
CMakeFiles/pushswap.dir/do_action.c.o: ../do_action.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/gstarvin/pushswap/pushswap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_15) "Building C object CMakeFiles/pushswap.dir/do_action.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/pushswap.dir/do_action.c.o   -c /Users/gstarvin/pushswap/pushswap/do_action.c

CMakeFiles/pushswap.dir/do_action.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/pushswap.dir/do_action.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/gstarvin/pushswap/pushswap/do_action.c > CMakeFiles/pushswap.dir/do_action.c.i

CMakeFiles/pushswap.dir/do_action.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/pushswap.dir/do_action.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/gstarvin/pushswap/pushswap/do_action.c -o CMakeFiles/pushswap.dir/do_action.c.s

CMakeFiles/pushswap.dir/push_swap.c.o: CMakeFiles/pushswap.dir/flags.make
CMakeFiles/pushswap.dir/push_swap.c.o: ../push_swap.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/gstarvin/pushswap/pushswap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_16) "Building C object CMakeFiles/pushswap.dir/push_swap.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/pushswap.dir/push_swap.c.o   -c /Users/gstarvin/pushswap/pushswap/push_swap.c

CMakeFiles/pushswap.dir/push_swap.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/pushswap.dir/push_swap.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/gstarvin/pushswap/pushswap/push_swap.c > CMakeFiles/pushswap.dir/push_swap.c.i

CMakeFiles/pushswap.dir/push_swap.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/pushswap.dir/push_swap.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/gstarvin/pushswap/pushswap/push_swap.c -o CMakeFiles/pushswap.dir/push_swap.c.s

CMakeFiles/pushswap.dir/push_swap_min.c.o: CMakeFiles/pushswap.dir/flags.make
CMakeFiles/pushswap.dir/push_swap_min.c.o: ../push_swap_min.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/gstarvin/pushswap/pushswap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_17) "Building C object CMakeFiles/pushswap.dir/push_swap_min.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/pushswap.dir/push_swap_min.c.o   -c /Users/gstarvin/pushswap/pushswap/push_swap_min.c

CMakeFiles/pushswap.dir/push_swap_min.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/pushswap.dir/push_swap_min.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/gstarvin/pushswap/pushswap/push_swap_min.c > CMakeFiles/pushswap.dir/push_swap_min.c.i

CMakeFiles/pushswap.dir/push_swap_min.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/pushswap.dir/push_swap_min.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/gstarvin/pushswap/pushswap/push_swap_min.c -o CMakeFiles/pushswap.dir/push_swap_min.c.s

CMakeFiles/pushswap.dir/common_actions.c.o: CMakeFiles/pushswap.dir/flags.make
CMakeFiles/pushswap.dir/common_actions.c.o: ../common_actions.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/gstarvin/pushswap/pushswap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_18) "Building C object CMakeFiles/pushswap.dir/common_actions.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/pushswap.dir/common_actions.c.o   -c /Users/gstarvin/pushswap/pushswap/common_actions.c

CMakeFiles/pushswap.dir/common_actions.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/pushswap.dir/common_actions.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/gstarvin/pushswap/pushswap/common_actions.c > CMakeFiles/pushswap.dir/common_actions.c.i

CMakeFiles/pushswap.dir/common_actions.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/pushswap.dir/common_actions.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/gstarvin/pushswap/pushswap/common_actions.c -o CMakeFiles/pushswap.dir/common_actions.c.s

CMakeFiles/pushswap.dir/push_min_op.c.o: CMakeFiles/pushswap.dir/flags.make
CMakeFiles/pushswap.dir/push_min_op.c.o: ../push_min_op.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/gstarvin/pushswap/pushswap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_19) "Building C object CMakeFiles/pushswap.dir/push_min_op.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/pushswap.dir/push_min_op.c.o   -c /Users/gstarvin/pushswap/pushswap/push_min_op.c

CMakeFiles/pushswap.dir/push_min_op.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/pushswap.dir/push_min_op.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/gstarvin/pushswap/pushswap/push_min_op.c > CMakeFiles/pushswap.dir/push_min_op.c.i

CMakeFiles/pushswap.dir/push_min_op.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/pushswap.dir/push_min_op.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/gstarvin/pushswap/pushswap/push_min_op.c -o CMakeFiles/pushswap.dir/push_min_op.c.s

CMakeFiles/pushswap.dir/clear_pushswap.c.o: CMakeFiles/pushswap.dir/flags.make
CMakeFiles/pushswap.dir/clear_pushswap.c.o: ../clear_pushswap.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/gstarvin/pushswap/pushswap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_20) "Building C object CMakeFiles/pushswap.dir/clear_pushswap.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/pushswap.dir/clear_pushswap.c.o   -c /Users/gstarvin/pushswap/pushswap/clear_pushswap.c

CMakeFiles/pushswap.dir/clear_pushswap.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/pushswap.dir/clear_pushswap.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/gstarvin/pushswap/pushswap/clear_pushswap.c > CMakeFiles/pushswap.dir/clear_pushswap.c.i

CMakeFiles/pushswap.dir/clear_pushswap.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/pushswap.dir/clear_pushswap.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/gstarvin/pushswap/pushswap/clear_pushswap.c -o CMakeFiles/pushswap.dir/clear_pushswap.c.s

# Object files for target pushswap
pushswap_OBJECTS = \
"CMakeFiles/pushswap.dir/main.c.o" \
"CMakeFiles/pushswap.dir/list_functions.c.o" \
"CMakeFiles/pushswap.dir/Users/gstarvin/gnl/get_next_line.c.o" \
"CMakeFiles/pushswap.dir/Users/gstarvin/gnl/libft/ft_atoi.c.o" \
"CMakeFiles/pushswap.dir/Users/gstarvin/gnl/libft/ft_strchr.c.o" \
"CMakeFiles/pushswap.dir/Users/gstarvin/gnl/libft/ft_strdup.c.o" \
"CMakeFiles/pushswap.dir/Users/gstarvin/gnl/libft/ft_strjoin.c.o" \
"CMakeFiles/pushswap.dir/Users/gstarvin/gnl/libft/ft_strnew.c.o" \
"CMakeFiles/pushswap.dir/Users/gstarvin/gnl/libft/ft_strcmp.c.o" \
"CMakeFiles/pushswap.dir/Users/gstarvin/gnl/libft/ft_strdel.c.o" \
"CMakeFiles/pushswap.dir/Users/gstarvin/gnl/libft/ft_strlen.c.o" \
"CMakeFiles/pushswap.dir/Users/gstarvin/gnl/libft/ft_strsub.c.o" \
"CMakeFiles/pushswap.dir/check_functions.c.o" \
"CMakeFiles/pushswap.dir/Users/gstarvin/gnl/libft/ft_isdigit.c.o" \
"CMakeFiles/pushswap.dir/do_action.c.o" \
"CMakeFiles/pushswap.dir/push_swap.c.o" \
"CMakeFiles/pushswap.dir/push_swap_min.c.o" \
"CMakeFiles/pushswap.dir/common_actions.c.o" \
"CMakeFiles/pushswap.dir/push_min_op.c.o" \
"CMakeFiles/pushswap.dir/clear_pushswap.c.o"

# External object files for target pushswap
pushswap_EXTERNAL_OBJECTS =

pushswap: CMakeFiles/pushswap.dir/main.c.o
pushswap: CMakeFiles/pushswap.dir/list_functions.c.o
pushswap: CMakeFiles/pushswap.dir/Users/gstarvin/gnl/get_next_line.c.o
pushswap: CMakeFiles/pushswap.dir/Users/gstarvin/gnl/libft/ft_atoi.c.o
pushswap: CMakeFiles/pushswap.dir/Users/gstarvin/gnl/libft/ft_strchr.c.o
pushswap: CMakeFiles/pushswap.dir/Users/gstarvin/gnl/libft/ft_strdup.c.o
pushswap: CMakeFiles/pushswap.dir/Users/gstarvin/gnl/libft/ft_strjoin.c.o
pushswap: CMakeFiles/pushswap.dir/Users/gstarvin/gnl/libft/ft_strnew.c.o
pushswap: CMakeFiles/pushswap.dir/Users/gstarvin/gnl/libft/ft_strcmp.c.o
pushswap: CMakeFiles/pushswap.dir/Users/gstarvin/gnl/libft/ft_strdel.c.o
pushswap: CMakeFiles/pushswap.dir/Users/gstarvin/gnl/libft/ft_strlen.c.o
pushswap: CMakeFiles/pushswap.dir/Users/gstarvin/gnl/libft/ft_strsub.c.o
pushswap: CMakeFiles/pushswap.dir/check_functions.c.o
pushswap: CMakeFiles/pushswap.dir/Users/gstarvin/gnl/libft/ft_isdigit.c.o
pushswap: CMakeFiles/pushswap.dir/do_action.c.o
pushswap: CMakeFiles/pushswap.dir/push_swap.c.o
pushswap: CMakeFiles/pushswap.dir/push_swap_min.c.o
pushswap: CMakeFiles/pushswap.dir/common_actions.c.o
pushswap: CMakeFiles/pushswap.dir/push_min_op.c.o
pushswap: CMakeFiles/pushswap.dir/clear_pushswap.c.o
pushswap: CMakeFiles/pushswap.dir/build.make
pushswap: CMakeFiles/pushswap.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/gstarvin/pushswap/pushswap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_21) "Linking C executable pushswap"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/pushswap.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/pushswap.dir/build: pushswap

.PHONY : CMakeFiles/pushswap.dir/build

CMakeFiles/pushswap.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/pushswap.dir/cmake_clean.cmake
.PHONY : CMakeFiles/pushswap.dir/clean

CMakeFiles/pushswap.dir/depend:
	cd /Users/gstarvin/pushswap/pushswap/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/gstarvin/pushswap/pushswap /Users/gstarvin/pushswap/pushswap /Users/gstarvin/pushswap/pushswap/cmake-build-debug /Users/gstarvin/pushswap/pushswap/cmake-build-debug /Users/gstarvin/pushswap/pushswap/cmake-build-debug/CMakeFiles/pushswap.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/pushswap.dir/depend

