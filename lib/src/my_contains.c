/*
** EPITECH PROJECT, 2020
** my_contains
** File description:
** check if array contains char
*/

int my_contains(char *array, char ch)
{
    int i = 0;

    while (array[i]) {
        if (array[i] == ch)
            return (i);
        i++;
    }
    return (-1);
}
