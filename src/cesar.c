/*
** EPITECH PROJECT, 2020
** cesar.c
** File description:
** cesar
*/

#include "stumper.h"
#include "my.h"

void change_letter(char *str, int n)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z')
            change_maj(str, i, n);
        if (str[i] >= 'a' && str[i] <= 'z')
            change_min(str, i, n);
    }
}

int cesar(char *s, int n, int status)
{
    char *str = NULL;

    if (status == 1)
        str = get_content(s);
    else {
        str = malloc(sizeof(char) * strlen(s) + 1);
        for (int i = 0; s[i] != '\0'; i++)
            str[i] = s[i];
        str[strlen(s)] = '\0';
    }
    change_letter(str, n);
    print_in_file(str);
    free(str);
    return (0);
}