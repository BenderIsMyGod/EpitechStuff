# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.6

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
CMAKE_COMMAND = /home/bender/Downloads/clion-2016.3.2/bin/cmake/bin/cmake

# The command to remove a file.
RM = /home/bender/Downloads/clion-2016.3.2/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/bender/GrowUp/snippetsandmore/minishell1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/bender/GrowUp/snippetsandmore/minishell1/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/minishell1.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/minishell1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/minishell1.dir/flags.make

CMakeFiles/minishell1.dir/srcs/built_in/built_in.c.o: CMakeFiles/minishell1.dir/flags.make
CMakeFiles/minishell1.dir/srcs/built_in/built_in.c.o: ../srcs/built_in/built_in.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/bender/GrowUp/snippetsandmore/minishell1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/minishell1.dir/srcs/built_in/built_in.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/minishell1.dir/srcs/built_in/built_in.c.o   -c /home/bender/GrowUp/snippetsandmore/minishell1/srcs/built_in/built_in.c

CMakeFiles/minishell1.dir/srcs/built_in/built_in.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/minishell1.dir/srcs/built_in/built_in.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/bender/GrowUp/snippetsandmore/minishell1/srcs/built_in/built_in.c > CMakeFiles/minishell1.dir/srcs/built_in/built_in.c.i

CMakeFiles/minishell1.dir/srcs/built_in/built_in.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/minishell1.dir/srcs/built_in/built_in.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/bender/GrowUp/snippetsandmore/minishell1/srcs/built_in/built_in.c -o CMakeFiles/minishell1.dir/srcs/built_in/built_in.c.s

CMakeFiles/minishell1.dir/srcs/built_in/built_in.c.o.requires:

.PHONY : CMakeFiles/minishell1.dir/srcs/built_in/built_in.c.o.requires

CMakeFiles/minishell1.dir/srcs/built_in/built_in.c.o.provides: CMakeFiles/minishell1.dir/srcs/built_in/built_in.c.o.requires
	$(MAKE) -f CMakeFiles/minishell1.dir/build.make CMakeFiles/minishell1.dir/srcs/built_in/built_in.c.o.provides.build
.PHONY : CMakeFiles/minishell1.dir/srcs/built_in/built_in.c.o.provides

CMakeFiles/minishell1.dir/srcs/built_in/built_in.c.o.provides.build: CMakeFiles/minishell1.dir/srcs/built_in/built_in.c.o


CMakeFiles/minishell1.dir/srcs/built_in/built_inmatch.c.o: CMakeFiles/minishell1.dir/flags.make
CMakeFiles/minishell1.dir/srcs/built_in/built_inmatch.c.o: ../srcs/built_in/built_inmatch.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/bender/GrowUp/snippetsandmore/minishell1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/minishell1.dir/srcs/built_in/built_inmatch.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/minishell1.dir/srcs/built_in/built_inmatch.c.o   -c /home/bender/GrowUp/snippetsandmore/minishell1/srcs/built_in/built_inmatch.c

CMakeFiles/minishell1.dir/srcs/built_in/built_inmatch.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/minishell1.dir/srcs/built_in/built_inmatch.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/bender/GrowUp/snippetsandmore/minishell1/srcs/built_in/built_inmatch.c > CMakeFiles/minishell1.dir/srcs/built_in/built_inmatch.c.i

CMakeFiles/minishell1.dir/srcs/built_in/built_inmatch.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/minishell1.dir/srcs/built_in/built_inmatch.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/bender/GrowUp/snippetsandmore/minishell1/srcs/built_in/built_inmatch.c -o CMakeFiles/minishell1.dir/srcs/built_in/built_inmatch.c.s

CMakeFiles/minishell1.dir/srcs/built_in/built_inmatch.c.o.requires:

.PHONY : CMakeFiles/minishell1.dir/srcs/built_in/built_inmatch.c.o.requires

CMakeFiles/minishell1.dir/srcs/built_in/built_inmatch.c.o.provides: CMakeFiles/minishell1.dir/srcs/built_in/built_inmatch.c.o.requires
	$(MAKE) -f CMakeFiles/minishell1.dir/build.make CMakeFiles/minishell1.dir/srcs/built_in/built_inmatch.c.o.provides.build
.PHONY : CMakeFiles/minishell1.dir/srcs/built_in/built_inmatch.c.o.provides

CMakeFiles/minishell1.dir/srcs/built_in/built_inmatch.c.o.provides.build: CMakeFiles/minishell1.dir/srcs/built_in/built_inmatch.c.o


CMakeFiles/minishell1.dir/srcs/gnlrpz/get_next_line.c.o: CMakeFiles/minishell1.dir/flags.make
CMakeFiles/minishell1.dir/srcs/gnlrpz/get_next_line.c.o: ../srcs/gnlrpz/get_next_line.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/bender/GrowUp/snippetsandmore/minishell1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/minishell1.dir/srcs/gnlrpz/get_next_line.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/minishell1.dir/srcs/gnlrpz/get_next_line.c.o   -c /home/bender/GrowUp/snippetsandmore/minishell1/srcs/gnlrpz/get_next_line.c

CMakeFiles/minishell1.dir/srcs/gnlrpz/get_next_line.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/minishell1.dir/srcs/gnlrpz/get_next_line.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/bender/GrowUp/snippetsandmore/minishell1/srcs/gnlrpz/get_next_line.c > CMakeFiles/minishell1.dir/srcs/gnlrpz/get_next_line.c.i

CMakeFiles/minishell1.dir/srcs/gnlrpz/get_next_line.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/minishell1.dir/srcs/gnlrpz/get_next_line.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/bender/GrowUp/snippetsandmore/minishell1/srcs/gnlrpz/get_next_line.c -o CMakeFiles/minishell1.dir/srcs/gnlrpz/get_next_line.c.s

CMakeFiles/minishell1.dir/srcs/gnlrpz/get_next_line.c.o.requires:

.PHONY : CMakeFiles/minishell1.dir/srcs/gnlrpz/get_next_line.c.o.requires

CMakeFiles/minishell1.dir/srcs/gnlrpz/get_next_line.c.o.provides: CMakeFiles/minishell1.dir/srcs/gnlrpz/get_next_line.c.o.requires
	$(MAKE) -f CMakeFiles/minishell1.dir/build.make CMakeFiles/minishell1.dir/srcs/gnlrpz/get_next_line.c.o.provides.build
.PHONY : CMakeFiles/minishell1.dir/srcs/gnlrpz/get_next_line.c.o.provides

CMakeFiles/minishell1.dir/srcs/gnlrpz/get_next_line.c.o.provides.build: CMakeFiles/minishell1.dir/srcs/gnlrpz/get_next_line.c.o


CMakeFiles/minishell1.dir/srcs/libfunk/base.c.o: CMakeFiles/minishell1.dir/flags.make
CMakeFiles/minishell1.dir/srcs/libfunk/base.c.o: ../srcs/libfunk/base.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/bender/GrowUp/snippetsandmore/minishell1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/minishell1.dir/srcs/libfunk/base.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/minishell1.dir/srcs/libfunk/base.c.o   -c /home/bender/GrowUp/snippetsandmore/minishell1/srcs/libfunk/base.c

CMakeFiles/minishell1.dir/srcs/libfunk/base.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/minishell1.dir/srcs/libfunk/base.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/bender/GrowUp/snippetsandmore/minishell1/srcs/libfunk/base.c > CMakeFiles/minishell1.dir/srcs/libfunk/base.c.i

CMakeFiles/minishell1.dir/srcs/libfunk/base.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/minishell1.dir/srcs/libfunk/base.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/bender/GrowUp/snippetsandmore/minishell1/srcs/libfunk/base.c -o CMakeFiles/minishell1.dir/srcs/libfunk/base.c.s

CMakeFiles/minishell1.dir/srcs/libfunk/base.c.o.requires:

.PHONY : CMakeFiles/minishell1.dir/srcs/libfunk/base.c.o.requires

CMakeFiles/minishell1.dir/srcs/libfunk/base.c.o.provides: CMakeFiles/minishell1.dir/srcs/libfunk/base.c.o.requires
	$(MAKE) -f CMakeFiles/minishell1.dir/build.make CMakeFiles/minishell1.dir/srcs/libfunk/base.c.o.provides.build
.PHONY : CMakeFiles/minishell1.dir/srcs/libfunk/base.c.o.provides

CMakeFiles/minishell1.dir/srcs/libfunk/base.c.o.provides.build: CMakeFiles/minishell1.dir/srcs/libfunk/base.c.o


CMakeFiles/minishell1.dir/srcs/libfunk/check_dir.c.o: CMakeFiles/minishell1.dir/flags.make
CMakeFiles/minishell1.dir/srcs/libfunk/check_dir.c.o: ../srcs/libfunk/check_dir.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/bender/GrowUp/snippetsandmore/minishell1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/minishell1.dir/srcs/libfunk/check_dir.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/minishell1.dir/srcs/libfunk/check_dir.c.o   -c /home/bender/GrowUp/snippetsandmore/minishell1/srcs/libfunk/check_dir.c

CMakeFiles/minishell1.dir/srcs/libfunk/check_dir.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/minishell1.dir/srcs/libfunk/check_dir.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/bender/GrowUp/snippetsandmore/minishell1/srcs/libfunk/check_dir.c > CMakeFiles/minishell1.dir/srcs/libfunk/check_dir.c.i

CMakeFiles/minishell1.dir/srcs/libfunk/check_dir.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/minishell1.dir/srcs/libfunk/check_dir.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/bender/GrowUp/snippetsandmore/minishell1/srcs/libfunk/check_dir.c -o CMakeFiles/minishell1.dir/srcs/libfunk/check_dir.c.s

CMakeFiles/minishell1.dir/srcs/libfunk/check_dir.c.o.requires:

.PHONY : CMakeFiles/minishell1.dir/srcs/libfunk/check_dir.c.o.requires

CMakeFiles/minishell1.dir/srcs/libfunk/check_dir.c.o.provides: CMakeFiles/minishell1.dir/srcs/libfunk/check_dir.c.o.requires
	$(MAKE) -f CMakeFiles/minishell1.dir/build.make CMakeFiles/minishell1.dir/srcs/libfunk/check_dir.c.o.provides.build
.PHONY : CMakeFiles/minishell1.dir/srcs/libfunk/check_dir.c.o.provides

CMakeFiles/minishell1.dir/srcs/libfunk/check_dir.c.o.provides.build: CMakeFiles/minishell1.dir/srcs/libfunk/check_dir.c.o


CMakeFiles/minishell1.dir/srcs/libfunk/error.c.o: CMakeFiles/minishell1.dir/flags.make
CMakeFiles/minishell1.dir/srcs/libfunk/error.c.o: ../srcs/libfunk/error.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/bender/GrowUp/snippetsandmore/minishell1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building C object CMakeFiles/minishell1.dir/srcs/libfunk/error.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/minishell1.dir/srcs/libfunk/error.c.o   -c /home/bender/GrowUp/snippetsandmore/minishell1/srcs/libfunk/error.c

CMakeFiles/minishell1.dir/srcs/libfunk/error.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/minishell1.dir/srcs/libfunk/error.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/bender/GrowUp/snippetsandmore/minishell1/srcs/libfunk/error.c > CMakeFiles/minishell1.dir/srcs/libfunk/error.c.i

CMakeFiles/minishell1.dir/srcs/libfunk/error.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/minishell1.dir/srcs/libfunk/error.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/bender/GrowUp/snippetsandmore/minishell1/srcs/libfunk/error.c -o CMakeFiles/minishell1.dir/srcs/libfunk/error.c.s

CMakeFiles/minishell1.dir/srcs/libfunk/error.c.o.requires:

.PHONY : CMakeFiles/minishell1.dir/srcs/libfunk/error.c.o.requires

CMakeFiles/minishell1.dir/srcs/libfunk/error.c.o.provides: CMakeFiles/minishell1.dir/srcs/libfunk/error.c.o.requires
	$(MAKE) -f CMakeFiles/minishell1.dir/build.make CMakeFiles/minishell1.dir/srcs/libfunk/error.c.o.provides.build
.PHONY : CMakeFiles/minishell1.dir/srcs/libfunk/error.c.o.provides

CMakeFiles/minishell1.dir/srcs/libfunk/error.c.o.provides.build: CMakeFiles/minishell1.dir/srcs/libfunk/error.c.o


CMakeFiles/minishell1.dir/srcs/libfunk/string.c.o: CMakeFiles/minishell1.dir/flags.make
CMakeFiles/minishell1.dir/srcs/libfunk/string.c.o: ../srcs/libfunk/string.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/bender/GrowUp/snippetsandmore/minishell1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building C object CMakeFiles/minishell1.dir/srcs/libfunk/string.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/minishell1.dir/srcs/libfunk/string.c.o   -c /home/bender/GrowUp/snippetsandmore/minishell1/srcs/libfunk/string.c

CMakeFiles/minishell1.dir/srcs/libfunk/string.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/minishell1.dir/srcs/libfunk/string.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/bender/GrowUp/snippetsandmore/minishell1/srcs/libfunk/string.c > CMakeFiles/minishell1.dir/srcs/libfunk/string.c.i

CMakeFiles/minishell1.dir/srcs/libfunk/string.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/minishell1.dir/srcs/libfunk/string.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/bender/GrowUp/snippetsandmore/minishell1/srcs/libfunk/string.c -o CMakeFiles/minishell1.dir/srcs/libfunk/string.c.s

CMakeFiles/minishell1.dir/srcs/libfunk/string.c.o.requires:

.PHONY : CMakeFiles/minishell1.dir/srcs/libfunk/string.c.o.requires

CMakeFiles/minishell1.dir/srcs/libfunk/string.c.o.provides: CMakeFiles/minishell1.dir/srcs/libfunk/string.c.o.requires
	$(MAKE) -f CMakeFiles/minishell1.dir/build.make CMakeFiles/minishell1.dir/srcs/libfunk/string.c.o.provides.build
.PHONY : CMakeFiles/minishell1.dir/srcs/libfunk/string.c.o.provides

CMakeFiles/minishell1.dir/srcs/libfunk/string.c.o.provides.build: CMakeFiles/minishell1.dir/srcs/libfunk/string.c.o


CMakeFiles/minishell1.dir/srcs/libfunk/strtowordtab.c.o: CMakeFiles/minishell1.dir/flags.make
CMakeFiles/minishell1.dir/srcs/libfunk/strtowordtab.c.o: ../srcs/libfunk/strtowordtab.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/bender/GrowUp/snippetsandmore/minishell1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building C object CMakeFiles/minishell1.dir/srcs/libfunk/strtowordtab.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/minishell1.dir/srcs/libfunk/strtowordtab.c.o   -c /home/bender/GrowUp/snippetsandmore/minishell1/srcs/libfunk/strtowordtab.c

CMakeFiles/minishell1.dir/srcs/libfunk/strtowordtab.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/minishell1.dir/srcs/libfunk/strtowordtab.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/bender/GrowUp/snippetsandmore/minishell1/srcs/libfunk/strtowordtab.c > CMakeFiles/minishell1.dir/srcs/libfunk/strtowordtab.c.i

CMakeFiles/minishell1.dir/srcs/libfunk/strtowordtab.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/minishell1.dir/srcs/libfunk/strtowordtab.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/bender/GrowUp/snippetsandmore/minishell1/srcs/libfunk/strtowordtab.c -o CMakeFiles/minishell1.dir/srcs/libfunk/strtowordtab.c.s

CMakeFiles/minishell1.dir/srcs/libfunk/strtowordtab.c.o.requires:

.PHONY : CMakeFiles/minishell1.dir/srcs/libfunk/strtowordtab.c.o.requires

CMakeFiles/minishell1.dir/srcs/libfunk/strtowordtab.c.o.provides: CMakeFiles/minishell1.dir/srcs/libfunk/strtowordtab.c.o.requires
	$(MAKE) -f CMakeFiles/minishell1.dir/build.make CMakeFiles/minishell1.dir/srcs/libfunk/strtowordtab.c.o.provides.build
.PHONY : CMakeFiles/minishell1.dir/srcs/libfunk/strtowordtab.c.o.provides

CMakeFiles/minishell1.dir/srcs/libfunk/strtowordtab.c.o.provides.build: CMakeFiles/minishell1.dir/srcs/libfunk/strtowordtab.c.o


CMakeFiles/minishell1.dir/srcs/minishell1/minishell1.c.o: CMakeFiles/minishell1.dir/flags.make
CMakeFiles/minishell1.dir/srcs/minishell1/minishell1.c.o: ../srcs/minishell1/minishell1.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/bender/GrowUp/snippetsandmore/minishell1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building C object CMakeFiles/minishell1.dir/srcs/minishell1/minishell1.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/minishell1.dir/srcs/minishell1/minishell1.c.o   -c /home/bender/GrowUp/snippetsandmore/minishell1/srcs/minishell1/minishell1.c

CMakeFiles/minishell1.dir/srcs/minishell1/minishell1.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/minishell1.dir/srcs/minishell1/minishell1.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/bender/GrowUp/snippetsandmore/minishell1/srcs/minishell1/minishell1.c > CMakeFiles/minishell1.dir/srcs/minishell1/minishell1.c.i

CMakeFiles/minishell1.dir/srcs/minishell1/minishell1.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/minishell1.dir/srcs/minishell1/minishell1.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/bender/GrowUp/snippetsandmore/minishell1/srcs/minishell1/minishell1.c -o CMakeFiles/minishell1.dir/srcs/minishell1/minishell1.c.s

CMakeFiles/minishell1.dir/srcs/minishell1/minishell1.c.o.requires:

.PHONY : CMakeFiles/minishell1.dir/srcs/minishell1/minishell1.c.o.requires

CMakeFiles/minishell1.dir/srcs/minishell1/minishell1.c.o.provides: CMakeFiles/minishell1.dir/srcs/minishell1/minishell1.c.o.requires
	$(MAKE) -f CMakeFiles/minishell1.dir/build.make CMakeFiles/minishell1.dir/srcs/minishell1/minishell1.c.o.provides.build
.PHONY : CMakeFiles/minishell1.dir/srcs/minishell1/minishell1.c.o.provides

CMakeFiles/minishell1.dir/srcs/minishell1/minishell1.c.o.provides.build: CMakeFiles/minishell1.dir/srcs/minishell1/minishell1.c.o


CMakeFiles/minishell1.dir/srcs/setenv/env.c.o: CMakeFiles/minishell1.dir/flags.make
CMakeFiles/minishell1.dir/srcs/setenv/env.c.o: ../srcs/setenv/env.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/bender/GrowUp/snippetsandmore/minishell1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building C object CMakeFiles/minishell1.dir/srcs/setenv/env.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/minishell1.dir/srcs/setenv/env.c.o   -c /home/bender/GrowUp/snippetsandmore/minishell1/srcs/setenv/env.c

CMakeFiles/minishell1.dir/srcs/setenv/env.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/minishell1.dir/srcs/setenv/env.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/bender/GrowUp/snippetsandmore/minishell1/srcs/setenv/env.c > CMakeFiles/minishell1.dir/srcs/setenv/env.c.i

CMakeFiles/minishell1.dir/srcs/setenv/env.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/minishell1.dir/srcs/setenv/env.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/bender/GrowUp/snippetsandmore/minishell1/srcs/setenv/env.c -o CMakeFiles/minishell1.dir/srcs/setenv/env.c.s

CMakeFiles/minishell1.dir/srcs/setenv/env.c.o.requires:

.PHONY : CMakeFiles/minishell1.dir/srcs/setenv/env.c.o.requires

CMakeFiles/minishell1.dir/srcs/setenv/env.c.o.provides: CMakeFiles/minishell1.dir/srcs/setenv/env.c.o.requires
	$(MAKE) -f CMakeFiles/minishell1.dir/build.make CMakeFiles/minishell1.dir/srcs/setenv/env.c.o.provides.build
.PHONY : CMakeFiles/minishell1.dir/srcs/setenv/env.c.o.provides

CMakeFiles/minishell1.dir/srcs/setenv/env.c.o.provides.build: CMakeFiles/minishell1.dir/srcs/setenv/env.c.o


CMakeFiles/minishell1.dir/srcs/setenv/env_inlist.c.o: CMakeFiles/minishell1.dir/flags.make
CMakeFiles/minishell1.dir/srcs/setenv/env_inlist.c.o: ../srcs/setenv/env_inlist.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/bender/GrowUp/snippetsandmore/minishell1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building C object CMakeFiles/minishell1.dir/srcs/setenv/env_inlist.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/minishell1.dir/srcs/setenv/env_inlist.c.o   -c /home/bender/GrowUp/snippetsandmore/minishell1/srcs/setenv/env_inlist.c

CMakeFiles/minishell1.dir/srcs/setenv/env_inlist.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/minishell1.dir/srcs/setenv/env_inlist.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/bender/GrowUp/snippetsandmore/minishell1/srcs/setenv/env_inlist.c > CMakeFiles/minishell1.dir/srcs/setenv/env_inlist.c.i

CMakeFiles/minishell1.dir/srcs/setenv/env_inlist.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/minishell1.dir/srcs/setenv/env_inlist.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/bender/GrowUp/snippetsandmore/minishell1/srcs/setenv/env_inlist.c -o CMakeFiles/minishell1.dir/srcs/setenv/env_inlist.c.s

CMakeFiles/minishell1.dir/srcs/setenv/env_inlist.c.o.requires:

.PHONY : CMakeFiles/minishell1.dir/srcs/setenv/env_inlist.c.o.requires

CMakeFiles/minishell1.dir/srcs/setenv/env_inlist.c.o.provides: CMakeFiles/minishell1.dir/srcs/setenv/env_inlist.c.o.requires
	$(MAKE) -f CMakeFiles/minishell1.dir/build.make CMakeFiles/minishell1.dir/srcs/setenv/env_inlist.c.o.provides.build
.PHONY : CMakeFiles/minishell1.dir/srcs/setenv/env_inlist.c.o.provides

CMakeFiles/minishell1.dir/srcs/setenv/env_inlist.c.o.provides.build: CMakeFiles/minishell1.dir/srcs/setenv/env_inlist.c.o


CMakeFiles/minishell1.dir/srcs/main.c.o: CMakeFiles/minishell1.dir/flags.make
CMakeFiles/minishell1.dir/srcs/main.c.o: ../srcs/main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/bender/GrowUp/snippetsandmore/minishell1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building C object CMakeFiles/minishell1.dir/srcs/main.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/minishell1.dir/srcs/main.c.o   -c /home/bender/GrowUp/snippetsandmore/minishell1/srcs/main.c

CMakeFiles/minishell1.dir/srcs/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/minishell1.dir/srcs/main.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/bender/GrowUp/snippetsandmore/minishell1/srcs/main.c > CMakeFiles/minishell1.dir/srcs/main.c.i

CMakeFiles/minishell1.dir/srcs/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/minishell1.dir/srcs/main.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/bender/GrowUp/snippetsandmore/minishell1/srcs/main.c -o CMakeFiles/minishell1.dir/srcs/main.c.s

CMakeFiles/minishell1.dir/srcs/main.c.o.requires:

.PHONY : CMakeFiles/minishell1.dir/srcs/main.c.o.requires

CMakeFiles/minishell1.dir/srcs/main.c.o.provides: CMakeFiles/minishell1.dir/srcs/main.c.o.requires
	$(MAKE) -f CMakeFiles/minishell1.dir/build.make CMakeFiles/minishell1.dir/srcs/main.c.o.provides.build
.PHONY : CMakeFiles/minishell1.dir/srcs/main.c.o.provides

CMakeFiles/minishell1.dir/srcs/main.c.o.provides.build: CMakeFiles/minishell1.dir/srcs/main.c.o


# Object files for target minishell1
minishell1_OBJECTS = \
"CMakeFiles/minishell1.dir/srcs/built_in/built_in.c.o" \
"CMakeFiles/minishell1.dir/srcs/built_in/built_inmatch.c.o" \
"CMakeFiles/minishell1.dir/srcs/gnlrpz/get_next_line.c.o" \
"CMakeFiles/minishell1.dir/srcs/libfunk/base.c.o" \
"CMakeFiles/minishell1.dir/srcs/libfunk/check_dir.c.o" \
"CMakeFiles/minishell1.dir/srcs/libfunk/error.c.o" \
"CMakeFiles/minishell1.dir/srcs/libfunk/string.c.o" \
"CMakeFiles/minishell1.dir/srcs/libfunk/strtowordtab.c.o" \
"CMakeFiles/minishell1.dir/srcs/minishell1/minishell1.c.o" \
"CMakeFiles/minishell1.dir/srcs/setenv/env.c.o" \
"CMakeFiles/minishell1.dir/srcs/setenv/env_inlist.c.o" \
"CMakeFiles/minishell1.dir/srcs/main.c.o"

# External object files for target minishell1
minishell1_EXTERNAL_OBJECTS =

minishell1: CMakeFiles/minishell1.dir/srcs/built_in/built_in.c.o
minishell1: CMakeFiles/minishell1.dir/srcs/built_in/built_inmatch.c.o
minishell1: CMakeFiles/minishell1.dir/srcs/gnlrpz/get_next_line.c.o
minishell1: CMakeFiles/minishell1.dir/srcs/libfunk/base.c.o
minishell1: CMakeFiles/minishell1.dir/srcs/libfunk/check_dir.c.o
minishell1: CMakeFiles/minishell1.dir/srcs/libfunk/error.c.o
minishell1: CMakeFiles/minishell1.dir/srcs/libfunk/string.c.o
minishell1: CMakeFiles/minishell1.dir/srcs/libfunk/strtowordtab.c.o
minishell1: CMakeFiles/minishell1.dir/srcs/minishell1/minishell1.c.o
minishell1: CMakeFiles/minishell1.dir/srcs/setenv/env.c.o
minishell1: CMakeFiles/minishell1.dir/srcs/setenv/env_inlist.c.o
minishell1: CMakeFiles/minishell1.dir/srcs/main.c.o
minishell1: CMakeFiles/minishell1.dir/build.make
minishell1: CMakeFiles/minishell1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/bender/GrowUp/snippetsandmore/minishell1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Linking C executable minishell1"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/minishell1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/minishell1.dir/build: minishell1

.PHONY : CMakeFiles/minishell1.dir/build

CMakeFiles/minishell1.dir/requires: CMakeFiles/minishell1.dir/srcs/built_in/built_in.c.o.requires
CMakeFiles/minishell1.dir/requires: CMakeFiles/minishell1.dir/srcs/built_in/built_inmatch.c.o.requires
CMakeFiles/minishell1.dir/requires: CMakeFiles/minishell1.dir/srcs/gnlrpz/get_next_line.c.o.requires
CMakeFiles/minishell1.dir/requires: CMakeFiles/minishell1.dir/srcs/libfunk/base.c.o.requires
CMakeFiles/minishell1.dir/requires: CMakeFiles/minishell1.dir/srcs/libfunk/check_dir.c.o.requires
CMakeFiles/minishell1.dir/requires: CMakeFiles/minishell1.dir/srcs/libfunk/error.c.o.requires
CMakeFiles/minishell1.dir/requires: CMakeFiles/minishell1.dir/srcs/libfunk/string.c.o.requires
CMakeFiles/minishell1.dir/requires: CMakeFiles/minishell1.dir/srcs/libfunk/strtowordtab.c.o.requires
CMakeFiles/minishell1.dir/requires: CMakeFiles/minishell1.dir/srcs/minishell1/minishell1.c.o.requires
CMakeFiles/minishell1.dir/requires: CMakeFiles/minishell1.dir/srcs/setenv/env.c.o.requires
CMakeFiles/minishell1.dir/requires: CMakeFiles/minishell1.dir/srcs/setenv/env_inlist.c.o.requires
CMakeFiles/minishell1.dir/requires: CMakeFiles/minishell1.dir/srcs/main.c.o.requires

.PHONY : CMakeFiles/minishell1.dir/requires

CMakeFiles/minishell1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/minishell1.dir/cmake_clean.cmake
.PHONY : CMakeFiles/minishell1.dir/clean

CMakeFiles/minishell1.dir/depend:
	cd /home/bender/GrowUp/snippetsandmore/minishell1/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/bender/GrowUp/snippetsandmore/minishell1 /home/bender/GrowUp/snippetsandmore/minishell1 /home/bender/GrowUp/snippetsandmore/minishell1/cmake-build-debug /home/bender/GrowUp/snippetsandmore/minishell1/cmake-build-debug /home/bender/GrowUp/snippetsandmore/minishell1/cmake-build-debug/CMakeFiles/minishell1.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/minishell1.dir/depend

