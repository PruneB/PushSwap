##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## makefile pushswap
##

SRC	=	src/link_list.c		\
		src/my_getnbr.c		\
		src/command.c		\
		src/tri.c		\
		src/main.c		\
		src/my_show_list.c		\

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-W -Wall -Wextra -I./include

NAME	=	push_swap

$(NAME):	$(OBJ)
		gcc -o $(NAME) $(OBJ)

all:		$(NAME)

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f $(NAME)

re:		fclean all
