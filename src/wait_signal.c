/*
** EPITECH PROJECT, 2020
** wait_connection
** File description:
** functions to control the signal input
*/

#include "navy.h"

void sigaction_handle(int sig, siginfo_t *info, void *context)
{
    (void)context;
    pos_n_pid[PID] = info->si_pid;
    pos_n_pid[POS] += (sig == SIGUSR1) ? 1 : 0;
    pos_n_pid[STOP] += (sig == SIGUSR2) ? 1 : 0;
}

int init_sigaction(void)
{
    struct sigaction *sa = malloc(sizeof(struct sigaction));

    if (!sa)
        return (EXIT_ERROR);
    sa->sa_flags = SA_SIGINFO | SA_RESTART;
    sa->sa_sigaction = &sigaction_handle;
    if (sigemptyset(&sa->sa_mask) == ERROR)
        return (EXIT_ERROR);
    if (sigaction(SIGUSR1, sa, NULL) == ERROR ||
    sigaction(SIGUSR2, sa, NULL) == ERROR)
        return (EXIT_ERROR);
    free(sa);
    return (EXIT_SUCCESS);
}

int do_connection(int player, char **argv)
{
    if (player == 1) {
        my_printf("my pid: %d\n", getpid());
        my_printf("waiting for enemy connection...\n");
        pause();
        my_printf("\nenemy connected\n\n");
    } else {
        if (kill(my_atoi(argv[1]), SIGUSR2) ==  ERROR)
            return (EXIT_ERROR);
        my_printf("my pid: %d\n", getpid());
        my_printf("\nsuccessfully connected\n\n");
    }
    return (EXIT_SUCCESS);
}