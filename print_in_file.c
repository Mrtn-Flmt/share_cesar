/*
** EPITECH PROJECT, 2021
** B-CPE-210-LIL-2-1-stumper3-martin.flament
** File description:
** print_in_file
*/

#include "stumper.h"

void print_in_file(char *str)
{
    chmod("crypt", S_IWUSR | S_IRUSR);
    FILE *file = fopen("crypt", "w+");
    fprintf(file, "%s", str);
    fclose(file);
    chmod("crypt", S_IRUSR | S_IRGRP | S_IROTH);
}