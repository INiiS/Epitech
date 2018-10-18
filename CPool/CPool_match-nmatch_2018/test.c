/*
** EPITECH PROJECT, $YEAR
** $NAME_OF_THE_PROJECT
** File description: 
** No file there, just an epitech header example
*/

int main(int argc, char **argv)
{
    my_putstr_r(argv[0]);
}

void my_putchar(char c)
{
    write (1, &c, 1);
}


void my_putstr_r(char *str)
{
    if (str[0] != '\0'){
        my_putchar(str[0]);
    }
    else{
        exit(0);
    }
        my_putstr_r(str + 1);
    
}
