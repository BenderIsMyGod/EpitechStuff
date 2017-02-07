##
## Makefile for PSU_2016_navy in /home/bender/Repo/PSU_2016_navy/
##
## Made by John Doe
## Login   <login_x@epitech.eu>
##
## Started on  Mon Jan 30 14:05:14 2017 John Doe
## Last update Tue Feb  7 14:11:06 2017 John Doe
##

CC				= gcc

CLG				= clang

RM				= rm -rf

CFLAGS		= -Wall -Werror -Wpedantic -std=gnu99
CFLAGS		+= -I./include/
#############################################
## The following compilations flags are based
## on "Cinglis" "c style best practice" guide
##  => https://github.com/mcinglis/c-style <=
#############################################
DFLAGS		+= -g2 -Wall -Wpedantic -std=gnu99 \
          -Wformat=2 -Wno-unused-parameter -Wshadow \
          -Wwrite-strings -Wstrict-prototypes -Wold-style-definition \
          -Wredundant-decls -Wnested-externs -Wmissing-include-dirs
DFLAGS    += -I./include/
############################################
OBJS			= $(SRCS:.c=.o)

NAME			= navy

SRCS			= srcs/core/base.c						\
						srcs/core/base2.c						\
						srcs/core/error.c						\
						srcs/core/flag_match.c			\
						srcs/core/flgs.c						\
						srcs/core/get_next_line.c		\
						srcs/core/printf.c					\
						srcs/core/putnbr.c					\
						srcs/core/string.c					\
						srcs/core/strtowordtab.c		\
						srcs/signal/sigaction.c			\
						srcs/signal/handlers.c			\
						srcs/game/games.c						\
						srcs/parsing/openmap.c			\
						srcs/parsing/check.c				\
						srcs/visuals/graph.c				
						# srcs/main.c

TESTSRCS	= srcs/test/*.c

all:				$(NAME)

$(NAME):		$(OBJS)
						$(CC) $(CFLAGS) $(SRCS) $(CFLAGS) -o $(NAME)

clean:
						$(RM) $(OBJS)

fclean: 		clean
						$(RM) $(NAME)

re: 				fclean all

debug:
						$(CC) $(DFLAGS) $(SRCS) -o $(NAME)

dbc:
						$(CLG) $(DFLAGS) $(SRCS) -o $(NAME)

test:
						$(CLG) $(DFLAGS) $(SRCS) $(TESTSRCS) -o testcom

.PHONY: all clean fclean re
