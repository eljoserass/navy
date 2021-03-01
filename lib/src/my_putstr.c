/*
** EPITECH PROJECT, 2020
** my_putstr
** File description:
** some dsc
*/

void my_putchar(char c);

int my_putstr(char const *str)
{
    int i = 0;
    char n;

    while (str[i]) {
        n = str[i];
        my_putchar(n);
        i++;
    }
    return (0);
}
