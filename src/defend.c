/*
** EPITECH PROJECT, 2020
** defend
** File description:
** functions to defend
*/

#include "navy.h"

int receive_attack(void)
{
    int pos = 0;

    while (pos_n_pid[STOP] == 0);
    pos += pos_n_pid[POS];
    pos_n_pid[POS] = RESET;
    pos_n_pid[STOP] = RESET;
    return (pos);
}

int check_hit(input_t *input, int pos)
{
    if (my_isnum(input->my_map[pos / 8][pos % 8]) == 1)
        input->cont_defense += 1;
    if (input->my_map[pos / 8][pos % 8] != '.' &&
        input->my_map[pos / 8][pos % 8] != 'o') {
        my_printf("hit\n");
        input->my_map[pos / 8][pos % 8] = 'x';
        if (kill(pos_n_pid[PID], SIGUSR1) == ERROR)
            return (EXIT_ERROR);
    } else {
        my_printf("missed\n");
        input->my_map[pos / 8][pos % 8] = 'o';
        if (kill(pos_n_pid[PID], SIGUSR2) == ERROR)
            return (EXIT_ERROR);
    }
    my_printf("\n");
    return (EXIT_SUCCESS);
}

int do_defense(input_t *input)
{
    int pos = 0;

    my_printf("waiting for enemy's attack...\n");
    pause();
    pos = receive_attack();
    my_printf("%c%c: ", pos % 8 + 'A', pos / 8 + '1');
    if (check_hit(input, pos) == EXIT_ERROR)
        return (EXIT_ERROR);
    return (EXIT_SUCCESS);
}