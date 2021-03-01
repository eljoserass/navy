/*
** EPITECH PROJECT, 2020
** draw_boards
** File description:
** functions to draw both players' boards
*/

#include "navy.h"

void draw_playera(char **board)
{
    int i = 0;
    int j = 0;

    my_printf(" |A B C D E F G H\n");
    my_printf("-+---------------\n");
    while (i++ < 8) {
        my_printf("%d|", i);
        j = 0;
        while (j++ < 8) {
            if (j > 1)
                my_printf(" ");
            my_printf("%c", board[i - 1][j - 1]);
        }
        my_printf("\n");
    }
    my_printf("\n");
}

void draw_playerb(char **enemy)
{
    int i = 0;
    int j = 0;

    my_printf(" |A B C D E F G H\n");
    my_printf("-+---------------\n");
    while (i++ < 8) {
        my_printf("%d|", i);
        j = 0;
        while (j++ < 8) {
            if (j > 1)
                my_printf(" ");
            my_printf("%c", enemy[i - 1][j - 1]);
        }
        my_printf("\n");
    }
    my_printf("\n");
}

void draw_positions(char **my_map, char **enemy_map)
{
    my_printf("my positions:\n");
    draw_playera(my_map);
    my_printf("enemy's positions:\n");
    draw_playerb(enemy_map);
}

int print_usage(void)
{
    my_printf("USAGE\n\t./navy [first_player_pid] navy_positions\n");
    my_printf("DESCRIPTION\n\tfirst_player_pid: ");
    my_printf("only for the second player. pid of the first player.\n\t");
    my_printf("navy_positions: file representing the"
    "positions of the ships.\n");
    return (EXIT_SUCCESS);
}