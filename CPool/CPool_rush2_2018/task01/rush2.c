/*
** EPITECH PROJECT, 2018
** CPool_rush2_2018
** File description:
** rush2.c
*/

#include "include/my.h"

int count_occurences(char *str, char c)
{
    int i = 0;
    int counter = 0;
    while (str[i] != '\0') {
        if (str[i] == c) {
            counter++;
        }
        i++;
    }
    return (counter);
}

float my_calc_freq(int len_str, int occurences)
{
    float value = (float)occurences / (float)len_str;
    return (value * 100);
}

void display(char letter, int occurences, float frequency)
{
    int decimal = ((frequency * 100) - (((int)frequency * 100)));
    my_putchar(letter);
    my_putchar(':');
    my_put_nbr(occurences);
    my_putchar('\n');
}

int rush2(int argc, char **argv)
{
    if (argc < 3) {
        my_put_strerr("Trop peu d'arguments. Error 84.\n");
        return (84);
    }
    char letter = convert_tolower(argv[2][0]);
    int occ = count_occurences(convert_str_tolower(argv[1]), letter);
    float freq = my_calc_freq(my_strlen_trimmed(argv[1]), occ);
    display(letter, occ, freq);
    return (0);
}

int main(int argc, char **argv)
{
    rush2(argc, argv);
}
