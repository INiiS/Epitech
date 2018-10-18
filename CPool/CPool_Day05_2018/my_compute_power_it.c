/*
** EPITECH PROJECT, 2018
** CPool_Day05
** File description:
** my_compute_power_it
*/

int my_compute_power_it(int nb, int p)
{
    if (p < 0) {
        return (0);
    } else if (p == 0){
        return (1);
    }
    unsigned int res = 1;
    for (int i = 0; i < p; i++){
        res *= nb;
    }
    return (res);
}
