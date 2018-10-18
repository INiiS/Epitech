/*
** EPITECH PROJECT, 2018
** CPool
** File description:
** btree.h
*/

typedef struct btree
{
    struct btree *left;
    struct btree *right;
    void *item;
} btree_t;

#ifndef MY_H
#define MY_H
#include <stddef.h>
btree_t *btree_create_node(void *item);
void btree_apply_prefix(btree_t *root, int (*applyf)(void *));
void btree_apply_infix(btree_t *root, int (*applyf)(void *));
void btree_apply_suffix(btree_t *root, int (*applyf)(void *));
void btree_insert_data(btree_t **root, void *item, int (*cmpf)());
void *btree_search_item(btree_t const *root, void const *data_ref, int (*cmpf)());
size_t max(size_t first_number, size_t second_number);
size_t btree_level_count(btree_t const *root);
#endif
