/*
** EPITECH PROJECT, 2020
** my_strstr
** File description:
** Emulate function
*/

char *convert_to_str(char *str, int pos)
{
    int i = 0;

    while (str[pos]) {
        str[i] = str[pos];
        i++;
        pos++;
    }
    str[i] = '\0';
    return (str);
}

int check_same(char *str, char const *to_find, int pos)
{
    int	i = 0;

    while (to_find[i]) {
        if (str[pos] != to_find[i]) {
            return (0);
        }
        i++;
        pos++;
    }
    return (1);
}

char *my_strstr(char *str, char const *to_find)
{
    int i = 0;
    int equal = 0;

    if (to_find[0] == '\0')
        return (str);
    while (str[i] && equal == 0) {
        if (str[i] == to_find[0]) {
            equal = check_same(str, to_find, i);
        }
        if (equal == 1) {
            str = convert_to_str(str, i);
        }
        i++;
    }
    if (equal == 0) {
        str[0] = '\0';
    }
    return (str);
}
