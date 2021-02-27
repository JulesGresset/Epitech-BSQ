/*
** EPITECH PROJECT, 2020
** my_strdup
** File description:
** Duplicate string
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "../../include/my.h"

char *my_strdup(char *s)
{
    int len = my_strlen(s);
    char *s2 = (char *)malloc(sizeof(char) * (len + 1));

    for (int i = 0; s[i] != '\0'; i++)
        s2[i] = s[i];
    s2[len] = '\0';
    return s2;
}
