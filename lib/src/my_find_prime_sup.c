/*
** EPITECH PROJECT, 2020
** My_find_prime_sup
** File description:
** Find first prime
*/

int is_it_prime(int nb)
{
    int i = 2;

    while (nb > i) {
        if (nb % i == 0) {
            return (0);
        }
        i++;
    }
    return (1);
}

int find_prime(int nb)
{
    int i = nb;
    int num = nb;

    while (i >= nb) {
        num = is_it_prime(i);
        if (num == 1) {
            return (i);
        }
        i++;
    }
    return (0);
}

int my_find_prime_sup(int nb)
{
    if (nb <= 0) {
        return (0);
    } else {
        nb = find_prime(nb);
    }
    return (nb);
}
