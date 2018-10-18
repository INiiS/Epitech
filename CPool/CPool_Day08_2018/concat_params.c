/*
** EPITECH PROJECT, 2018
** CPool_Day08
** File description:
** concat_params
*/

#include <unistd.h>
char *concat_params(int argc, char **argv)
{
    int size;
    int i;
    char *ret;
    size = 0;
    i = 0;
    while (i < argc) {
        size = size + my_strlen(argv[i++]);
    }
    ret = malloc(sizeof(char) * size + 1);
    i = 0;
    while (i < argc) {
        my_strcat(ret, argv[i]);
        if (i < argc -1) {
            my_strcat(ret, "\n");
        }
        i = i + 1;
        
    }
    return (ret);
}
