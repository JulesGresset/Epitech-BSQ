/*
** EPITECH PROJECT, 2020
** my_str_is_alpha
** File description:
** Returns 1 if char is alpha
*/

int my_str_is_alpha(char const *c)
{
    int res = 0;

    if (c[0] == '\0')
        return 1;
    for (int i = 0; c[i] != '\0'; i++) {
        if ((c[i] >= 'A' && c[i] <= 'Z') || (c[i] >= 'a' && c[i] <= 'Z'))
            res = 0;
        else
            res = 1;
    }
    return res;
}
