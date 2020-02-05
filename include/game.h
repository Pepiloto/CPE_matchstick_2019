/*
** EPITECH PROJECT, 2020
** CPE_matchstick_2019
** File description:
** game
*/

#include "remove_match.h"
#include "my.h"
#include "display_turn.h"

#ifndef GAME_H_
#define GAME_H_

char *gnl_matches(void);
char *gnl_lines(void);
static inline void print_map(game_t *game)
{
    for (unsigned int i = 0; i <= game->nb_lines - 1; i++) {
        my_putstr(game->map[i]);
        my_putchar('\n');
    }
    my_putchar('\n');
}
void remove_matches(game_t *game, display_turn_t *boolean);
static inline int count_stick(char *line, int stick)
{
    for (int i = 0; line[i]; i++)
        if (line[i] == '|')
            stick++;
    return (stick);
}
static inline void put_error(int max)
{
    my_puterrstr("Error: you cannot remove more than ");
    my_put_nbr(max);
    my_puterrstr(" matches per turn\n");
}
int win(game_t *game, display_turn_t *boolean);

#endif /* !GAME_H_ */