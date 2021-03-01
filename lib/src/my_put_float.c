/*
** EPITECH PROJECT, 2020
** my_putfloat
** File description:
** print a float
*/

#include "../include/clib.h"

void my_put_float(double nbr)
{
    float n = nbr - (int) (nbr / 1);
    int i = 0;

    my_put_nbr((int) nbr);
    my_putchar('.');
    while (i++ < 6) {
        n *= 10;
    }
    if (n - (int) (n / 1) >= 0.5)
        n++;
    my_put_nbr((int) n);
}