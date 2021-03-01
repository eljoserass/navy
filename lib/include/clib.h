/*
** EPITECH PROJECT, 2020
** library in c with my_printf
** File description:
** #include "clib.h" for use it
*/

#ifndef CLIB_H_
#define CLIB_H_

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <signal.h>

int my_find_prime_sup(int);
int my_getnbr(char const *);
int my_isneg(int);
void my_putchar(char);
int my_put_nbr(int);
int my_putstr(char const *);
int my_putstr(char const *);
void my_sort_int_array(int *, int);
char *my_strcapitalize(char *);
char *my_strcat(char *, char const *);
int my_strcmp(char const *, char const *);
char *my_strcpy(int , int, char *, char const *);
int my_str_islower(char const *);
int my_str_isnum(char const *);
int my_str_isprintable(char const);
int my_str_isupper(char const *);
int my_strlen(int, char const *, char const);
char *my_strlowcase(char *);
char *my_strncat(char *, char const *, int);
int my_strncmp(char const *, char const *, int);
char *my_strncpy(char *, char const *, int);
char *my_strstr(char *, char const *);
char *my_strupcase(char *);
void my_swap(int *, int *);
int my_char_isalpha(char);
int my_contains(char *, char);
char my_revstr(char *);
int my_to_int(char const *);
int min(int, int);
int my_atoi(char *);
char *open_file(char *);
int my_isnum(char);

//MY_PRINTF

typedef struct s_flags_struct {
    void (*ptr)(va_list);
    char flag;
} t_flags_struct;

int my_printf(char *, ...);
int my_putnbr_base(int, char const *);
void my_put_float(double);
void my_putstr_octal(char const *);
void digit_flags(va_list, char);
void char_flags(va_list, char);
void my_va_putchar(va_list);
void my_va_putstr(va_list);
void my_va_putstroct(va_list);
void my_va_putprc(va_list);
void my_va_putnbr(va_list);
void my_va_puthexa(va_list);
void my_va_putoctal(va_list);
void my_va_putbinary(va_list);

#endif