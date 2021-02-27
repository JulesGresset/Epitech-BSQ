/*
** EPITECH PROJECT, 2020
** my_swap
** File description:
** Swaps the content of two integers with the adresses given as parameter
*/

void my_swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}
