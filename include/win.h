/*
** EPITECH PROJECT, 2020
** CPE_matchstick_2019
** File description:
** win
*/

#include "map.h"
#include "my.h"
#ifndef WIN_H_
#define WIN_H_

static inline void print_map(game_t *game)
{
    for (unsigned int i = 0; i <= game->nb_lines - 1; i++) {
        my_putstr(game->map[i]);
        my_putchar('\n');
    }
}

#endif /* !WIN_H_ */