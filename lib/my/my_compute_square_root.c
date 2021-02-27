/*
** EPITECH PROJECT, 2020
** my_compute_square_root
** File description:
** Returns the square root of the number given as argument
*/

#include "../../include/my.h"

int get_square_root(int nbr, int i)
{
    if (i * i == nbr)
        return (i);
    else if (i * i > nbr)
        return (0);
    else
        return (get_square_root(nbr, i + 1));
}

int my_compute_square_root(int nb)
{
    return (get_square_root(nb, 1));
}
