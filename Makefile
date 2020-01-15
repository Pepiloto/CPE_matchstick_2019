##
## EPITECH PROJECT, 2019
## CPE_pushswap_2019
## File description:
## Makefile
##

######### FLAGS #########
CFLAGS	=	-Wall -Wextra -Werror -Wshadow -finline-functions

CPPFLAGS = -iquote $(IDIR)

DBGFLAGS = -g3 -ggdb

LDFLAGS = -L lib/my -lmy

######### SOURCES #########
SRC =	src/error.c				\
		src/create_board_game.c	\
		src/main.c

OBJ = $(SRC:.c=.o)

NAME = matchstick

IDIR	=	./include

CC	=	clang

######### Rules ###########
all:	$(NAME)

$(NAME):	$(OBJ)
	make -C lib/my
	$(CC) -o $(NAME) $(OBJ) $(CFLAGS) $(CPPFLAGS) $(LDFLAGS)
	rm -f $(OBJ)

debug: CFLAGS += $(DBGFLAGS)
debug: $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	make fclean -C lib/my/
	rm -f $(NAME)

re:	fclean all

.PHONY: all debug clean fclean re tests_run

tests_run:	LDFLAGS	+= -lcriterion --coverage
tests_run:
		gcc -o unit_tests  $(CPPFLAGS) $(LDFLAGS)
		./unit_tests
		gcovr -e tests/
