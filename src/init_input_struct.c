/*
** EPITECH PROJECT, 2020
** navy
** File description:
** init global and struct
*/

#include "navy.h"

input_t *init_input(char *filename)
{
    input_t *input = malloc(sizeof(input_t));

    if (!input)
        return (NULL);
    input->positions = malloc(sizeof(char));
    if (!input->positions)
        return (NULL);
    input->my_map = create_board(filename, 0);
    input->enemy_map = create_board(filename, 1);
    if (!input->my_map || !input->enemy_map)
        return (NULL);
    input->pid = 0;
    input->cont_attack = 0;
    input->cont_defense = 0;
    input->player = 0;
    return (input);
}