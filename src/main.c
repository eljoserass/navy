/*
** EPITECH PROJECT, 2020
** main
** File description:
** main file
*/

#include "navy.h"

int pos_n_pid[3];

int main(int argc, char **argv)
{
    char *positions = NULL;

    if (argc == 2 && my_strcmp(argv[1], "-h") == TRUE)
        return (print_usage());
    if (argc != 2 && argc != 3)
        return (EXIT_ERROR);
    else if (argc == 3)
        positions = argv[2];
    else
        positions = argv[1];
    return (do_navy(argc, argv, positions));
}