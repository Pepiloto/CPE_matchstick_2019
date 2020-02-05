/*
** EPITECH PROJECT, 2020
** CPE_matchstick_2019
** File description:
** init_struct
*/

#include <stdlib.h>
#include "map.h"
#include "display_turn.h"

void init_struct(game_t *game, display_turn_t *boolean)
{
    game->map = NULL;
    game->nb_lines = 0;
    game->nb_matches = 0;
    game->max_remove = 0;
    game->nb_stars = 0;
    game->line = NULL;
    game->matches = NULL;
    game->ending = 0;
    game->victory = 0;
    boolean->display = 0;
    boolean->turn = 0;
}