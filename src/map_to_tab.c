/*
** EPITECH PROJECT, 2020
** B-CPE-110-PAR-1-4-BSQ-jules.gresset
** File description:
** map_to_tab
*/

#include "bsq.h"

char **map_to_tab(char *filepath, map_size_t *map_size, int first_number)
{
    int fd;
    char **map;
    int	i = 0;
    char *temp = (char *)malloc(sizeof(char) * (first_number));

    if ((fd = open(filepath, O_RDONLY)) < 0)
        exit(84);
    if ((read(fd, temp, first_number + 1)) < 0)
        exit(84);
    map = (char **)malloc(sizeof(char *) * map_size->height);
    for (;i < map_size->height; i++) {
        map[i] = (char *)malloc(sizeof(char) * (map_size->width + 1));
        if ((read(fd, map[i], map_size->width + 1)) < 0)
            exit(84);
        map[i][map_size->width] = '\0';
    }
    close(fd);
    return map;
}