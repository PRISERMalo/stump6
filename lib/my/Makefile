##
## EPITECH PROJECT, 2024
## makefile
## File description:
## makefile
##

CC	=	gcc

LIB	=	$(shell find ./ -name '*.c')

OBJ 	= 	$(LIB:.c=.o)

IFLAGS	=	-I ./include/my.

CFLAGS	=	-W -Wall -Werror -Wextra $(IFLAGS)

LIBNAME = 	libmy.a

all:	$(OBJ)
	ar rc $(LIBNAME) $(OBJ)
	cp $(LIBNAME) ../

clean:
	rm -f $(OBJ)

fclean: 	clean
	rm -f $(LIBNAME)
	rm -f ../$(LIBNAME)
	rm -f *~

re: 	fclean all
