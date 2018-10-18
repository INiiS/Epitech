/*
** EPITECH PROJECT, 2018
** CPool_Day08
** File description:
** my_str_to_word_array
*/

int is_alphanum(char c)
{
    if (c >= '0' && c <= '9' || c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z') {
        return (1);
    }
    return (0);
}

int count_words(char *str)
{
    int size = strlen(str);
    int wc = 0;
    int in_word;
    for (int i = 0; i < size; i++) {
        if (!(in_word) && is_alphanum(str[i])) {
            in_word = 1;
            wc ++;
        } 
        if (in_word && !(is_alphanum(str[i + 1]))) {
            in_word = 0;
        }
    }
    return (wc);
}

int len_word(char *str) 
{
    int i = 0;
    int counter;
    while (str[i] != '\0' && is_alphanum(str[i])) {
        counter++;
        i++;
    }
    return (counter);
}

char **my_str_to_array(char *str)
{
    int j = 0;
    int i = 0;
    char **str_array;
    int len = 0;

    str_array = malloc((count_words(str) + 1) * sizeof(char *));
    while (str[i]) {
        if (is_alphanum(str[i])) {
            len = len + 1;
            if (is_alphanum(str[i]) && !(is_alphanum(str[i + 1]))) {
                return (0);
}
}
}
}
int main(void)
{
    int cw;
    char *str = "";
    cw = len_word(str);
    printf("%i", cw);
}
