##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Thomas Meurice <thomas.meurice@epitech.eu>
##


SRC	=	src/main.c					\
		src/fill_list.c				\
		src/functions.c				\
		src/functions_part2.c		\
		src/functions_part3.c		\
		src/algo.c					\

NAME	= push_swap

OBJ	=	$(SRC:.c=.o)

COMPIL	=	-Llib/my -lmy

CFLAGS	=	-W -Wall -Werror -Wextra -I include/

all:		$(NAME)

$(NAME):	$(OBJ)
		make -C lib/my
		make clean -C lib/my
		gcc -o $(NAME) $(OBJ) $(COMPIL) $(CFLAGS)
		make clean
clean:
		rm -f $(OBJ)
		rm -rf *~ src/*~ vg*

fclean: clean
		make fclean -C lib/my
		rm -f $(NAME)

debug:		CFLAGS += -ggdb3

debug:		re

re:		fclean all

.PHONY:		all debug clean fclean
