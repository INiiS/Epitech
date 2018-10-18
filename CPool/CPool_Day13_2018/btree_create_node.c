/*
** EPITECH PROJECT, 2018
** CPool
** File description:
** btree_create_node
*/

#include "include/btree.h"
#include <stdlib.h>
#include <stddef.h>

btree_t *btree_create_node(void *item)
{
    btree_t *ptr = malloc(sizeof(btree_t));
    ptr->item = item;
    ptr->left = NULL;
    ptr->right = NULL;
    return (ptr);
}
