/*
** EPITECH PROJECT, 2018
** CPool
** File description:
** my_params_to_list
*/

#include "include/mylist.h"
#include <stdlib.h>

void print_list(linked_list_t *list)
{
    while (list != NULL) {
        my_putstr(list->data);
        my_putchar('\n');
        list = list->next;  
    }
}

linked_list_t *insert(char *data, linked_list_t *list)
{
    linked_list_t *new;
    new = malloc(sizeof(linked_list_t));
    new->data = data;
    new->next = list;   
    return (new);
}

int my_list_size(linked_list_t const *begin)
{
    int size = 0;
    while (begin != NULL) {
        size += 1;
        begin = begin->next;
    }
    return (size);
}
