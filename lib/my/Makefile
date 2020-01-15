##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Copy the lib into /lib, copy my.h into include, clean
##

######### FLAGS #########
CFLAGS	=	-Wall -Wextra -Werror -Wshadow -O3

CPPFLAGS = -iquote $(IDIR)

######### SOURCES #########
SRC =	$(wildcard ./*.c)

OBJ = $(SRC:.c=.o)

NAME =	libmy.a

IDIR	=	./

CC	=	clang

######### Rules ###########
all: $(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)
	cp my.h ../../include
	rm -f $(OBJ)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

.PHONY:	all clean fclean re
