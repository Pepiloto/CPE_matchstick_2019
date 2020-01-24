/*
** EPITECH PROJECT, 2020
** CPE_matchstick_2019
** File description:
** create_board_game
*/

#include <stdlib.h>
#include "my.h"
#include "map.h"
#include "create_game_board.h"

static void first_and_last_line(game_t *game)
{
    unsigned int i = 0;

    for (; i != game->nb_stars; i++)
        game->map[0][i] = '*';
    game->map[0][i] = '\0';
    i = 0;
    for (; i != game->nb_stars; i++)
        game->map[game->nb_lines - 1][i] = '*';
    game->map[game->nb_lines - 1][i] = '\0';
}

int create_board_game(game_t *game)
{
    int nb_stick = game->nb_lines + (game->nb_lines - 1);
    int nb_spaces = game->nb_lines - 1;
    game->nb_stars = game->nb_lines + (game->nb_lines + 1);
    nb_stick = 1;
    nb_spaces = 0;

    if (malloc_cols(game) == 84)
        return (84);
    for (unsigned int i = 0; i != game->nb_lines; i++)
        if (malloc_lines(game, i, game->nb_stars) == 84)
            return (84);
    first_and_last_line(game);
    return (0);
}