/*
** EPITECH PROJECT, 2018
** CPool_Day07
** File description:
** my_rev_params
*/

int main(int argc, char **argv)
{
    for (int i = argc; i > 0; i--){
        my_putstr(argv[i-1]);
        my_putchar('\n');
    }
}
