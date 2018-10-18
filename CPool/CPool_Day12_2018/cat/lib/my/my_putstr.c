/*
** EPITECH PROJECT, 2018
** CPool
** File description:
** my_putstr
*/

#include "include/my.h"

int my_putstr(char const *str)
{
    char const *ptr = str;
    int counter = 0;
    while (str[counter] != '\0') {
        my_putchar(str[counter]);
        counter++;
    }
}
