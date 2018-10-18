/*
** EPITECH PROJECT, 2018
** CPool
** File description:
** my_strncat
*/

char *my_strncat(char *dest, char const *src, int nb)
{
    int len_dest = my_strlen(dest);
    int i = 0;
    for (int i = 0; i < nb && src[i] != '\0'; i++) {
        dest[len_dest + i] = src[i];
    }
    dest[len_dest + i] = '\0';
    return (dest);
}
