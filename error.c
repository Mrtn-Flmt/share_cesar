/*
** EPITECH PROJECT, 2021
** B-CPE-210-LIL-2-1-stumper3-martin.flament
** File description:
** error
*/

#include "my.h"
#include "stumper.h"

int check_fd(int fd, char *av)
{
    int rd = 0;
    char *buff = NULL;
    struct stat st;


    stat(av, &st);
    buff = malloc(sizeof(char) * st.st_size + 1);
    rd = fs_read_file(fd, buff, st.st_size);
    if (rd == -1) {
        write(2, "Error: can not read the file\n", 29);
        free(buff);
        return -1;
    }
    free(buff);
    return 0;
}

int check_file(char *av)
{
    int fd = 0;
    int ret = 0;

    fd = fs_open_file(av);
    if (fd == -1) {
        write(2, "Error: can not open the file\n", 29);
        return 84;
    }
    ret = check_fd(fd, av);
    if (ret == -1) {
        write(2, "Error: Can not read any files\n", 30);
        return 84;
    } else
        return 0;
}

int error(int ac, char **av)
{
    if (ac != 4) {
        write(2, "Error: incorrect number of arguments\n", 38);
        return 84;
    }
    if (my_str_isnum(av[1]) != 0 && my_str_isnum(av[2]) != 0 &&
        my_str_isnum(av[3]) != 0 || my_str_isnum(av[1]) == 0 &&
        my_str_isnum(av[2]) == 0 && my_str_isnum(av[3]) != 0) {
        write(2, "Error: Incorrect arguments\n", 28);
        return 84;
    }
    if (strcmp(av[1], "-f") != 0 && strcmp(av[1], "-s") != 0) {
        write(2, "Error: wrong option\n", 20);
        return 84;
    }
    if (strcmp(av[1], "-f") == 0)
        return (check_file(av[2]));
    else
        return 0;
}