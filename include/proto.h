/*
** EPITECH PROJECT, 2021
** B-CPE-110-PAR-1-4-BSQ-jules.gresset
** File description:
** proto
*/

#ifndef PROTO_H_
#define PROTO_H_

#include "struct.h"

char **max_square(map_size_t *map_size, char **map);

int check_sizemap(char *filepath, map_size_t *map_size, int first_number);

int	check_square(int size, char **map, map_size_t *map_size,
                square_t *square);

void display_tab(char **map, map_size_t *map_size);

int first_line_length(char const *filepath);

int main(int argc, char **argv);

char **map_to_tab(char *filepath, map_size_t *map_size, int first_number);

void try_square(char **map, map_size_t *map_size, square_t *square);

void bsq(int argc, char **argv);

#endif /* !PROTO_H_ */
