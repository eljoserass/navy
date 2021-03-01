/*
** EPITECH PROJECT, 2020
** my_isnum
** File description:
** check if a character is a number
*/

#include "../include/clib.h"

int my_isnum(char ch)
{
    if (ch < '1' || ch > '8')
        return (0);
    return (1);
}