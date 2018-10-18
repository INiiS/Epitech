/*
** EPITECH PROJECT, 2018
** CPool
** File description:
** btree_apply_infix
*/

#include "include/btree.h"
#include <stddef.h>

void btree_apply_infix(btree_t *root, int (*applyf)(void *)){
    if (root->left != NULL) {
        btree_apply_infix(root->left, applyf);
    }
    (*applyf)(root->item);
    if(root->right != NULL) {
        btree_apply_infix(root->right, applyf);
    }
}
