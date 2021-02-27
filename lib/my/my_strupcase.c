/*
** EPITECH PROJECT, 2020
** my_upcase
** File description:
** Puts every letter of every word in it in uppercase
*/

char *my_strupcase(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] <= 122 && str[i] >= 97)
            str[i] -= 32;
    }
    return str;
}
