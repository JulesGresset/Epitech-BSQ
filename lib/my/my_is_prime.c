/*
** EPITECH PROJECT, 2020
** my_is_prime
** File description:
** Returns 1 if number is prime, 0 if not
*/

#include "../../include/my.h"

int find_prime(int nb, int i)
{
    int res;

    if (nb % i == 0)
        res = 1;
    else if (i >= nb / 2)
        res = 0;
    else
        res = find_prime(nb, i + 1);
    return (res);
}

int my_is_prime(int nb)
{
    int prime;

    if (nb == 0 || nb == 1)
        prime = 0;
    prime = find_prime(nb, 2);
    return (prime);
}
