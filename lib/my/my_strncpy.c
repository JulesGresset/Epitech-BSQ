/*
** EPITECH PROJECT, 2020
** my_strncpy
** File description:
** Copies n characters from a string into another
*/

#include "../../include/my.h"

char *my_strncpy(char *dest, char const *src, int n)
{
    for (int counter = 0; counter < n; counter++)
        dest[counter] = src[counter];
    if (n > my_strlen(src))
        dest[n] = '\0';
    return (dest);
}
