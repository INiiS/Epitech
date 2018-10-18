/*
** EPITECH PROJECT, 2018
** CPool_Day06
** File description:
** my_strcmp
*/

#include <criterion/criterion.h>
#include "my_header.h"

Test(my_strcmp, compare_two_equal_strings)
{
    char *s1 = "Hello";
    char *s2 = "Hello";
    int res = my_strcmp(s1, s2);
    cr_assert(res == 0);
}

Test(my_strcmp, first_is_higher_to_second)
{
    char *s1 = "Chat";
    char *s2 = "Chaise";
    int res = my_strcmp(s1, s2);
    cr_assert(res == 1);
}

Test(my_strcmp, second_is_higher_to_first)
{
    char *s1 = "Chaise";
    char *s2 = "Chat";
    int res = my_strcmp(s1, s2);
    cr_assert(res == -1);
}
