/*
** EPITECH PROJECT, 2020
** positions
** File description:
** find and check ships' positions
*/

#include "navy.h"

int check_positions(char *pos)
{
    int i  = 0;

    if (!pos)
        return (EXIT_ERROR);
    while (i < 4) {
        if (my_isnum(pos[i * 8]) == 0 || my_isnum(pos[i * 8 + 3]) == 0 ||
        my_isnum(pos[i * 8 + 6]) == 0)
            return (EXIT_ERROR);
        if (pos[i * 8 + 1] != ':' || pos[i * 8 + 4] != ':')
            return (EXIT_ERROR);
        if ((pos[i * 8 + 2] < 'A' || pos[i * 8 + 2] > 'H') ||
        (pos[i * 8 + 5] < 'A') || pos[i * 8 + 5] > 'H')
            return (EXIT_ERROR);
        if (pos[i * 8 + 7] != '\n' )
            return (EXIT_ERROR);
        i++;
    }
    return (0);
}

int check_ship_size(char *pos)
{
    int i = 0;

    if (!pos || check_positions(pos) != 0)
        return (EXIT_ERROR);
    while (i < 4) {
        if (pos[i * 8 + 2] == pos[i * 8 + 5]) {
            if (pos[i * 8 + 6] - pos[i * 8 + 3] + '1' != pos[i * 8])
                return (EXIT_ERROR);
        } else if (pos[i * 8 + 2] != pos[i * 8 + 5])
            if (pos[i * 8 + 5] - pos[i * 8 + 2] + '1' != pos[i * 8] ||
            pos[i * 8 + 3] != pos[i * 8 + 6])
                return (EXIT_ERROR);
        i++;
    }
    return (0);
}

int **find_positions(char *filename)
{
    int **pos = malloc(sizeof(int *) * 4);
    char *str = open_file(filename);
    int i = 0;

    while (i < 4) {
        pos[i++] = malloc(sizeof(int) * 4);
    }
    if (!pos || !str || check_ship_size(str) == EXIT_ERROR)
        return (NULL);
    i = 0;
    while (i < 4)
    {
        pos[i][0] = str[i * 8 + 2] - 'A';
        pos[i][1] = str[i * 8 + 3] - '0';
        pos[i][2] = str[i * 8 + 5] - 'A';
        pos[i++][3] = str[i * 8 + 6] - '0';
    }
    free(str);
    return (pos);
}

char **position_ships(char **board, int **pos)
{
    int i = 0;
    int j = 0;

    while (i++ < 4) {
        j = pos[i - 1][0];
        while (j <= pos[i - 1][2]) {
            if (board[pos[i - 1][1] - 1][j] != '.')
                return (NULL);
            board[pos[i - 1][1] - 1][j++] = i - 1 + '2';
        }
        j = pos[i - 1][1];
        while (j < pos[i - 1][3]) {
            if (board[j][pos[i - 1][0]] != '.')
                return (NULL);
            board[j++][pos[i - 1][0]] = i - 1 + '2';
        }
    }
    return (board);
}

char **create_board(char *filename, int only_board)
{
    int i = 0;
    int j = 0;
    char **board = malloc(sizeof(char *) * 8);
    int **pos = find_positions(filename);

    if (!board || !pos)
        return (NULL);
    while (i < 8) {
        board[i] = malloc(sizeof(char) * 8);
        if (!board[i])
            return (NULL);
        j = 0;
        while (j < 8)
            board[i][j++] = '.';
        i++;
    }
    if (only_board == 0)
        board = position_ships(board, pos);
    free (pos);
    return (board ? board : NULL);
}