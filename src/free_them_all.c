/*
** EPITECH PROJECT, 2020
** CPE_matchstick_2019
** File description:
** free_them_all
*/

#include <stdlib.h>
#include <stdio.h>
#include "map.h"

void free_them_all(game_t *game)
{
    for (unsigned int i = 0; i <= game->nb_lines - 1; i++)
        free(game->map[i]);
    free(game->map);
}