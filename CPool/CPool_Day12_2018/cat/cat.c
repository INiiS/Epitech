/*
** EPITECH PROJECT, 2018
** CPool
** File description:
** cat
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>
#include <unistd.h>
#include "include/my.h"

int check_errors(int fd, char *program, char *to_test) {
    if (errno == ENOENT) {
        write(2, program, my_strlen(program) + 1);
        write(2, " : ", 4);
        write(2, to_test, my_strlen(to_test) + 1);
        write(2, " : No such file or directory\n", 30);
    }
    if(errno == EACCES) {
        write(2, program, my_strlen(program) + 1);
        write(2, " : ", 4);
        write(2, to_test, my_strlen(to_test) + 1);
        write(2, " : Permission denied\n", 22); 
    }
    if(errno == EISDIR) {
        write(2, program, my_strlen(program) + 1);
        write(2, " : ", 4);
        write(2, to_test, my_strlen(to_test) + 1);
        write(2, "Is a directory\n", 15);
    }
    return (84);
}

void cat_no_args(int argc, int size, char *buffer, int buffersize)
{
    while (argc == 1) {
        if(size == 0)
            return;
        size = read(0, buffer, buffersize);
        write(1, buffer, size);
    }
}

int my_cat(int argc, char **argv)
{
        int fd;
        int buffersize = 30000;
        char buffer[buffersize];
        int size;

        if(argc > 1) {
            for (int i = 1; i < argc; i++) {
                fd = open(argv[i], O_RDWR);
                if (fd == -1) {
                    return (check_errors(fd, argv[0], argv[i]));
                }
                size = 1;
                while (size != 0) {
                    size = read(fd, buffer, buffersize);
                    write(1, buffer, size);
                }
            }
            close(fd);
        }
    cat_no_args(argc, size, buffer, buffersize);
}

int main(int argc, char **argv)
{
    my_cat(argc, argv);
}
