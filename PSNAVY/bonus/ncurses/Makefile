##
## Makefile for makefile rush 2 in /home/CAZAUB_C/CPool_rush2
## 
## Made by clement cazaubon
## Login   <CAZAUB_C@epitech.net>
## 
## Started on  Sat Oct 15 14:16:54 2016 clement cazaubon
## Last update Fri Feb 10 17:19:51 2017 clement cazaubon
##

SRC	= main.c		\

OBJ	= $(SRC:.c=.o)

NAME	= navycurse

CFLAGS += -I ./include/

all:	$(NAME)

$(NAME) : $(OBJ)
	gcc -g -o $(NAME) $(OBJ) -lncurses

clean :
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
