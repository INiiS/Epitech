/*
** EPITECH PROJECT, 2018
** my_puterr
** File description:
** 
*/

int my_put_charerr(char c)
{
    write(2, &c, 1);
}

int my_put_strerr(char const *str)
{
    char *ptr = str;
    int counter = 0;
    while (str[counter] != '\0') {
        my_put_charerr(str[counter]);
        counter++;
    }
}
