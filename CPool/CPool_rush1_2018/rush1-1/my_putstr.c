/*
** EPITECH PROJECT, 2018
** my_putstr
** File description:
** 
*/

int my_putstr_b(char const *str)
{
    char *ptr = str;
    int counter = 0;
    while (str[counter] != '\0') {
        my_putchar(str[counter]);
        counter++;
    }
}
