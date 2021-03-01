/*
** EPITECH PROJECT, 2020
** my_strcapitalize
** File description:
** Capitalize first letter
*/

char *my_strcapitalize(char *str)
{
    int i = 0;
    int space = 1;

    while (str[i]) {
        if (str[i] > 47 && str[i] < 58)
            space = 0;
        if (str[i] > 96 && str[i] < 123 && space == 1) {
            str[i] -= 32;
            space = 0;
        } else if (str[i] > 64 && str[i] < 91 && space == 0)
            str[i] += 32;
        if (str[i] < 48 || (str[i] > 57 && str[i] < 65))
            space = 1;
        if ((str[i] > 64 && str[i] < 91) || (str[i] < 97 && str[i] > 90))
            space = 0;
        i++;
    }
    return (str);
}
