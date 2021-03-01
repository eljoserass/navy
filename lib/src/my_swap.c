/*
** EPITECH PROJECT, 2020
** my_swap
** File description:
** swap two characters
*/

void my_putchar(char c);

void my_swap(int *a, int *b)
{
    int aux = *a;
    *a = *b;
    *b = aux;
}
