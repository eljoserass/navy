/*
** EPITECH PROJECT, 2020
** navy
** File description:
** navy.h
*/

#ifndef NAVY_H
#define NAVY_H

#include "../lib/include/clib.h"
#include "navy_macro.h"

int do_navy(int, char **,char *);
input_t *init_input(char *);
int init_sigaction(void);
int do_connection(int, char **);
char **create_board(char *, int);
void draw_positions(char **, char **);
int do_attack(input_t *);
int get_position(char *);
int check_attack(input_t *);
int do_defense(input_t *);
int print_usage(void);

int extern pos_n_pid[3];

#endif