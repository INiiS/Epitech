/*
** EPITECH PROJECT, 2018
** CPool_rush1
** File description:
** rush1-5
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

void hor_line(char c, int size)
{
    for (int i = 0; i < size; i ++) {
        my_putchar(c);
    }
    my_putchar('\n');
}

void ver_line(char c, int size)
{
    for (int i = 0; i < size; i++) {
        my_putchar(c);
        my_putchar('\n');
    }
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
    if (y == 1) {
        hor_line('B', x);
        return;
    } else if (x == 1) {
        ver_line('B', y);
        return;
    }

    for (int i = 1; i <= y; i ++) {
        if (i == 1) {
            my_printline('A', 'C', 'B', x);
        } else if (i == y) {
            my_printline('C', 'A', 'B', x);
        } else {
            my_printline('B', 'B', ' ', x);
        }
    }
}
