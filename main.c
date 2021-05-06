/*
** EPITECH PROJECT, 2021
** B-CPE-210-LIL-2-1-stumper3-martin.flament
** File description:
** main
*/

#include "my.h"
#include "stumper.h"

int main(int ac, char **av)
{
    if (error(ac, av) != 0)
        return 84;
    if (strcmp(av[1], "-f") == 0)
        return (cesar(av[2], my_getnbr(av[3]), 1));
    else
        return (cesar(av[2], my_getnbr(av[3]), 0));
}