/*
** EPITECH PROJECT, 2020
** B-CPE-110-LIL-1-1-BSQ-simon.auduberteau
** File description:
** fs_understand_return_of_read
*/

#include "stumper.h"
#include "my.h"

int fs_read_file(int fd, char *buffer, int size)
{
    int is_read = read(fd, buffer, size);

    if (is_read == -1) {
        return (84);
    }
    if (is_read == 0)
        return (0);
    return (0);
}