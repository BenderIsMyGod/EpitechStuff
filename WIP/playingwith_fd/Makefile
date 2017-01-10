##
## Makefile for playwith_fd in /home/bender/GrowUp/snippetsandmore/getline/
##
## Made by John Doe
## Login   <login_x@epitech.eu>
##
## Started on  Thu Dec 29 08:15:22 2016 John Doe
## Last update Thu Dec 29 10:01:43 2016 John Doe
##

CC		= clang

RM		= rm -rf

CFLAGS		+= -std=gnu99 -D_POSIX_C_SOURCE=199309L
CFLAGS		+= -I./include/

SRCS		= srcs/base.c					\
		  		srcs/main.c


OBJS		= $(SRCS:.c=.o)

NAME		= playwith_fd

all:		$(NAME)

$(NAME):	$(OBJS)
		$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

clean:
		$(RM) $(OBJS)

fclean:		clean
		$(RM) $(NAME)

re:		fclean all

.PHONY:		all clean fclean re
