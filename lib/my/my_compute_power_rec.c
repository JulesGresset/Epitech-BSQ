/*
** EPITECH PROJECT, 2020
** my_compute_power_rec
** File description:
** Recursive function that returns nb power p
*/

#include "../../include/my.h"

int my_compute_power_rec(int nb, int p)
{
    int res;

    if (p == 0)
        res = 1;
    else if (p < 0)
        res = 0;
    else
        res = nb * my_compute_power_rec(nb, p - 1);
    return (res);
}
