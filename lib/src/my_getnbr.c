/*
** EPITECH PROJECT, 2020
** my_getnbr
** File description:
** do a lot of stuff
*/

int to_int(char const *str, int i)
{
    int mul = 1;
    int num = 0;
    int aux = 0;
    int found = -1;
    int total = i;

    while (i >= 0) {
        if (str[i] >= '0' && str[i] <= '9') {
            aux = (str[i] - '0') * mul;
            num += aux;
            mul *= 10;
        }
        if (str[i] == '+' || str[i] == '-' && found == 0)
            found = i + 1;
        i--;
    }
    found == -1 ? found = 0 : aux == 0;
    if (total - found > 9)
        return (0);
    return (num);
}

int my_getnbr(char const *str)
{
    int i = 0;
    int num = 0;
    int neg = 0;

    while (str[i] < 58 && str[i]) {
        if (str[i] == '-')
            neg++;
        i++;
    }
    num = to_int(str, i);
    if (neg % 2 == 1)
        num = -num;
    return (num);
}
