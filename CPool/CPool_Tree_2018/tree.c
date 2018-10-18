/*
** EPITECH PROJECT, 2018
** CPool_Tree
** File description:
** 
*/


int draw_triangles(int index, int nb_chars, int nb_lines)
{
    while (index < nb_lines) {
        for (int i = 0; i < nb_chars; i++) {
            putchar('*');
        }
        putchar('\n');
        nb_chars += 2;
        index += 1;
    }
    
    return (nb_chars - 2);
}

void tree(int size)
{
    int index = 0;
    int char_drawn = 1;
    int nb_tr = size;
    int nb_lines = 4;
    for (int i = 0; i < nb_tr; i++) {
        char_drawn = draw_triangles(index, char_drawn, nb_lines);
            char_drawn -= 2;
            nb_lines++;
            if(nb_lines > 6) {
                char_drawn -= 2;
            }

    }
    trunk(size);
    
}

void trunk(int size)
{
    int width;
    if (size % 2 == 1) {
        width = size;
    } else {
        width = size + 1;
    }

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < width; j++) {
            putchar('|');
        }
        putchar('\n');
    }
}

int main(void)
{
    tree(2);
}
