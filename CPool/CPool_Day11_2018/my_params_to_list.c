/*
** EPITECH PROJECT, 2018
** CPool
** File description:
** my_params_to_list
*/

#include "include/mylist.h"
#include <stdlib.h>

linked_list_t *my_params_to_list(int ac, char * const *av)
{
    linked_list_t *list = NULL;
    for (int i = 0; i < ac; i ++) {
        list = insert(av[i], list);
    }
    return (list);
}
