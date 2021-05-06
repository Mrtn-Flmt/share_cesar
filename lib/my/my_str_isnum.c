/*
** EPITECH PROJECT, 2020
** B-CPE-100-LIL-1-1-cpoolday06-simon.auduberteau
** File description:
** my_str_isnum
*/

int my_str_isnum(char const *str)
{
    int i = 0;
    if (str[0] == '\0')
        return (1);
    if (str[0] == '-')
        i = 1;
    for (; str[i] != '\0'; i++) {
        if (str[i] >= '0' && str[i] <= '9');
        else
            return 1;
    }
    return 0;
}