/*
** EPITECH PROJECT, 2020
** my_strcmp
** File description:
** Compare 2 strings
*/

int find_length_a(char const *s)
{
    int i = 0;

    while (s[i]) {
        i++;
    }
    return (i);
}

int compare_string_a(char const *s1, char const *s2)
{
    int i = 0;
    int j = 0;

    while (s1[i] && s2[j]) {
        if (s1[i] == '-')
            i++;
        if (s2[j] == '-')
            j++;
        if (s1[i] != s2[j]) {
            return (s1[i] - s2[j]);
        }
        i++;
        j++;
    }
    return (0);
}

int my_strcmp(char const *s1, char const *s2)
{
    int leg = compare_string_a(s1, s2);
    int s1l = find_length_a(s1);
    int s2l = find_length_a(s2);

    if (leg == 0 && s1l < s2l) {
        leg = 0 - s2[s2l + 1];
    } else if (leg == 0 && s1l > s2l) {
        leg = s1[s1l + 1];
    }
    return (leg);
}
