/*
** EPITECH PROJECT, 2018
** CPool_Day06
** File description:
** test_my_strncpy
*/

#include <criterion/criterion.h>
#include "my_header.h"

Test(my_strncpy, copy_five_characters_in_empty_array)
{
    char dest[6] = {0};

    my_strncpy(dest, "HelloWorld", 5);
    cr_assert_str_eq(dest, "Hello");
}

Test(my_strncpy, copy_one_character_in_empty_array)
{
    char dest[6] = {0};
    my_strncpy(dest, "Hello", 1);
    cr_assert_str_eq(dest, "H");
}

Test(my_strncpy, copy_five_characters_on_)
{
    char dest[6] = {0};
    my_strncpy(dest, "Hello", 9);
    cr_assert_str_eq(dest, "Hello");
}

Test(my_strlen, size_of_string)
{
    char dest[] = "Hello";
    cr_assert(my_strlen_b(dest) == 5);
}
