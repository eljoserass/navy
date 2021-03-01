/*
** EPITECH PROJECT, 2020
** char flags
** File description:
** my printf flags for nan characters
*/

#include "../include/clib.h"

void my_va_putchar(va_list ap)
{
    char c = va_arg(ap, int);
    my_putchar(c);
}

void my_va_putstr(va_list ap)
{
    char *s = va_arg(ap, char *);
    my_putstr(s);
}

void my_va_putstroct(va_list ap)
{
    char *s = va_arg(ap, char *);
    my_putstr_octal(s);
}

void my_va_putprc(va_list ap)
{
    my_putchar('%');
}