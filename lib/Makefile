##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Makefile
##

NAME	=	navy

DIR		=	src/

SRC	=	$(wildcard $(DIR)*.c)

OBJ	=	$(SRC:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJ)
			ar rc lib$(NAME).a $(OBJ)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf lib$(NAME).a

re:	fclean all
