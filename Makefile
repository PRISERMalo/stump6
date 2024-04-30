##
## EPITECH PROJECT, 2024
## makefile
## File description:
## makefile
##

CC	=	gcc

SRC	=	$(shell find ./src/ -name '*.c' -not -name 'main.c')

IFLAGS	=	-I include/ -L lib/ -lmy

CFLAGS	=	-W -Wall -Werror -Wextra $(IFLAGS) -g3

OBJ	=	$(SRC:.c=.o)

NAME	=	crocus

all:	$(OBJ)
	make -C lib/my/	all
	gcc src/main.c $(OBJ) $(CFLAGS) -o $(NAME)

debug:
	make -C lib/my/ all
	gcc src/main.c $(SRC) $(CFLAGS) -o $(NAME) -ggdb

clean:
	make -C lib/my/ clean
	rm -f $(OBJ)

fclean:	clean
	make -C lib/my/	fclean
	rm -f libmy.a $(NAME)
	rm -f vgcore*

re:	fclean all
