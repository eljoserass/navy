/*
** EPITECH PROJECT, 2020
** navy
** File description:
** navy_macro.h
*/

#ifndef NAVY_MACRO_H_
#define NAVY_MACRO_H_

// MACRO FOR GLOBAL
#define ERROR -1
/////////////
#define PID 0
/////////////
#define POS 1
/////////////
#define STOP 3
/////////////
#define RESET 0
/////////////
#define INPUT_SIZE 3
/////////////
#define MAP_SIZE 8
/////////////
#define EXIT_I_WON 0
/////////////
#define EXIT_E_WON 1
/////////////
#define EXIT_TIE 1
/////////////
#define EXIT_ERROR 84
/////////////
#define EXIT_SUCCESS 0
/////////////
#define MAX_HITS 14
/////////////
#define TRUE 0
/////////////
#define SLEEP_TIME 3000
/////////////
typedef struct input_s {
    char **my_map;
    char **enemy_map;
    char *positions;
    int pid;
    int hit_enemy;
    int cont_attack;
    int cont_defense;
    int player;
} input_t;
/////////////

#endif /* !MACRO_NAVY_H_ */
