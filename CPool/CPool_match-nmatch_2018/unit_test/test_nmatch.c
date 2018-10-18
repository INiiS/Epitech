/*
** EPITECH PROJECT, 2018
** CPool_matchnmatch
** File description:
** test_nmatch
*/

#include <criterion/criterion.h>

Test(nmatch, nmatch_one_wildcard)
{
    cr_assert(nmatch("abcbd", "*b*") == 2);
}

Test(nmatch, nmatch_two_wildcards)
{
    cr_assert(nmatch("abc", "a**") == 3);
}
