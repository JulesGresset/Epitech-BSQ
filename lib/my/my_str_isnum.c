/*
** EPITECH PROJECT, 2020
** my_str_isnum
** File description:
** If char is numeric
*/

int my_str_isnum(char const *str)
{
    int res = 0;

    if (str[0] == '\0')
        return 1;
    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] >= '0' && str[i] <= '9'))
            res = 0;
        else
            res = 1;
    }
    return res;
}
