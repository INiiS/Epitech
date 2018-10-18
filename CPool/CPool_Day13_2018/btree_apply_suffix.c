/*
** EPITECH PROJECT, 2018
** CPool
** File description:
** btree_apply_prefix
*/

#include "include/btree.h"
#include <stddef.h>

void btree_apply_suffix(btree_t *root, int (*applyf)(void *)){
    if(root->item != NULL) {
            (*applyf)(root->item);
    }
    if(root->right != NULL) {
        btree_apply_suffix(root->right, applyf);
    }
    if(root->left != NULL) {
        btree_apply_suffix(root->left, applyf);
    }
}
