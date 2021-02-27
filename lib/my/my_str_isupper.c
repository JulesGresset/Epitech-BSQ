/*
** EPITECH PROJECT, 2020
** my_str_isupper
** File description:
** Returns 1 if string is only upper case letters, 0 otherwise
*/

int my_str_isupper(char const *str)
{
    int res = 0;

    if (str[0] == '\0')
        return 1;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z')
            res = 0;
        else
            res = 1;
    }
    return res;
}
