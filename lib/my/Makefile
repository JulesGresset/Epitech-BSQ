##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Make file
##

SRC =	my_strlen.c	\
	my_strncat.c	\
	my_strcat.c	\
	my_strncmp.c	\
	my_strcmp.c	\
	my_strncpy.c	\
	my_putchar.c	\
	my_getnbr.c	\
	my_strcpy.c	\
	my_put_nbr.c	\
	my_putstr.c	\
	my_revstr.c	\
	my_strdup.c	\
	my_str_to_word_array.c	\
	my_compute_power_rec.c	\
	my_compute_square_root.c	\
	my_find_prime_sup.c	\
	my_strcapitalize.c	\
	my_str_isalpha.c	\
	my_str_islower.c	\
	my_str_isnum.c	\
	my_str_isupper.c	\
	my_strlowcase.c	\
	my_strupcase.c	\
	my_swap.c \
	my_printf.c \
	my_put_cap_hex.c \
	my_put_float.c \
	my_put_hex.c \
	my_put_oct.c \
	my_strtol.c

OBJ =	$(SRC:.c=.o)

NAME =	libmy.a

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)
	rm *.o

tests_run:
	gcc -o unit_tests *.c tests/lib_tests.c --coverage -lcriterion -I../../include -L./ -lmy
	./unit_tests

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
