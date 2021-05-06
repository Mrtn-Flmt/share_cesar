/*
** EPITECH PROJECT, 2020
** majuscule.c
** File description:
** majuscule
*/

void pos_maj(int ascii, int n, int i, char *str)
{
    int a = 'A';
    int tmp = 0;
    char c = 'a';

    if ((ascii + n) > 'Z') {
        ascii += n;
        tmp = ('Z' - ascii) * -1;
        c = ('A' + (tmp - 1));
        str[i] = c;
    } else {
        c = (ascii + n);
        str[i] = c;
    }
}

void neg_maj(int ascii, int n, int i, char *str)
{
    int z = 'Z';
    int tmp = 0;
    char c = 'A';

    if ((ascii + n) < 'A') {
        ascii += n;
        tmp = ('A' - ascii);
        c = ('Z' - (tmp - 1));
        str[i] = c;
    } else {
        c = (ascii + n);
        str[i] = c;
    }
}

void change_maj(char *str, int i, int n)
{
    int ascii = str[i];
    int a = 'A';
    int z = 'Z';
    int tmp = 0;

    if (n > 0) {
        pos_maj(ascii, n, i, str);
    } else {
        neg_maj(ascii, n, i, str);
    }
}