/*
** EPITECH PROJECT, 2020
** my_strncmp
** File description:
** Compares n chars of two strings
*/

int my_strncmp(char const *s1, char const *s2, int len)
{
    int i;
    for (i = 0; (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i]); i++)
        if (i >= len)
            break;
    return s1[i] - s2[i];
}
