/*
** EPITECH PROJECT, 2018
** CPool
** File description:
** btree_level_count
*/

#include "include/btree.h"

size_t max(size_t first_number, size_t second_number)
{
    if (first_number >= second_number) {
        return (first_number);
    } else {
        return (second_number);
    }
}

size_t btree_level_count(btree_t const *root)
{
    if (root == NULL) {
        return (0);
    }
    return (1 + max(btree_level_count(root->left), 
                btree_level_count(root->right)));

}
