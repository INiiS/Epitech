##
## EPITECH PROJECT, 2018
## CPool_Day10
## File description:
## makefile
##

SRC =	rush2.c				\
	str_char_manipulation.c		\
	my_puterr.c			\
	main.c

OBJ = $(SRC:.c=.o)

NAME = rush2

LIBDIR = lib/my/

LIB = my

IDIR = include/

all:	
	make -C $(LIBDIR)
	gcc -c $(SRC)
	gcc -o $(NAME) $(OBJ) -L $(LIBDIR) -l$(LIB) -I $(IDIR)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
