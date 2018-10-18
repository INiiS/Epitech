##
## EPITECH PROJECT, 2018
## CPool
## File description:
## makefile
##

SRC = cat.c

OBJ = $(SRC:.c=.o)

NAME = cat

LIBDIR = lib/my

INCLUDE = include/
all:
	make -C $(LIBDIR)
	gcc -c $(SRC)
	gcc -o $(NAME) $(OBJ) -L $(LIBDIR) -lmy -I $(INCLUDE)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all
