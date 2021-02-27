/*
** EPITECH PROJECT, 2020
** my_strncat
** File description:
** Function that concatenates n characters
** of the src string to the end of the dest string
*/

#include "../../include/my.h"

char *my_strncat(char *dest, char const * src, int nb)
{
    int dest_len = my_strlen(dest);
    int i = 0;

    for (i = 0; i < nb; i++)
        dest[dest_len + i] = src[i];
    dest[dest_len + i] = '\0';
    return dest;
}
