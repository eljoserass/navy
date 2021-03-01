/*
** EPITECH PROJECT, 2020
** navy
** File description:
** game for the two terminals
*/

#include "navy.h"

int chose_action(int *player_action, input_t *input)
{
    if ((*player_action) == 1){
        if (do_attack(input) == EXIT_ERROR)
            return (EXIT_ERROR);
        (*player_action) = 2;
    }
    else if ((*player_action) == 2){
        if (do_defense(input) == EXIT_ERROR)
            return (EXIT_ERROR);
        (*player_action) = 1;
    }
}

int get_win_status(input_t *input)
{
    if (input->cont_defense == MAX_HITS && input->cont_attack != MAX_HITS) {
        my_printf("Enemy won\n\n");
        return (EXIT_E_WON);
    } else if (input->cont_attack == MAX_HITS
    && input->cont_defense != MAX_HITS) {
        my_printf("I won\n\n");
        return (EXIT_I_WON);
    }
    if (input->cont_attack == MAX_HITS && input->cont_defense == MAX_HITS)
        my_printf("Tie\n\n");
    return (EXIT_TIE);
}

int do_game_loop(input_t *input, char *filename)
{
    int player_action = input->player;
    int winner = 0;

    while (input->cont_attack < MAX_HITS && input->cont_defense < MAX_HITS) {
        draw_positions(input->my_map, input->enemy_map);
        if (chose_action(&player_action, input) == EXIT_ERROR)
            return (EXIT_ERROR);
        if (chose_action(&player_action, input) == EXIT_ERROR)
            return (EXIT_ERROR);
    }
    draw_positions(input->my_map, input->enemy_map);
    winner = get_win_status(input);
    free(input);
    return (winner);
}

int do_navy(int ac, char **av,char *filename)
{
    input_t *input = NULL;

    if (open_file(filename) == NULL)
        return (EXIT_ERROR);
    input = init_input(filename);
    if (!input)
        return (EXIT_ERROR);
    if (init_sigaction() == EXIT_ERROR)
        return (EXIT_ERROR);
    if (ac == 2)
        input->player = 1;
    else if (ac == 3)
        input->player = 2;
    if (do_connection(input->player, av) == EXIT_ERROR)
        return (EXIT_ERROR);
    pos_n_pid[POS] = RESET;
    pos_n_pid[STOP] = RESET;
    return (do_game_loop(input, filename));
}