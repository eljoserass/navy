/*
** EPITECH PROJECT, 2020
** my_strupcase
** File description:
** To uppercase
*/

char *my_strlowcase(char *str)
{
    int i = 0;

    while (str[i]) {
        if (str[i] > 64 && str[i] < 91) {
            str[i] += 32;
        }
        i++;
    }
    return (str);
}
