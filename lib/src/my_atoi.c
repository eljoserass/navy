/*
** EPITECH PROJECT, 2020
** my_atoi
** File description:
** conert from string to int
*/

#include "../include/clib.h"

int my_atoi(char *str)
{
    int num = 0;
    int i = 0;
    int neg = 1;

    if (str[i] == '-') {
        neg = -1;
        i++;
    }
    while (str[i]) {
        num = num * 10 + (str[i++] - 48);
    }
    return (num * neg);
}