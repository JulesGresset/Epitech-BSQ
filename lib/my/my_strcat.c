/*
** EPITECH PROJECT, 2020
** my_strcat
** File description:
** Concatenates two string
*/

#include "../../include/my.h"

char *my_strcat(char *dest, char const *src)
{
    int j = my_strlen(dest);
    int i = 0;

    for (i = 0; src[i] != '\0'; i++)
        dest[j + i] = src[i];
    dest[j + i] = '\0';
    return dest;
}
