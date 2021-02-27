/*
** EPITECH PROJECT, 2020
** my_find_prime_sup
** File description:
** Returns the smallest prime number > b
*/

#include "../../include/my.h"

int my_find_prime_sup(int nb)
{
    int num;

    if (my_is_prime(nb))
        num = nb;
    else
        num = my_find_prime_sup(nb + 1);
    return (num);
}
