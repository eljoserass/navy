/*
** EPITECH PROJECT, 2020
** digit flags
** File description:
** my printf flags for digit chars
*/

#include "../include/clib.h"

void my_va_putnbr(va_list ap)
{
    int d = va_arg(ap, int);
    my_put_nbr(d);
}

void my_va_puthexa(va_list ap)
{
    int d = va_arg(ap, int);
    my_putnbr_base(d, "16");
}

void my_va_putoctal(va_list ap)
{
    int d = va_arg(ap, int);
    my_putnbr_base(d, "8");
}

void my_va_putbinary(va_list ap)
{
    int d = va_arg(ap, int);
    my_putnbr_base(d, "2");
}