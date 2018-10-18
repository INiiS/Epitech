/*
** EPITECH PROJECT, 2018
** CPool
** File description:
** my_revstr
*/

char *my_revstr(char *str)
{
    int len = my_strlen(str) - 1;
    int counter = 0;
    char c;
    while (counter < len){
        c = str[counter];
        str[counter] = str[len];
        str[len] = c;
        counter++;
        len--;
    }
    return (str);
}
