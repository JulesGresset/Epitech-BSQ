/*
** EPITECH PROJECT, 2020
** B-CPE-110-PAR-1-4-BSQ-jules.gresset
** File description:
** check_sizemap
*/

#include "bsq.h"

int check_sizemap(char *filepath, map_size_t *map_size, int first_number)
{
    int	fd;
    char c = '\0';
    char *temp = (char *)malloc(sizeof(char) * (first_number));

    if ((fd = open(filepath, O_RDONLY)) < 0)
        exit(84);
    read(fd, temp, first_number + 1);
    map_size->width = 0;
    map_size->height = -1;
    while (read(fd, &c, 1)) {
        if (map_size->height == -1 && c != '\n')
            map_size->width++;
        if (c == '\n')
            map_size->height++;
    }
    map_size->height++;
    close(fd);
    free(temp);
    return 0;
}