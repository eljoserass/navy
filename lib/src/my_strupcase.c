/*
** EPITECH PROJECT, 2020
** my_strupcase
** File description:
** To uppercase
*/

char *my_strupcase(char *str)
{
    int i = 0;

    while (str[i]) {
        if (str[i] > 96 && str[i] < 123) {
            str[i] -= 32;
        }
        i++;
    }
    return (str);
}
