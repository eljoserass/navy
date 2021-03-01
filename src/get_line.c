/*
** EPITECH PROJECT, 2020
** navy
** File description:
** functions related to get the line of the movements of the player
*/

#include "navy.h"

char *get_attack(void)
{
    long unsigned int size = INPUT_SIZE;
    char *lineptr = malloc(sizeof(char) * size);

    if (!lineptr)
        return (NULL);
    if (getline(&lineptr, &size, stdin) == ERROR)
        return (NULL);
    return (lineptr);
}

int get_position(char *position)
{
    return ((position[1] - '1') * MAP_SIZE + position[0] - 'A');
}

int check_if_wrong(char *position, char **board)
{
    int index = get_position(position);

    if (my_strlen(0, position, '\0') != INPUT_SIZE) {
        my_printf("wrong position\n");
        return (0);
    }
    if (position[0] < 'A' || position[0] > 'H') {
        my_printf("wrong position\n");
        return (0);
    }
    if (position[1] < '1' || position[1] > '8') {
        my_printf("wrong position\n");
        return (0);
    }
    return (1);
}

int check_attack(input_t *input)
{
    int hit_or_miss = 0;

    while (hit_or_miss == 0) {
        my_printf("attack: ");
        input->positions = get_attack();
        if (!input->positions)
            return (EXIT_ERROR);
        hit_or_miss = check_if_wrong(input->positions, input->enemy_map);
    }
    return (EXIT_SUCCESS);
}