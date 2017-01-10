##
## Makefile for BOOK in /home/bender/Desktop/Snippets/book/
##
## Made by John Doe
## Login   <login_x@epitech.eu>
##
## Started on  Thu Dec 22 09:20:25 2016 John Doe
## Last update Mon Jan  9 10:09:02 2017 John Doe
##

CC		= gcc

RM		= rm -rf

CFLAGS		+= -W -Werror -Wall -Wextra -std=gnu99 -D_POSIX_C_SOURCE=199309L
CFLAGS		+= -I./include/

SRCS		= srcs/base.c					\
		  		srcs/msg.c					\
		  		srcs/shortcuts.c		\
		  		srcs/strtowordtab.c	\
					srcs/built_in.c			\
		  		srcs/pshellv2.c			\
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
		$(CC) -g $(CFLAGS) $(SRCS) -o $(NAME)
