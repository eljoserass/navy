/*
** EPITECH PROJECT, 2020
** my put str octal
** File description:
** Print non printable chars in octal
*/

#include "../include/clib.h"

int find_octal(char ch)
{
    int mult = 1;
    int oct = 0;
    int nb = ch;

    while (nb > 0) {
        oct += nb % 8 * mult;
        nb /= 8;
        mult *= 10;
    }
    return (oct);
}

void print_octal(char ch)
{
    int n = find_octal(ch);

    my_putchar('\\');
    my_put_nbr(n / 100);
    my_put_nbr(n / 10 % 10);
    my_put_nbr(n % 10);
}

void my_putstr_octal(char const *str)
{
    while (*str) {
        if (my_str_isprintable(*str) == 0)
            print_octal(*str);
        else
            my_putchar(*str);
        *str++;
    }
}