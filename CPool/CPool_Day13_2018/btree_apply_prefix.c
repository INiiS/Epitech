/*
** EPITECH PROJECT, 2018
** CPool
** File description:
** btree_apply_prefix
*/

#include "include/btree.h"
#include <stddef.h>

void btree_apply_prefix(btree_t *root, int (*applyf)(void *))
{
    if(root->item != NULL) {
            (*applyf)(root->item);
    }
    if(root->left != NULL) {
        btree_apply_prefix(root->left, applyf);
    }
    if(root->right != NULL) {
        btree_apply_prefix(root->right, applyf);
    }
}
