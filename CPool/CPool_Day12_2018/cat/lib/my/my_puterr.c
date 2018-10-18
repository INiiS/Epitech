/*
** EPITECH PROJECT, 2018
** CPool
** File description:
** my_putstr
*/

#include <unistd.h>
#include "include/my.h"

int my_puterr(char const *str)
{
    write(2, str, my_strlen(str) + 1);
    return (0);
}
