/*
** EPITECH PROJECT, 2018
** CPool
** File description:
** my_swap
*/

void my_swap(int *a, int *b)
{
    int tmp;
    tmp = *b;
    *b = *a;
    *a = tmp;
}
