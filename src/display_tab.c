/*
** EPITECH PROJECT, 2020
** B-CPE-110-PAR-1-4-BSQ-jules.gresset
** File description:
** display_tab
*/

#include "bsq.h"

void display_tab(char **map, map_size_t *map_size)
{
    int i = 0;
    int j = 0;

    for (;i < map_size->height; i++) {
        for (j = 0; j < map_size->width; j++)
            my_printf("%c", map[i][j]);
        my_printf("\n");
    }
}