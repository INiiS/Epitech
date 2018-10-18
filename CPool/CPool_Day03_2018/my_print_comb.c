/*
** EPITECH PROJECT, 2018
** my_print_comb
** File description:
** 
*/

int my_print_comb(void)
{
    for (int i = 12; i <= 788; i++) {
        unsigned int units = i % 10;
        unsigned int tens = i / 10 % 10;
        unsigned int hundreds = i / 10 / 10 %10;
        if (hundreds < tens && tens < units) {
            my_putchar(hundreds + 48);
            my_putchar(tens + 48);
            my_putchar(units + 48);
            my_putchar(',');
            my_putchar(' ');
        }
    }
    my_putchar('7');
    my_putchar('8');
    my_putchar('9');
}
