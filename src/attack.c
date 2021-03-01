/*
** EPITECH PROJECT, 2020
** attack
** File description:
** attack functions
*/

#include "navy.h"

int check_enemy_hit(void)
{
    int hit = 0;

    hit = (pos_n_pid[STOP] == 0) ? 1 : 0;
    pos_n_pid[POS] = 0;
    pos_n_pid[STOP] = 0;
    return (hit);
}

int send_attack(int pos)
{
    int i = 0;

    while (i < pos) {
        if (kill (pos_n_pid[PID], SIGUSR1) == ERROR)
            return (EXIT_ERROR);
        i++;
        usleep(SLEEP_TIME);
    }
    if (kill (pos_n_pid[PID], SIGUSR2) == ERROR)
        return (EXIT_ERROR);
    usleep(SLEEP_TIME);
    return (EXIT_SUCCESS);
}

void check_hit_or_miss(input_t *input, int hit)
{
    int attack = get_position(input->positions);

    if (hit == 1
    && input->enemy_map[attack / MAP_SIZE][attack % MAP_SIZE] != 'x')
        input->cont_attack += 1;
    if (hit == 1) {
        input->enemy_map[attack / MAP_SIZE][attack % MAP_SIZE] = 'x';
        my_printf("%c%c: hit\n", input->positions[0], input->positions[1]);
    } else if (hit == 0) {
        input->enemy_map[attack / MAP_SIZE][attack % MAP_SIZE] = 'o';
        my_printf("%c%c: missed\n", input->positions[0], input->positions[1]);
    }
    my_printf("\n");
}

int do_attack(input_t *input)
{
    int hit = 0;

    if (check_attack(input) == EXIT_ERROR)
        return (EXIT_ERROR);
    if (send_attack(get_position(input->positions)) == EXIT_ERROR)
        return (EXIT_ERROR);
    check_hit_or_miss(input, check_enemy_hit());
    return (0);
}