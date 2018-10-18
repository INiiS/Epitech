/*
** EPITECH PROJECT, 2018
** CPool_Day08_2018
** File description:
** my_strdup
*/

char *my_strdup(char const *src)
{
    char *dest;
    dest = malloc(sizeof(char) * (my_strlen(src) + 1));
    my_strcpy(dest, src);
    return (dest);
}
