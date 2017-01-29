##
## Makefile for Minishell1.2 in /home/bender/Repo/PSU_2016_minishell1/v1.2/
##
## Made by John Doe
## Login   <login_x@epitech.eu>
##
## Started on  Tue Jan 17 11:42:37 2017 John Doe
## Last update Tue Jan 17 19:42:48 2017 John Doe
##

CC		= gcc

RM		= rm -rf

CFLAGS		+= -Werror -Wall -Wextra -Wpedantic -std=c99
CFLAGS		+= -I./include/
#############################################
## The following compilations flags are based
## on "cinglis" "c style best practice" guide
##  => https://github.com/mcinglis/c-style <=
#############################################
DFLAGS		+= -Wall -Wextra -Wpedantic \
          -Wformat=2 -Wno-unused-parameter -Wshadow \
          -Wwrite-strings -Wstrict-prototypes -Wold-style-definition \
          -Wredundant-decls -Wnested-externs -Wmissing-include-dirs
DFLAGS    += -I./include/
############################################
SRCS		= srcs/libfunk/base.c					\
					srcs/libfunk/check_dir.c 		\
					srcs/libfunk/error.c				\
					srcs/libfunk/string.c				\
					srcs/libfunk/strtowordtab.c	\
					srcs/gnlrpz/get_next_line.c	\
					srcs/minishell1.c						\
		  		srcs/main.c


OBJS		= $(SRCS:.c=.o)

NAME		= mysh

all:		$(NAME)

$(NAME):	$(OBJS)
		$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

clean:
		$(RM) $(OBJS)

fclean:		clean
		$(RM) $(NAME)

re:		fclean all

.PHONY:		all clean fclean re

debug:
		$(CC) -g $(DFLAGS) $(SRCS) -o $(NAME)
