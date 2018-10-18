/*
** EPITECH PROJECT, 2018
** my_evil_str
** File description:
** 
*/

char *my_evil_str(char *str)
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
