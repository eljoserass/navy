##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Makefile
##

NAME	=	navy

BIN		=	navy

DIR 	=	src/

SRC	=	$(wildcard $(DIR)*.c)

OBJ	=	$(SRC:.c=.o)

CFLAGS 	=	-I./include -L./lib -l$(NAME)

all:	$(NAME)

$(NAME):	$(OBJ)
			make re -C lib/
			make comp

comp:
	gcc -o $(BIN) $(SRC) $(CFLAGS) -g3

cleante:
	rm *.gc* unit_tests

clean:
	make clean -C lib/
	rm -rf $(OBJ)

fclean: clean
	make fclean -C lib/
	rm -rf $(BIN)

re:	fclean all
