/*
** EPITECH PROJECT, 2018
** CPool
** File description:
** btree_search_item
*/

#include "include/btree.h"
#include <stddef.h>

void *btree_search_item(
        btree_t const *root, void const *data_ref, int (*cmpf)()){
    if (root == NULL) {
        return (NULL);
    }
    if (root->left != NULL) {
        btree_search_item(root->left, data_ref, cmpf);
    }
    if (cmpf(root->item, data_ref) == 0) {
        return (&root);
    }
    if (root->right != NULL) {
        btree_search_item(root->right, data_ref, cmpf);
    }
    return (NULL);
}
