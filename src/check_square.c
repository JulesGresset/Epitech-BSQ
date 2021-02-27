/*
** EPITECH PROJECT, 2020
** B-CPE-110-PAR-1-4-BSQ-jules.gresset
** File description:
** check_square
*/

#include "bsq.h"

int	check_square(int size, char **map, map_size_t *map_size,
                square_t *square)
{
    int	i, j;

    for (i = 0; i < size && i + square->tempj < map_size->width; i++) {
        for (j = 0; j < size && j + square->tempi < map_size->height; j++) {
            if (map[j + square->tempi][i + square->tempj] != '.')
                return (0);
        }
    }
    if (i == size && j == size)
        return (1);
    else
        return (0);
}
