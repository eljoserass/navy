/*
** EPITECH PROJECT, 2020
** my_str_isprintable
** File description:
** Check if string is printable
*/

#include "../include/clib.h"

int my_str_isprintable(char const ch)
{
    int i = 0;
    int alpha = 1;

    if (ch < 32 || ch > 126)
        alpha = 0;
    return (alpha);
}
