/*
** EPITECH PROJECT, 2020
** my_str_isnum
** File description:
** Check if string is numerical
*/

int my_str_isnum(char const *str)
{
    int i = 0;
    int alpha = 1;

    while (str[i]) {
        if (str[i] < 48 || str[i] > 57)
            alpha = 0;
        i++;
    }
    return (alpha);
}
