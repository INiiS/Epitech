/*
** EPITECH PROJECT, 2018
** CPool_Day05
** File description:
** my_is_prime
*/

int my_is_prime(int nb)
{
    if ((nb <= 1) || (nb % 2 == 0 && nb > 2)) {
        return (0);
    }

    for (int i = 3; i < nb / 2; i +=2) {
        if (nb % i == 0) {
            return (0);
        }
    }
    return (1);
}
