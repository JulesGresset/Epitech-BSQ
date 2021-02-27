/*
** EPITECH PROJECT, 2020
** my_str_is_lower
** File description:
** Returns 1 if string has only lower case chars
*/

int my_str_islower(char const *str)
{
    int res = 0;

    if (str[0] == '\0')
        return 1;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z')
            res = 0;
        else
            res = 1;
    }
    return res;
}
