##
## Makefile for BOOK in /home/bender/Desktop/Snippets/book/
##
## Made by John Doe
## Login   <login_x@epitech.eu>
##
## Started on  Thu Dec 22 09:20:25 2016 John Doe
## Last update Tue Dec 27 14:22:13 2016 bender
##

CC		= clang

RM		= rm -rf

CFLAGS		+= -g
CFLAGS		+= -I./include/

SRCS		= srcs/core.c		\
		  srcs/init.c		\
		  srcs/core2.c		\
		  srcs/msg.c		\
		  srcs/loop.c		\
		  srcs/test.c		\
		  srcs/openandsuch.c	\
		  srcs/main.c


OBJS		= $(SRCS:.c=.o)

NAME		= PShell

all:		$(NAME)

$(NAME):	$(OBJS)
		$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

clean:
		$(RM) $(OBJS)

fclean:		clean
		$(RM) $(NAME)

re:		fclean all

.PHONY:		all clean fclean re
