##
## Makefile for LibFunk in /home/bender/Snippets/libfunk/
##
## Made by John Doe
## Login   <login_x@epitech.eu>
##
## Started on  Sun Jan 29 10:04:40 2017 John Doe
## Last update Sun Jan 29 11:56:52 2017 John Doe
##

CC      = gcc -c

RM      = rm -rf

RMA			= rm -rf *.o

CFLAGS		+= -Wfatal-errors -Werror -Wall -Wextra -Wpedantic -std=c99
CFLAGS		+= -I./include/

ARCHV		= ar -rcs

SRCS    = srcs/get_next_line.c	\
					srcs/base.c					\
					srcs/check_dir.c		\
					srcs/error.c				\
					srcs/string.c				\
					srcs/strtowordtab.c	\
					srcs/flag_match.c	\
					srcs/flgs.c				\
					srcs/printf.c			\
					srcs/putnbr.c

OBJS    = $(SRCS:.c=.o)

NAME    = libfunk.a

all: 			$(NAME)

$(NAME):	$(OBJS)
					$(ARCHV) $(NAME) $(OBJS)
					$(RMA)

clean:
					$(RM) $(OBJS)

fclean: 	clean
					$(RM) $(NAME)
					$(RMA)

re: 			fclean all

shared:
					$(OBJS) $(CC) -fPIC $(OBJS)

.PHONY: all clean fclean re
