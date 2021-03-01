/*
** EPITECH PROJECT, 2020
** my_strcpy
** File description:
** Copy string
*/

#include "../include/clib.h"

char *my_strcpy(int start, int end, char *dest, char const *str)
{
    int i = start;
    int j = 0;
    int size = my_strlen(0, str, '\0');

    dest = malloc(sizeof(char) * size + 1);
    if (end == 0)
        end = size - 1;
    while (str[i] && i < end) {
        dest[j] = str[i];
        j++;
        i++;
    }
    dest[i] = '\0';
    return (dest);
}
