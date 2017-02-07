##
## Makefile.am for V1.3_STABLE in /home/bender/snippets/v1.3_stable/
##
## Made by John Doe
## Login   <login_x@epitech.eu>
##
## Started on  Sun Jan 29 13:02:07 2017 John Doe
## Last update Mon Jan 30 11:52:26 2017 John Doe
##

bin_PROGRAMS = $(NAME)

mysh_SOURCES = $(SRCS)

LDADD = include/libfunk.a

CC		= gcc

CLANG = clang

RM		= rm -rf

AM_CFLAGS		= -Wfatal-errors -Werror -Wall -Wextra -Wpedantic -std=c99
AM_LDFLAGS	= -I./include/ -L./include/ -lfunk
#############################################
## The following compilations flags are based
## on "cinglis" "c style best practice" guide
##  => https://github.com/mcinglis/c-style <=
#############################################
DFLAGS		= -Wall -Wextra -Wpedantic \
          -Wformat=2 -Wno-unused-parameter -Wshadow \
          -Wwrite-strings -Wstrict-prototypes -Wold-style-definition \
          -Wredundant-decls -Wnested-externs -Wmissing-include-dirs
DFLAGS    += -I./include/ -L./include/ -lfunk
############################################
SRCS		= srcs/main.c         \
          srcs/check_status.c \
          srcs/builtin.c      \
          srcs/base2.c

NAME		= mysh

all:
			$(CC) $(SRCS) $(AM_CFLAGS) $(AM_LDFLAGS) -o $(NAME)

fclean:
		$(RM) $(NAME)

re:		fclean all

.PHONY:		all fclean re

debugc:
		$(CLANG) -g $(DFLAGS) $(SRCS) -o $(NAME)
