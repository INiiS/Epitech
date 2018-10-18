/*
** EPITECH PROJECT, 2018
** CPool
** File description:
** test_match
*/

#include <criterion/criterion.h>

Test(match, test_two_identical_strings)
{
    cr_assert(match("test", "test") == 1);
}

Test(match, test_two_different_strings)
{
    cr_assert(match("test", "non") == 0);
}

Test(match, test_string_and_wildcard)
{
    cr_assert(match("testing", "*") == 1);
}

Test(match, test_string_and_ending_wildcard)
{
    cr_assert(match("unephrasedetest", "u*") == 1);
}

Test(match, test_string_and_starting_wildcard)
{
    cr_assert(match("uneautrephrasedetest", "*t") == 1);
}

Test(match, test_two_empty_strings)
{
    char *str = "";
    char *str2 = "";
    cr_assert_str_empty(str);
    cr_assert_str_empty(str2);
    cr_assert(match(str, str2) == 1);
}

Test(match, test_string_and_middle_wildcard)
{
    cr_assert(match("Testing", "*s*") == 1);
}

Test(match, test_empty_and_beginning_wildcard)
{
    cr_assert(match("", "*b") == 0);
}
