/*
** EPITECH PROJECT, 2020
** my_strncmp
** File description:
** Compare 2 strings
*/

int find_length(char const *s, int n)
{
    int i = 0;

    while (s[i] && i < n) {
        i++;
    }
    return (i);
}

int compare_string(char const *s1, char const *s2, int n)
{
    int i = 0;

    while (s1[i] && s2[i] && i < n) {
        if (s1[i] != s2[i]) {
            return (s1[i] - s2[i]);
        }
        i++;
    }
    return (0);
}

int my_strncmp(char const *s1, char const *s2, int n)
{
    int leg = compare_string(s1, s2, n);
    int s1l = find_length(s1, n);
    int s2l = find_length(s2, n);

    if (leg == 0 && s1l < s2l) {
        leg = 0 - s2[s1l + 1];
    } else if (leg == 0 && s1l > s2l) {
        leg = s1[s2l];
    }
    return (leg);
}
