/*
** EPITECH PROJECT, 2020
** CPE_matchstick_2019
** File description:
** main
*/

#include <stdlib.h>
#ifndef MAIN_H_
#define MAIN_H_

int error_handling(int ac, char **av);
int create_board_game(game_t *game);
void free_them_all(game_t *game);
static inline void my_memset(int *empty_lines, int nb_lines)
{
    for (int i = 0; i != nb_lines; i++)
        empty_lines[i] = 0;
}
static inline int *allocating_int(int nb_lines, int *empty_lines)
{
    empty_lines = malloc(sizeof(int) * nb_lines + 4);
    if (!empty_lines) {
        my_puterrstr("Problem while allocating memory\n");
        empty_lines = NULL;
        return (empty_lines);
    }
    empty_lines[nb_lines] = -1;
    my_memset(empty_lines, nb_lines);
    return (empty_lines);
}
char *gnl_lines(void);
char *gnl_matches(void);
void gameloop(game_t *game, int *empty_lines);

#endif /* !MAIN_H_ */