/*
** EPITECH PROJECT, 2018
** Cpool_Day07
** File description:
** 
*/

int main(int argc, char** argv)
{
    for (int i = 0; i < argc; i++) {
        my_putstr(argv[i]);
        my_putchar('\n');
    }
    return (0);
}
