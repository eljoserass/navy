/*
** EPITECH PROJECT, 2020
** my_str_islower
** File description:
** Check if string is lowercase
*/

int my_str_islower(char const *str)
{
    int i = 0;
    int alpha = 1;

    while (str[i]) {
        if (str[i] < 97 || str[i] > 122)
            alpha = 0;
        i++;
    }
    return (alpha);
}
