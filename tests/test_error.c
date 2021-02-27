/*
** EPITECH PROJECT, 2021
** B-CPE-110-PAR-1-4-BSQ-jules.gresset
** File description:
** test_error
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "bsq.h"

void redirect_all_std(void);

Test(errors, not_enough_args, .exit_code = 84)
{
    char *argv[1] = {"./bsq"};
    bsq(1, argv);
}

Test(errors, non_existing_map, .exit_code = 84)
{
    char *argv[2] = {"./bsq", "map"};
    bsq(2, argv);
}
