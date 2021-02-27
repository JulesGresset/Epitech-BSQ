/*
** EPITECH PROJECT, 2020
** B-CPE-110-PAR-1-4-BSQ-jules.gresset
** File description:
** max_square
*/

#include "bsq.h"

char **max_square(map_size_t *map_size, char **map)
{
    square_t square;

    square.x = 0;
    square.y = 0;
    square.max = 0;
    for (square.i = 0 ;square.i + square.max <= map_size->height; square.i++) {
        for (square.j = 0; square.j +square.max <= map_size->width; square.j++){
            try_square(map, map_size, &square);
        }
    }
    for (square.i = 0; square.i < square.max; square.i++) {
        for (square.j = 0; square.j < square.max; square.j++) {
            map[square.i + square.x][square.j + square.y] = 'x';
        }
    }
    return map;
}