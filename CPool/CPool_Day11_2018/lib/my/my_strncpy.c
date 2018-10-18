/*
** EPITECH PROJECT, 2018
** CPool_Day06
** File description:
** my_strcpy
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    for (int i = 0; i < n; i++) {
        dest[i] = src[i];
    }
    if (n > my_strlen_b(dest)) {
        dest[n] = '\0';
    }
    return (dest);
}

int my_strlen_b(char const *str)
{
    char const *ptr = str;
    int i = 0;
    while (str[i] != '\0') {
        i++;
    }
    return (i);
}
