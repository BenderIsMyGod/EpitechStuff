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
CMAKE_SOURCE_DIR = /home/bender/snippets/v1.3_stable

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/bender/snippets/v1.3_stable/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/v1_3_stable.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/v1_3_stable.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/v1_3_stable.dir/flags.make

CMakeFiles/v1_3_stable.dir/mysh-0.01/srcs/base2.c.o: CMakeFiles/v1_3_stable.dir/flags.make
CMakeFiles/v1_3_stable.dir/mysh-0.01/srcs/base2.c.o: ../mysh-0.01/srcs/base2.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/bender/snippets/v1.3_stable/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/v1_3_stable.dir/mysh-0.01/srcs/base2.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/v1_3_stable.dir/mysh-0.01/srcs/base2.c.o   -c /home/bender/snippets/v1.3_stable/mysh-0.01/srcs/base2.c

CMakeFiles/v1_3_stable.dir/mysh-0.01/srcs/base2.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/v1_3_stable.dir/mysh-0.01/srcs/base2.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/bender/snippets/v1.3_stable/mysh-0.01/srcs/base2.c > CMakeFiles/v1_3_stable.dir/mysh-0.01/srcs/base2.c.i

CMakeFiles/v1_3_stable.dir/mysh-0.01/srcs/base2.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/v1_3_stable.dir/mysh-0.01/srcs/base2.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/bender/snippets/v1.3_stable/mysh-0.01/srcs/base2.c -o CMakeFiles/v1_3_stable.dir/mysh-0.01/srcs/base2.c.s

CMakeFiles/v1_3_stable.dir/mysh-0.01/srcs/base2.c.o.requires:

.PHONY : CMakeFiles/v1_3_stable.dir/mysh-0.01/srcs/base2.c.o.requires

CMakeFiles/v1_3_stable.dir/mysh-0.01/srcs/base2.c.o.provides: CMakeFiles/v1_3_stable.dir/mysh-0.01/srcs/base2.c.o.requires
	$(MAKE) -f CMakeFiles/v1_3_stable.dir/build.make CMakeFiles/v1_3_stable.dir/mysh-0.01/srcs/base2.c.o.provides.build
.PHONY : CMakeFiles/v1_3_stable.dir/mysh-0.01/srcs/base2.c.o.provides

CMakeFiles/v1_3_stable.dir/mysh-0.01/srcs/base2.c.o.provides.build: CMakeFiles/v1_3_stable.dir/mysh-0.01/srcs/base2.c.o


CMakeFiles/v1_3_stable.dir/mysh-0.01/srcs/builtin.c.o: CMakeFiles/v1_3_stable.dir/flags.make
CMakeFiles/v1_3_stable.dir/mysh-0.01/srcs/builtin.c.o: ../mysh-0.01/srcs/builtin.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/bender/snippets/v1.3_stable/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/v1_3_stable.dir/mysh-0.01/srcs/builtin.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/v1_3_stable.dir/mysh-0.01/srcs/builtin.c.o   -c /home/bender/snippets/v1.3_stable/mysh-0.01/srcs/builtin.c

CMakeFiles/v1_3_stable.dir/mysh-0.01/srcs/builtin.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/v1_3_stable.dir/mysh-0.01/srcs/builtin.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/bender/snippets/v1.3_stable/mysh-0.01/srcs/builtin.c > CMakeFiles/v1_3_stable.dir/mysh-0.01/srcs/builtin.c.i

CMakeFiles/v1_3_stable.dir/mysh-0.01/srcs/builtin.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/v1_3_stable.dir/mysh-0.01/srcs/builtin.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/bender/snippets/v1.3_stable/mysh-0.01/srcs/builtin.c -o CMakeFiles/v1_3_stable.dir/mysh-0.01/srcs/builtin.c.s

CMakeFiles/v1_3_stable.dir/mysh-0.01/srcs/builtin.c.o.requires:

.PHONY : CMakeFiles/v1_3_stable.dir/mysh-0.01/srcs/builtin.c.o.requires

CMakeFiles/v1_3_stable.dir/mysh-0.01/srcs/builtin.c.o.provides: CMakeFiles/v1_3_stable.dir/mysh-0.01/srcs/builtin.c.o.requires
	$(MAKE) -f CMakeFiles/v1_3_stable.dir/build.make CMakeFiles/v1_3_stable.dir/mysh-0.01/srcs/builtin.c.o.provides.build
.PHONY : CMakeFiles/v1_3_stable.dir/mysh-0.01/srcs/builtin.c.o.provides

CMakeFiles/v1_3_stable.dir/mysh-0.01/srcs/builtin.c.o.provides.build: CMakeFiles/v1_3_stable.dir/mysh-0.01/srcs/builtin.c.o


CMakeFiles/v1_3_stable.dir/mysh-0.01/srcs/check_status.c.o: CMakeFiles/v1_3_stable.dir/flags.make
CMakeFiles/v1_3_stable.dir/mysh-0.01/srcs/check_status.c.o: ../mysh-0.01/srcs/check_status.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/bender/snippets/v1.3_stable/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/v1_3_stable.dir/mysh-0.01/srcs/check_status.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/v1_3_stable.dir/mysh-0.01/srcs/check_status.c.o   -c /home/bender/snippets/v1.3_stable/mysh-0.01/srcs/check_status.c

CMakeFiles/v1_3_stable.dir/mysh-0.01/srcs/check_status.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/v1_3_stable.dir/mysh-0.01/srcs/check_status.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/bender/snippets/v1.3_stable/mysh-0.01/srcs/check_status.c > CMakeFiles/v1_3_stable.dir/mysh-0.01/srcs/check_status.c.i

CMakeFiles/v1_3_stable.dir/mysh-0.01/srcs/check_status.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/v1_3_stable.dir/mysh-0.01/srcs/check_status.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/bender/snippets/v1.3_stable/mysh-0.01/srcs/check_status.c -o CMakeFiles/v1_3_stable.dir/mysh-0.01/srcs/check_status.c.s

CMakeFiles/v1_3_stable.dir/mysh-0.01/srcs/check_status.c.o.requires:

.PHONY : CMakeFiles/v1_3_stable.dir/mysh-0.01/srcs/check_status.c.o.requires

CMakeFiles/v1_3_stable.dir/mysh-0.01/srcs/check_status.c.o.provides: CMakeFiles/v1_3_stable.dir/mysh-0.01/srcs/check_status.c.o.requires
	$(MAKE) -f CMakeFiles/v1_3_stable.dir/build.make CMakeFiles/v1_3_stable.dir/mysh-0.01/srcs/check_status.c.o.provides.build
.PHONY : CMakeFiles/v1_3_stable.dir/mysh-0.01/srcs/check_status.c.o.provides

CMakeFiles/v1_3_stable.dir/mysh-0.01/srcs/check_status.c.o.provides.build: CMakeFiles/v1_3_stable.dir/mysh-0.01/srcs/check_status.c.o


CMakeFiles/v1_3_stable.dir/mysh-0.01/srcs/main.c.o: CMakeFiles/v1_3_stable.dir/flags.make
CMakeFiles/v1_3_stable.dir/mysh-0.01/srcs/main.c.o: ../mysh-0.01/srcs/main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/bender/snippets/v1.3_stable/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/v1_3_stable.dir/mysh-0.01/srcs/main.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/v1_3_stable.dir/mysh-0.01/srcs/main.c.o   -c /home/bender/snippets/v1.3_stable/mysh-0.01/srcs/main.c

CMakeFiles/v1_3_stable.dir/mysh-0.01/srcs/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/v1_3_stable.dir/mysh-0.01/srcs/main.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/bender/snippets/v1.3_stable/mysh-0.01/srcs/main.c > CMakeFiles/v1_3_stable.dir/mysh-0.01/srcs/main.c.i

CMakeFiles/v1_3_stable.dir/mysh-0.01/srcs/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/v1_3_stable.dir/mysh-0.01/srcs/main.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/bender/snippets/v1.3_stable/mysh-0.01/srcs/main.c -o CMakeFiles/v1_3_stable.dir/mysh-0.01/srcs/main.c.s

CMakeFiles/v1_3_stable.dir/mysh-0.01/srcs/main.c.o.requires:

.PHONY : CMakeFiles/v1_3_stable.dir/mysh-0.01/srcs/main.c.o.requires

CMakeFiles/v1_3_stable.dir/mysh-0.01/srcs/main.c.o.provides: CMakeFiles/v1_3_stable.dir/mysh-0.01/srcs/main.c.o.requires
	$(MAKE) -f CMakeFiles/v1_3_stable.dir/build.make CMakeFiles/v1_3_stable.dir/mysh-0.01/srcs/main.c.o.provides.build
.PHONY : CMakeFiles/v1_3_stable.dir/mysh-0.01/srcs/main.c.o.provides

CMakeFiles/v1_3_stable.dir/mysh-0.01/srcs/main.c.o.provides.build: CMakeFiles/v1_3_stable.dir/mysh-0.01/srcs/main.c.o


CMakeFiles/v1_3_stable.dir/srcs/base2.c.o: CMakeFiles/v1_3_stable.dir/flags.make
CMakeFiles/v1_3_stable.dir/srcs/base2.c.o: ../srcs/base2.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/bender/snippets/v1.3_stable/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/v1_3_stable.dir/srcs/base2.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/v1_3_stable.dir/srcs/base2.c.o   -c /home/bender/snippets/v1.3_stable/srcs/base2.c

CMakeFiles/v1_3_stable.dir/srcs/base2.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/v1_3_stable.dir/srcs/base2.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/bender/snippets/v1.3_stable/srcs/base2.c > CMakeFiles/v1_3_stable.dir/srcs/base2.c.i

CMakeFiles/v1_3_stable.dir/srcs/base2.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/v1_3_stable.dir/srcs/base2.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/bender/snippets/v1.3_stable/srcs/base2.c -o CMakeFiles/v1_3_stable.dir/srcs/base2.c.s

CMakeFiles/v1_3_stable.dir/srcs/base2.c.o.requires:

.PHONY : CMakeFiles/v1_3_stable.dir/srcs/base2.c.o.requires

CMakeFiles/v1_3_stable.dir/srcs/base2.c.o.provides: CMakeFiles/v1_3_stable.dir/srcs/base2.c.o.requires
	$(MAKE) -f CMakeFiles/v1_3_stable.dir/build.make CMakeFiles/v1_3_stable.dir/srcs/base2.c.o.provides.build
.PHONY : CMakeFiles/v1_3_stable.dir/srcs/base2.c.o.provides

CMakeFiles/v1_3_stable.dir/srcs/base2.c.o.provides.build: CMakeFiles/v1_3_stable.dir/srcs/base2.c.o


CMakeFiles/v1_3_stable.dir/srcs/builtin.c.o: CMakeFiles/v1_3_stable.dir/flags.make
CMakeFiles/v1_3_stable.dir/srcs/builtin.c.o: ../srcs/builtin.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/bender/snippets/v1.3_stable/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building C object CMakeFiles/v1_3_stable.dir/srcs/builtin.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/v1_3_stable.dir/srcs/builtin.c.o   -c /home/bender/snippets/v1.3_stable/srcs/builtin.c

CMakeFiles/v1_3_stable.dir/srcs/builtin.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/v1_3_stable.dir/srcs/builtin.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/bender/snippets/v1.3_stable/srcs/builtin.c > CMakeFiles/v1_3_stable.dir/srcs/builtin.c.i

CMakeFiles/v1_3_stable.dir/srcs/builtin.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/v1_3_stable.dir/srcs/builtin.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/bender/snippets/v1.3_stable/srcs/builtin.c -o CMakeFiles/v1_3_stable.dir/srcs/builtin.c.s

CMakeFiles/v1_3_stable.dir/srcs/builtin.c.o.requires:

.PHONY : CMakeFiles/v1_3_stable.dir/srcs/builtin.c.o.requires

CMakeFiles/v1_3_stable.dir/srcs/builtin.c.o.provides: CMakeFiles/v1_3_stable.dir/srcs/builtin.c.o.requires
	$(MAKE) -f CMakeFiles/v1_3_stable.dir/build.make CMakeFiles/v1_3_stable.dir/srcs/builtin.c.o.provides.build
.PHONY : CMakeFiles/v1_3_stable.dir/srcs/builtin.c.o.provides

CMakeFiles/v1_3_stable.dir/srcs/builtin.c.o.provides.build: CMakeFiles/v1_3_stable.dir/srcs/builtin.c.o


CMakeFiles/v1_3_stable.dir/srcs/check_status.c.o: CMakeFiles/v1_3_stable.dir/flags.make
CMakeFiles/v1_3_stable.dir/srcs/check_status.c.o: ../srcs/check_status.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/bender/snippets/v1.3_stable/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building C object CMakeFiles/v1_3_stable.dir/srcs/check_status.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/v1_3_stable.dir/srcs/check_status.c.o   -c /home/bender/snippets/v1.3_stable/srcs/check_status.c

CMakeFiles/v1_3_stable.dir/srcs/check_status.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/v1_3_stable.dir/srcs/check_status.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/bender/snippets/v1.3_stable/srcs/check_status.c > CMakeFiles/v1_3_stable.dir/srcs/check_status.c.i

CMakeFiles/v1_3_stable.dir/srcs/check_status.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/v1_3_stable.dir/srcs/check_status.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/bender/snippets/v1.3_stable/srcs/check_status.c -o CMakeFiles/v1_3_stable.dir/srcs/check_status.c.s

CMakeFiles/v1_3_stable.dir/srcs/check_status.c.o.requires:

.PHONY : CMakeFiles/v1_3_stable.dir/srcs/check_status.c.o.requires

CMakeFiles/v1_3_stable.dir/srcs/check_status.c.o.provides: CMakeFiles/v1_3_stable.dir/srcs/check_status.c.o.requires
	$(MAKE) -f CMakeFiles/v1_3_stable.dir/build.make CMakeFiles/v1_3_stable.dir/srcs/check_status.c.o.provides.build
.PHONY : CMakeFiles/v1_3_stable.dir/srcs/check_status.c.o.provides

CMakeFiles/v1_3_stable.dir/srcs/check_status.c.o.provides.build: CMakeFiles/v1_3_stable.dir/srcs/check_status.c.o


CMakeFiles/v1_3_stable.dir/srcs/main.c.o: CMakeFiles/v1_3_stable.dir/flags.make
CMakeFiles/v1_3_stable.dir/srcs/main.c.o: ../srcs/main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/bender/snippets/v1.3_stable/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building C object CMakeFiles/v1_3_stable.dir/srcs/main.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/v1_3_stable.dir/srcs/main.c.o   -c /home/bender/snippets/v1.3_stable/srcs/main.c

CMakeFiles/v1_3_stable.dir/srcs/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/v1_3_stable.dir/srcs/main.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/bender/snippets/v1.3_stable/srcs/main.c > CMakeFiles/v1_3_stable.dir/srcs/main.c.i

CMakeFiles/v1_3_stable.dir/srcs/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/v1_3_stable.dir/srcs/main.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/bender/snippets/v1.3_stable/srcs/main.c -o CMakeFiles/v1_3_stable.dir/srcs/main.c.s

CMakeFiles/v1_3_stable.dir/srcs/main.c.o.requires:

.PHONY : CMakeFiles/v1_3_stable.dir/srcs/main.c.o.requires

CMakeFiles/v1_3_stable.dir/srcs/main.c.o.provides: CMakeFiles/v1_3_stable.dir/srcs/main.c.o.requires
	$(MAKE) -f CMakeFiles/v1_3_stable.dir/build.make CMakeFiles/v1_3_stable.dir/srcs/main.c.o.provides.build
.PHONY : CMakeFiles/v1_3_stable.dir/srcs/main.c.o.provides

CMakeFiles/v1_3_stable.dir/srcs/main.c.o.provides.build: CMakeFiles/v1_3_stable.dir/srcs/main.c.o


CMakeFiles/v1_3_stable.dir/Tests/segfault.c.o: CMakeFiles/v1_3_stable.dir/flags.make
CMakeFiles/v1_3_stable.dir/Tests/segfault.c.o: ../Tests/segfault.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/bender/snippets/v1.3_stable/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building C object CMakeFiles/v1_3_stable.dir/Tests/segfault.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/v1_3_stable.dir/Tests/segfault.c.o   -c /home/bender/snippets/v1.3_stable/Tests/segfault.c

CMakeFiles/v1_3_stable.dir/Tests/segfault.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/v1_3_stable.dir/Tests/segfault.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/bender/snippets/v1.3_stable/Tests/segfault.c > CMakeFiles/v1_3_stable.dir/Tests/segfault.c.i

CMakeFiles/v1_3_stable.dir/Tests/segfault.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/v1_3_stable.dir/Tests/segfault.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/bender/snippets/v1.3_stable/Tests/segfault.c -o CMakeFiles/v1_3_stable.dir/Tests/segfault.c.s

CMakeFiles/v1_3_stable.dir/Tests/segfault.c.o.requires:

.PHONY : CMakeFiles/v1_3_stable.dir/Tests/segfault.c.o.requires

CMakeFiles/v1_3_stable.dir/Tests/segfault.c.o.provides: CMakeFiles/v1_3_stable.dir/Tests/segfault.c.o.requires
	$(MAKE) -f CMakeFiles/v1_3_stable.dir/build.make CMakeFiles/v1_3_stable.dir/Tests/segfault.c.o.provides.build
.PHONY : CMakeFiles/v1_3_stable.dir/Tests/segfault.c.o.provides

CMakeFiles/v1_3_stable.dir/Tests/segfault.c.o.provides.build: CMakeFiles/v1_3_stable.dir/Tests/segfault.c.o


# Object files for target v1_3_stable
v1_3_stable_OBJECTS = \
"CMakeFiles/v1_3_stable.dir/mysh-0.01/srcs/base2.c.o" \
"CMakeFiles/v1_3_stable.dir/mysh-0.01/srcs/builtin.c.o" \
"CMakeFiles/v1_3_stable.dir/mysh-0.01/srcs/check_status.c.o" \
"CMakeFiles/v1_3_stable.dir/mysh-0.01/srcs/main.c.o" \
"CMakeFiles/v1_3_stable.dir/srcs/base2.c.o" \
"CMakeFiles/v1_3_stable.dir/srcs/builtin.c.o" \
"CMakeFiles/v1_3_stable.dir/srcs/check_status.c.o" \
"CMakeFiles/v1_3_stable.dir/srcs/main.c.o" \
"CMakeFiles/v1_3_stable.dir/Tests/segfault.c.o"

# External object files for target v1_3_stable
v1_3_stable_EXTERNAL_OBJECTS =

v1_3_stable: CMakeFiles/v1_3_stable.dir/mysh-0.01/srcs/base2.c.o
v1_3_stable: CMakeFiles/v1_3_stable.dir/mysh-0.01/srcs/builtin.c.o
v1_3_stable: CMakeFiles/v1_3_stable.dir/mysh-0.01/srcs/check_status.c.o
v1_3_stable: CMakeFiles/v1_3_stable.dir/mysh-0.01/srcs/main.c.o
v1_3_stable: CMakeFiles/v1_3_stable.dir/srcs/base2.c.o
v1_3_stable: CMakeFiles/v1_3_stable.dir/srcs/builtin.c.o
v1_3_stable: CMakeFiles/v1_3_stable.dir/srcs/check_status.c.o
v1_3_stable: CMakeFiles/v1_3_stable.dir/srcs/main.c.o
v1_3_stable: CMakeFiles/v1_3_stable.dir/Tests/segfault.c.o
v1_3_stable: CMakeFiles/v1_3_stable.dir/build.make
v1_3_stable: CMakeFiles/v1_3_stable.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/bender/snippets/v1.3_stable/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Linking C executable v1_3_stable"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/v1_3_stable.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/v1_3_stable.dir/build: v1_3_stable

.PHONY : CMakeFiles/v1_3_stable.dir/build

CMakeFiles/v1_3_stable.dir/requires: CMakeFiles/v1_3_stable.dir/mysh-0.01/srcs/base2.c.o.requires
CMakeFiles/v1_3_stable.dir/requires: CMakeFiles/v1_3_stable.dir/mysh-0.01/srcs/builtin.c.o.requires
CMakeFiles/v1_3_stable.dir/requires: CMakeFiles/v1_3_stable.dir/mysh-0.01/srcs/check_status.c.o.requires
CMakeFiles/v1_3_stable.dir/requires: CMakeFiles/v1_3_stable.dir/mysh-0.01/srcs/main.c.o.requires
CMakeFiles/v1_3_stable.dir/requires: CMakeFiles/v1_3_stable.dir/srcs/base2.c.o.requires
CMakeFiles/v1_3_stable.dir/requires: CMakeFiles/v1_3_stable.dir/srcs/builtin.c.o.requires
CMakeFiles/v1_3_stable.dir/requires: CMakeFiles/v1_3_stable.dir/srcs/check_status.c.o.requires
CMakeFiles/v1_3_stable.dir/requires: CMakeFiles/v1_3_stable.dir/srcs/main.c.o.requires
CMakeFiles/v1_3_stable.dir/requires: CMakeFiles/v1_3_stable.dir/Tests/segfault.c.o.requires

.PHONY : CMakeFiles/v1_3_stable.dir/requires

CMakeFiles/v1_3_stable.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/v1_3_stable.dir/cmake_clean.cmake
.PHONY : CMakeFiles/v1_3_stable.dir/clean

CMakeFiles/v1_3_stable.dir/depend:
	cd /home/bender/snippets/v1.3_stable/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/bender/snippets/v1.3_stable /home/bender/snippets/v1.3_stable /home/bender/snippets/v1.3_stable/cmake-build-debug /home/bender/snippets/v1.3_stable/cmake-build-debug /home/bender/snippets/v1.3_stable/cmake-build-debug/CMakeFiles/v1_3_stable.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/v1_3_stable.dir/depend
