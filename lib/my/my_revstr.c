/*
** EPITECH PROJECT, 2020
** my_revstr
** File description:
** Reverses astring
*/

#include "../../include/my.h"

char *my_revstr(char *str)
{
    int length = my_strlen(str) - 1;
    int counter = 0;
    char chara;

    while (counter < length) {
        chara = str[counter];
        str[counter] = str[length];
        str[length] = chara;
        counter++;
        length--;
    }
    return (str);
}
