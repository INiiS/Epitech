/*
** EPITECH PROJECT, 2018
** CPool_Day_07
** File description:
** 
*/

#include "include/my.h"

char *my_strcat(char *dest, char const *src)
{
    int len_dest = my_strlen(dest);
    int i = 0;
    while (src[i] != '\0') {
        dest[len_dest + i - 1] = src[i++];
    }
    return (dest);
}
