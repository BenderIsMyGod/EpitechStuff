cmake_minimum_required(VERSION 3.6)
project(navy)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        include/base.h
        include/cli.h
        include/errors.h
        include/get_next_line.h
        include/navy.h
        include/printf.h
        include/serv.h
        include/strtowordtab.h
        srcs/core/base.c
        srcs/core/base2.c
        srcs/core/error.c
        srcs/core/flag_match.c
        srcs/core/flgs.c
        srcs/core/get_next_line.c
        srcs/core/printf.c
        srcs/core/putnbr.c
        srcs/core/string.c
        srcs/core/strtowordtab.c
        srcs/ctrl.c)

include_directories(.)
include_directories(include)
include_directories(srcs)
include_directories(srcs/core)

add_executable(navy ${SOURCE_FILES})