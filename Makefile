##
## EPITECH PROJECT, 2020
## makefile
## File description:
## Make file
##

SRC =						\
	src/bsq.c				\
	src/check_sizemap.c		\
	src/check_square.c		\
	src/display_tab.c		\
	src/first_line_length.c	\
	src/main.c				\
	src/map_to_tab.c		\
	src/max_square.c		\
	src/try_square.c

SRC_TEST = 					\
	src/bsq.c				\
	src/check_sizemap.c		\
	src/check_square.c		\
	src/display_tab.c		\
	src/first_line_length.c	\
	src/map_to_tab.c		\
	src/max_square.c		\
	src/try_square.c


TEST =						\
	tests/test_bsq.c		\
	tests/test_error.c

INCLUDE = -I include/

LIB = -L lib/my/ -lmy

FLAGS = -Wall -Wextra

NAME = bsq

all:
	(cd lib/my && make && cd ../../)
	gcc -o $(NAME) $(SRC) $(INCLUDE) $(LIB) $(FLAGS)
clean:
	rm -f $(NAME)
	find -type f \( -name '*~' -or -name '#*#' \) -delete
	find -type f \( -name '*.gcda' -or -name '*.gcno' \) -delete

fclean: clean
	rm -f $(NAME)

re: fclean all

tests_run:
	find -type f \( -name '*.gcda' -or -name '*.gcno' \) -delete
	gcc -o unit_tests $(SRC_TEST) $(TEST) --coverage -lcriterion $(INCLUDE) $(LIB) $(FLAGS)
	./unit_tests