/*
** EPITECH PROJECT, 2020
** B-CPE-110-PAR-1-4-bsbsq-jules.gresset
** File description:
** bootstrap_part4
*/


#include "bsq.h"

void bsq(int nbr, char **str)
{
    char *filepath = str[1];
    char **map;
    map_size_t map_size;
    int first_number;
    int i;

    if (nbr != 2)
        exit(84);
    first_number = first_line_length(filepath);
    check_sizemap(filepath, &map_size, first_number);
    map = map_to_tab(filepath, &map_size, first_number);
    map = max_square(&map_size, map);
    display_tab(map, &map_size);
    for (i = 0; i < map_size.height; i++)
        free(map[i]);
    free(map);
}