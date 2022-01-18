##
## EPITECH PROJECT, 2021
## B-CPE-100-STG-1-1-cpoolday10-pierre.maurer
## File description:
## Makefile
##

SRC =	./line_star.c       \
        ./main.c       \
        ./top_bot_star.c       \
        ./my_putchar.c       \
	    ./mid_star.c	\
	    ./my_getnbr.c	\
	    ./star_one.c

OBJ =    $(SRC:.c=.o)

NAME =	star

all:	$(NAME)

$(NAME):
	gcc -o $(NAME) $(SRC) -g

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all
	make
