/*
** EPITECH PROJECT, 2020
** my_strcpy
** File description:
** Copy string in another
*/

char *my_strcpy(char *dest, char const *src)
{
    int counter = 0;

    while (src[counter] != '\0') {
        dest[counter] = src[counter];
        counter++;
    }
    dest[counter] = '\0';
    return (dest);
}
