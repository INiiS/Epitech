/*
** EPITECH PROJECT, 2018
** my_strlen
** File description:
**
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
