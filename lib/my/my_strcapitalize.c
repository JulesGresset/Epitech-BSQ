/*
** EPITECH PROJECT, 2020
** my_strcapitalize
** File description:
** Capitalizes the first letter of each word
*/

#include <stdio.h>

int is_lowercase(char c)
{
    if (c >= 97 && c <= 122)
        return 1;
    return 0;
}

int is_letter(char c)
{
    if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
        return 1;
    return 0;
}

char *my_strcapitalize(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (i == 0 && is_lowercase(str[i]))
            str[i] -= 32;
        else if (!is_letter(str[i]) && is_lowercase(str[i + 1]))
            str[i] -= 32;
        else
            str[i] += 32;
    }
    return (str);
}
