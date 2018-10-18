/*
** EPITECH PROJECT, 2018
** CPool_Day03
** File description:
** my_put_nbr
*/

int my_put_nbr(int nb)
{
    if (nb == -2147483648) {
        my_putstr("-2147483648");
        return (0);
    }
    else if (nb < 0) {
        my_putchar('-');
        nb = nb * (-1);
    }
    if (nb <= 9) {
        my_putchar(nb + '0');
    } else if (nb > 9) {
        my_put_nbr(nb / 10);
        int n = nb % 10;
        my_putchar(n + '0');
    }
    return (0);
}
