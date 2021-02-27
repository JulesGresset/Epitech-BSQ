/*
** EPITECH PROJECT, 2021
** B-CPE-110-PAR-1-4-BSQ-jules.gresset
** File description:
** test_bsq
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "bsq.h"

void redirect_all_std(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(bsq, testing_map, .init = redirect_all_std)
{
    char *argv[2] = {"./bsq", "tests/testing_map"};
    bsq(2, argv);
    cr_assert_stdout_eq_str("..xxx\n.oxxx\n..xxx\n...o.\n.....\n");
}

Test(bsq, testing_map_row, .init = redirect_all_std)
{
    char *argv[2] = {"./bsq", "tests/testing_map_row"};
    bsq(2, argv);
    cr_assert_stdout_eq_str("x.....o...........o......\n");
}