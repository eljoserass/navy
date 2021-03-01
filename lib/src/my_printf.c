/*
** EPITECH PROJECT, 2020
** my_printf.c
** File description:
** my_printf function
*/

#include "../include/clib.h"
#include "../../include/navy_macro.h"

void select_flag(t_flags_struct *arr)
{
    arr[0].flag = 'i';
    arr[0].ptr = &my_va_putnbr;
    arr[1].flag = 'd';
    arr[1].ptr = &my_va_putnbr;
    arr[2].flag = 'x';
    arr[2].ptr = &my_va_puthexa;
    arr[3].flag = 'o';
    arr[3].ptr = &my_va_putoctal;
    arr[4].flag = 'b';
    arr[4].ptr = &my_va_putbinary;
    arr[5].flag = 'c';
    arr[5].ptr = &my_va_putchar;
    arr[6].flag = 's';
    arr[6].ptr = &my_va_putstr;
    arr[7].flag = 'S';
    arr[7].ptr = &my_va_putstroct;
    arr[8].flag = '%';
    arr[8].ptr = &my_va_putprc;
    arr[9].ptr = NULL;
}

t_flags_struct *put_arrays(void)
{
    t_flags_struct *arr = malloc(sizeof(t_flags_struct) * 11);

    if (arr == NULL)
        return (NULL);
    select_flag(arr);
    return (arr);
}

void check_flags(va_list ap, char ch, t_flags_struct *arr)
{
    int i = 0;

    while (arr[i].ptr != NULL) {
        if (ch == arr[i].flag)
            arr[i].ptr(ap);
        i++;
    }
}

int my_printf(char *str, ...)
{
    va_list ap;
    t_flags_struct *arr = put_arrays();

    if (my_strlen(0, str, '\0') == 0)
        return (EXIT_ERROR);
    va_start(ap, str);
    while (*str) {
        if (*str == '%') {
            *str++;
            check_flags(ap, *str, arr);
        } else {
            my_putchar(*str);
        }
        *str++;
    }
    va_end(ap);
    free (arr);
    return (EXIT_SUCCESS);
}