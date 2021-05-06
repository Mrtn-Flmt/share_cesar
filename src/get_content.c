/*
** EPITECH PROJECT, 2020
** get_content.c
** File description:
** get file's content
*/

#include "my.h"
#include "stumper.h"

char *get_content(char *filepath)
{
    int fd;
    char *content;
    struct stat my_struct;

    fd = open(filepath, O_RDONLY);
    if (fd == -1)
        return (NULL);
    stat(filepath, &my_struct);
    content = malloc(sizeof(char) * (my_struct.st_size + 1));
    read(fd, content, my_struct.st_size);
    content[my_struct.st_size] = '\0';
    close(fd);
    return (content);
}