/*
** EPITECH PROJECT, 2020
** my_str_isalpha
** File description:
** Check if string is alpha
*/

int my_str_isalpha(char const *str)
{
    int i = 0;
    int alpha = 1;

    while (str[i]) {
        if (str[i] < 65 || str[i] > 122)
            alpha = 0;
        if (str[i] > 90 && str[i] < 97)
            alpha = 0;
        i++;
    }
    return (alpha);
}
