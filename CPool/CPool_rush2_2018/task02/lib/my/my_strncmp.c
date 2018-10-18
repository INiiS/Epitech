/*
** EPITECH PROJECT, 2018
** CPool_Day06
** File description:
** my_strncmp
*/

int my_strncmp(char const *s1, char const *s2, int n)
{
    int i = 0;
    while (s1[i] != '\0' && s2[i] != '\0' && i < n) {
        if ((int) s1[i] > (int)s2[i]) {
            return (s1[i] - s2[i]);
        } else if ((int) s1[i] < (int)s2[i]) {
            return (s1[i] - s2[i]);
        }
        i++;
    }
    return (0);
}
