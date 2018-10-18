/*
** EPITECH PROJECT, 2018
** CPool
** File description:
** btree_insert_data
*/

#include "include/btree.h"
#include <stddef.h>

void btree_insert_data(btree_t **root, void *item, int(*cmpf)()){
    btree_t *node;

    node = (*root)->right;
    if ((*cmpf)((*root)->item, item) < 0){
        node = (*root)->left;
    }
    if (node != NULL) {
        btree_insert_data(&node, item, cmpf);
    } else {
        btree_create_node(item);
    }
}
