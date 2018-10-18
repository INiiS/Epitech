/*
** EPITECH PROJECT, 2018
** CPool_Day05
** File description:
** my_compute_square_root
*/

int my_compute_square_root(int nb)
{
    int compteur = 0;
    if (nb < 0) {
        return (0);
    }
    while (compteur * compteur != nb) {
        if (compteur * compteur > nb) {
            return (0);
        }
        compteur++;
    }
    return (compteur);
}
