##
## Makefile for BOOK in /home/bender/Desktop/Snippets/book/
##
## Made by John Doe
## Login   <login_x@epitech.eu>
##
## Started on  Thu Dec 22 09:20:25 2016 John Doe
## Last update Wed Dec 28 14:28:20 2016 John Doe
##

CC		= clang

RM		= rm -rf

CFLAGS		+= -std=gnu99 -D_POSIX_C_SOURCE=199309L
CFLAGS		+= -I./include/

SRCS		= srcs/base.c					\
		  		srcs/msg.c					\
		  		srcs/shortcuts.c		\
		  		srcs/strtowordtab.c	\
		  		srcs/pshellv2.c			\
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
