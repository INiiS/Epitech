/*
** EPITECH PROJECT, 2018
** CPool_Day06
** File description:
** my_strcmp
*/

int my_strcmp(char const *s1, char const *s2)
{
    int i = 0;
    while (s1[i] != '\0' && s2[i] != '\0') {
        if ((int) s1[i] > (int)s2[i]) {
            return (1);
        }
        else if ((int) s1[i] < (int)s2[i]) {
            return (-1);
        }
        i++;
    }
    return (0);
}
