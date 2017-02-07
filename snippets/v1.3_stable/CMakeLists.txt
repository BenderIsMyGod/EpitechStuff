cmake_minimum_required(VERSION 3.6)
project(v1_3_stable)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        include/libfunk.h
        include/shell.h
        mysh-0.01/srcs/base2.c
        mysh-0.01/srcs/builtin.c
        mysh-0.01/srcs/check_status.c
        mysh-0.01/srcs/main.c
        srcs/base2.c
        srcs/builtin.c
        srcs/check_status.c
        srcs/main.c
        Tests/segfault.c)

add_executable(v1_3_stable ${SOURCE_FILES})