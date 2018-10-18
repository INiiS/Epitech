/*
** EPITECH PROJECT, 2018
** CPool_Day08
** File description:
** my_show_word_array
*/

#include <unistd.h>
#include "include/my.h"

int my_show_word_array(char * const *tab)
{
    int i = 0;
    while (tab[i] != NULL) {
        my_putstr(tab[i]);
        my_putchar('\n');
        i++;
    }
    return (0);
}
