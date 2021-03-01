/*
** EPITECH PROJECT, 2020
** my_strcat
** File description:
** Concatenate 2 strings
*/

#include "../include/clib.h"

char *my_strcat(char *dest, char const *src)
{
    int i = my_strlen(0, dest, '\0');
    int j = 0;
    char *result = malloc(sizeof(char) * i * my_strlen(0, src, '\0') + 2);

    while (src[j]) {
        dest[i] = src[j];
        i++;
        j++;
    }
    return (dest);
}
