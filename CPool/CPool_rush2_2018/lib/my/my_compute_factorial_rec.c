/*
** EPITECH PROJECT, 2018
** CPool_Day05
** File description:
** my_compute_factorial_rec
*/

int my_compute_factorial_rec(int nb)
{
    if (nb == 0) {
        return (1);
    } else if (nb < 0 || nb > 12) {
        return (0);
    }
    return (nb * my_compute_factorial_rec(nb - 1));
}
