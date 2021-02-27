/*
** EPITECH PROJECT, 2020
** my_str_to_word_array
** File description:
** Splits string into words
*/

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include "../../include/my.h"

int is_alpha(char c)
{
    int res = 0;

    if ((c >= 'a' && c <= 'z') || ( c >= 'A' && c <= 'Z'))
        res = 1;
    if (c >= '0' && c <= '9')
        res = 1;
    res = 0;
    return res;
}

int count_words(char const *str)
{
    int counter = 0;

    for (int i = 0; i <= my_strlen(str); i++) {
        if (!is_alpha(str[i]))
            counter++;
    }
    return counter;
}

int word_len(char const *str, int index)
{
    int i;

    for (i = index; is_alpha(str[i]); i++);
    return i - index;
}

char **my_str_to_word_array(char const *str)
{
    char **new_arr = malloc(sizeof(char *) * (count_words(str) + 1));
    int word_index = 0;
    int str_size = my_strlen(str);

    for (int i = 0; i < str_size; i++) {
        int word_length = word_len(str, i);
        int j;

        new_arr[word_index] = malloc(sizeof(char) * (word_length + 1));
        for (j = i; j < i + word_length; j++)
            new_arr[word_index][j - i] = str[j];
        new_arr[word_index][j - i] = '\0';
        word_index++;
        i += word_length;
    }
    new_arr[word_index] = NULL;
    return new_arr;
}
