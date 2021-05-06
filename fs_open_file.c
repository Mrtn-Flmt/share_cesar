/*
** EPITECH PROJECT, 2020
** B-CPE-110-LIL-1-1-BSQ-simon.auduberteau
** File description:
** fs_open_file
*/

#include "my.h"
#include "stumper.h"

int fs_open_file(char const *filepath)
{
    int fd = open(filepath, O_RDONLY);

    if (fd == -1) {
        return (-1);
    } else
        return (fd);
}