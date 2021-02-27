/*
** EPITECH PROJECT, 2020
** my_strtol
** File description:
** Convert a char into an int
*/

int my_strtol(char *str_ptr, char **endptr)
{
    int res = 0;
    int i = 0;

    for (; str_ptr[i] >= '0' && str_ptr[i] <= '9'; i++)
        res = (res * 10) + (str_ptr[i] - '0');
    *endptr = str_ptr + i;
    return res;
}