/*
** EPITECH PROJECT, 2018
** CPool_match-nmatch
** File description:
** match
*/

int match(char const *s1, char const *s2)
{
    if (*s1 != '\0' && *s2 != '\0' && *s1 == *s2) {
        return (match(s1 + 1, s2 + 1));
    }
    if (!(*s1) && *s2 == '*') {
        return (match(s1, s2 + 1));
    }
    if (*s1 && *s2 == '*') {
        return (match(s1, s2 + 1) || match(s1 + 1, s2));
    }
    if (*s1 == '\0' && *s2 == '\0') {
        return (1);
    }
    return (0);
}
