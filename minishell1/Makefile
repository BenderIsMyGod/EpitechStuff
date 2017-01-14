##
## Makefile for Minishell1 in /home/bender/Repo/PSU_2016_minishell1/
##
## Made by John Doe
## Login   <login_x@epitech.eu>
##
## Started on  Fri Jan 13 13:32:55 2017 John Doe
## Last update Fri Jan 13 13:34:02 2017 John Doe
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
SRCS		= srcs/base.c														\
		  		srcs/msg.c														\
		  		srcs/shortcuts.c											\
		  		srcs/strtowordtab.c										\
					srcs/GNLgalagalarpz/get_next_line.c		\
					srcs/built_in.c												\
		  		srcs/pshellv2.c												\
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
