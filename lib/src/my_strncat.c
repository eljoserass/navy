/*
** EPITECH PROJECT, 2020
** my_strncat
** File description:
** Concatenate 2 strings with n characters
*/

char *my_strncat(char *dest, char const *src, int nb)
{
    int i = 0;
    int j = 0;

    while (dest[i]) {
        i++;
    }
    while (src[j] && j < nb) {
        dest[i] = src[j];
        i++;
        j++;
    }
    return (dest);
}
