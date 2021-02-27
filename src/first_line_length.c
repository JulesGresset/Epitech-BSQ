/*
** EPITECH PROJECT, 2020
** bsq
** File description:
** bsq
*/

#include "bsq.h"

int first_line_length(char const *filepath)
{
    int fd;
    char buff[4096];
    int i = 0;
    int res = 0;

    if ((fd = open(filepath, O_RDONLY)) < 0)
        exit(84);
    if (read(fd, buff, 4096) < 0)
        exit(84);
    for (; buff[i] != '\n'; i++)
        res++;
    close(fd);
    return res;
}