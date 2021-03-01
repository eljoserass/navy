/*
** EPITECH PROJECT, 2020
** my_revstr
** File description:
** Reverse a string
*/

int count_str(char *str)
{
    int i = 0;

    while (str[i]) {
        i++;
    }
    return (i);
}

char *my_revstr(char *str)
{
    int i = 0;
    char aux;
    int len = count_str(str) - 1;

    while (i < len) {
        aux = str[i];
        str[i] = str[len];
        str[len] = aux;
        i++;
        len--;
    }
    return (str);
}
