/*
** EPITECH PROJECT, 2020
** CPE_matchstick_2019
** File description:
** create_game_board
*/

#include <stdlib.h>
#include "map.h"
#include "my.h"

#ifndef CREATE_GAME_BOARD_H_
#define CREATE_GAME_BOARD_H_

static inline int malloc_cols(game_t *game)
{
    game->map = malloc(sizeof(char *) * (game->nb_lines));
    if (!game->map) {
        my_puterrstr("Problem while allocating memory\n");
        return (84);
    }
    return (0);
}

static inline int malloc_lines(game_t *game, int i, int nb_stars)
{
    game->map[i] = malloc(sizeof(char) * (nb_stars));
    if (!game->map[i]) {
        my_puterrstr("Problem while allocating memory\n");
        return (84);
    }
    return (0);
}

static inline void print_map(game_t *game)
{
    for (unsigned int i = 0; i <= game->nb_lines - 1; i++) {
        my_putstr(game->map[i]);
        my_putchar('\n');
    }
}

#endif /* !CREATE_GAME_BOARD_H_ */