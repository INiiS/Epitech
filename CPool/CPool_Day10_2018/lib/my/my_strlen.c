/*
** EPITECH PROJECT, 2018
** CPool
** File description:
** my_strlen
*/

int my_strlen(char const *str)
{
    char *ptr = str;
    int i = 0;
    while (str[i] != '\0') {
        i++;
    }
    return (i);
}
