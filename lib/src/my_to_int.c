/*
** EPITECH PROJECT, 2020
** my to int
** File description:
** conert  string to int
*/

#include "../include/clib.h"

int convert_to_int(char const *str)
{
    int n = 0;
    int mul = 1;
    int i = my_strlen(0, str, '\0') - 1;

    while (i >= 0) {
        n += (str[i] - 48) * mul;
        mul *= 10;
        i--;
    }
    return (n);
}

int my_to_int(char const *str)
{
    if (str == NULL)
        return (0);
    else
        return (convert_to_int(str));
}