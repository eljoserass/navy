/*
** EPITECH PROJECT, 2020
** my_strlen
** File description:
** check string length
*/

#include "../include/clib.h"

int my_strlen(int n, char const *str, char const ch)
{
    int i = n;

    while (str[i] && str[i] != ch) {
        i++;
    }
    return (i);
}
