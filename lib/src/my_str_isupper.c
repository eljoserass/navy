/*
** EPITECH PROJECT, 2020
** my_str_islower
** File description:
** Check if string is lowercase
*/

int my_str_isupper(char const *str)
{
    int i = 0;
    int alpha = 1;

    while (str[i]) {
        if (str[i] < 65 || str[i] > 90)
            alpha = 0;
        i++;
    }
    return (alpha);
}
