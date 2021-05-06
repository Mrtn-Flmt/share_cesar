/*
** EPITECH PROJECT, 2021
** B-CPE-210-LIL-2-1-stumper3-martin.flament
** File description:
** minuscule
*/

#include "my.h"
#include "stumper.h"

void pos_min(int ascii, int n, int i, char *str)
{
    int a = 'a';
    int tmp = 0;
    char c = 'a';

    if ((ascii + n) > 'z') {
        ascii += n;
        tmp = ('z' - ascii) * -1;
        c = ('a' + (tmp - 1));
        str[i] = c;
    } else {
        c = (ascii + n);
        str[i] = c;
    }
}

void neg_min(int ascii, int n, int i, char *str)
{
    int z = 'z';
    int tmp = 0;
    char c = 'a';

    if ((ascii + n) < 'a') {
        ascii += n;
        tmp = ('a' - ascii);
        c = ('z' - (tmp - 1));
        str[i] = c;
    } else {
        c = (ascii + n);
        str[i] = c;
    }
}

void change_min(char *str, int i, int n)
{
    int ascii = str[i];
    int a = 'a';
    int z = 'z';
    int tmp = 0;

    if (n > 0)
        pos_min(ascii, n, i, str);
    else
        neg_min(ascii, n, i, str);
}