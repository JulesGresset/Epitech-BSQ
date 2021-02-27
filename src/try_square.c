/*
** EPITECH PROJECT, 2020
** B-CPE-110-PAR-1-4-BSQ-jules.gresset
** File description:
** try_square
*/

#include "bsq.h"

void try_square(char **map, map_size_t *map_size, square_t *square)
{
    int	size = 1;

    square->tempi = square->i;
    square->tempj = square->j;
    while (check_square(size, map, map_size, square))
        size++;
    size--;
    if (size == square->max && square->tempj < square->y &&
        square->tempi < square->x) {
        square->max = size;
        square->x = square->tempi;
        square->y = square->tempj;
    } else if (size > square->max) {
        square->max = size;
        square->x = square->tempi;
        square->y = square->tempj;
    }
}