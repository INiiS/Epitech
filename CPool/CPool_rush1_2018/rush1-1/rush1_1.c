/*
** EPITECH PROJECT, 2018
** CPool_rush1
** File description:
** rush1-1
*/

void my_printline(char first, char last, char mid, int size)
{
    my_putchar(first);
    for (int counter = 2; counter < size; counter++) {
        my_putchar(mid);
    }
    if (size > 1) {
        my_putchar(last);
    }
    my_putchar('\n');
}

int checkvalues(int x)
{
    if (x <= 0) {
        return (1);
    }
    return (0);
}

void rush(int x, int y)
{
    if (checkvalues(x) == 1 || checkvalues(y) == 1) {
        my_put_strerr("Invalid size\n");
        return;
    }
    for (int i = 0; i < y; i++) {
        if (i == 0 || i == (y-1)) {
            my_printline('o', 'o', '-', x);
        } else {
            my_printline('|', '|', ' ', x);
        }
    }
}
