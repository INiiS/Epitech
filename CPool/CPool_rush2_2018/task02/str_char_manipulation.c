/*
** EPITECH PROJECT, 2018
** CPool
** File description:
** functions that handle conversions
*/

char convert_tolower(char c)
{
    if (c >= 'A' && c <= 'Z'){
        c = c + 32;
    }
    return (c);
}

char *convert_str_tolower(char *str)
{
    int i = 0;
    while (str[i] != '\0') {
        str[i] = convert_tolower(str[i]);
        i++;
    }
    return (str);
}

int my_strlen_trimmed(char *str)
{
    int i = 0;
    int count = 0;
    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z') {
            count++;
        }
        i++;
    }
    return (count);
}
