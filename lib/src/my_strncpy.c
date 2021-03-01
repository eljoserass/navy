/*
** EPITECH PROJECT, 2020
** my_strncpy
** File description:
** Copy string with n char
*/

void my_putchar(char c);

int count_string(char const *src)
{
    int i = 0;

    while (src[i]) {
        i++;
    }
    return (i - 1);
}

char *copy_str(char *dest, char const *src, int n, int len)
{
    int i = 0;

    while (src[i] && i < n) {
        if (i <= len) {
            dest[i] = src[i];
        } else {
            dest[i] = '\0';
        }
        i++;
    }
    return (dest);
}

char *my_strncpy(char *dest, char const *src, int n)
{
    int len = count_string(src);

    dest = copy_str(dest, src, n, len);
    dest[len + 1] = '\0';
    return (dest);
}
