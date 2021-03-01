/*
** EPITECH PROJECT, 2020
** my_putnbr_base
** File description:
** Print number in base
*/

#include "../include/clib.h"

void transform_to_base(int nbr, int base)
{
    int mod = 0;
    char array[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    if (nbr > base - 1)
        transform_to_base(nbr / base, base);
    mod = nbr % base;
    if (mod > 9)
        my_putchar(array[mod % base - 10]);
    else
        my_putchar(mod + 48);
}

int find_base(char const *str)
{
    int a = 0;
    int i = 0;

    while (str[i]) {
        if (str[i] < 48 || str[i] > 57)
            return (0);
        i++;
    }
    if (i == 1) {
        a += str[0] - 48;
    } else if (i == 2) {
        a = (a + str[0] - 48) * 10;
        a += str[1] - 48;
    } else
        return (0);
    return (a);
}

int my_putnbr_base(int nbr, char const *base)
{
    int baseint = find_base(base);

    if (nbr < 0) {
        my_putchar('-');
        nbr = -nbr;
    }
    if (baseint < 2 || baseint > 36)
        return (nbr);
    transform_to_base(nbr, baseint);
    return (nbr);
}
