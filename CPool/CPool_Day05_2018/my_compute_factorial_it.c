/*
** EPITECH PROJECT, 2018
** CPool_Day05
** File description:
** my_compute_factorial_it
*/

int my_compute_factorial_it(int nb)
{
    int res = nb;
    if (nb == 0) {
        return (1);
    }
    else if (nb < 0 || nb > 12) {
        return (0);
    }
    for (int i = nb - 1; i > 0; i--) {
        res = res * i;
    }
    return (res);
}
