/*
** EPITECH PROJECT, 2018
** my_swap
** File description:
** 
*/

void my_swap(int *a, int *b)
{
    int tmp;
    tmp = *b;
    *b = *a;
    *a = tmp;
}
