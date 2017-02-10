##
## Makefile for PSU_2016_navy in /home/bender/Repo/PSU_2016_navy/
##
## Made by John Doe
## Login   <login_x@epitech.eu>
##
## Started on  Mon Jan 30 14:05:14 2017 John Doe
## Last update Fri Feb 10 11:44:39 2017 John Doe
##

CC				= gcc

CLG				= clang

RM				= @rm -rf

PRINT     = @echo -e "\n\e[1m****\n\t=>Building NAVY suceed\n\t\tEnjoy ;)\n\
						****\n\e[0m"

CFLAGS		= -Wall -Werror -Wpedantic -Wfatal-errors -std=gnu99
CFLAGS		+= -I./include/
#############################################
## The following compilations flags are based
## on "Cinglis" "c style best practice" guide
##  => https://github.com/mcinglis/c-style <=
#############################################
DFLAGS		+= -g2 -Wall -Wpedantic -std=gnu99 \
          	-Wformat=2 -Wno-unused-parameter -Wshadow \
          	-Wwrite-strings -Wstrict-prototypes -Wold-style-definition \
          	-Wredundant-decls -Wnested-externs \
						-Wmissing-include-dirs
DFLAGS    += -I./include/
############################################
OBJS			= $(SRCS:.c=.o)

NAME			= navy

SRCS			= srcs/core/base.c							\
						srcs/core/base2.c							\
						srcs/core/error.c							\
						srcs/core/flag_match.c				\
						srcs/core/flgs.c							\
						srcs/core/get_next_line.c			\
						srcs/core/printf.c						\
						srcs/core/putnbr.c						\
						srcs/core/string.c						\
						srcs/core/strtowordtab.c			\
						srcs/signal/sigaction.c				\
						srcs/signal/handlers.c				\
						srcs/game/games.c							\
						srcs/parsing/openmap.c				\
						srcs/parsing/check.c					\
						srcs/visuals/graph.c					\
						srcs/check_map/char.c					\
						srcs/check_map/check_fight.c	\
						srcs/check_map/check_location.c		\
						srcs/check_map/check_more.c		\
						srcs/check_map/file_check.c		\
						srcs/check_map/init.c					\
						srcs/check_map/nb_ship.c
MAIN			=	srcs/main.c

TESTSRCS	= srcs/newcom/signauxbitwised.c \
						srcs/newcom/receiver.c				\
						srcs/newcom/sender.c					\
						srcs/maintest.c


all:				$(NAME)

$(NAME):		$(OBJS)
						$(CC) $(CFLAGS) $(SRCS) $(MAIN) $(CFLAGS) -o $(NAME)
						$(PRINT)

clean:
						$(RM) $(OBJS)

fclean: 		clean
						$(RM) $(NAME)

re: 				fclean all

debug:
						@echo -e "\n\nD_BUG mode ON (with gcc)\n\n"
						$(CC) $(DFLAGS) $(SRCS) $(MAIN) -o $(NAME)

dbc:
						@echo -e "\n\nD_BUG mode ON (with clang)\n\n"
						$(CLG) $(DFLAGS) $(SRCS) $(MAIN) -o $(NAME)

test:
						$(CC) $(DFLAGS) $(SRCS) $(TESTSRCS) -o testcom

.PHONY: 		all clean fclean re
