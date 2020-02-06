/*
** EPITECH PROJECT, 2020
** CPE_matchstick_2019
** File description:
** win
*/

#include "map.h"
#include "display_turn.h"
#include "my.h"
#include "win.h"

int win(game_t *game, display_turn_t *boolean)
{
    game->ending = 0;
    for (unsigned int i = 0; i < game->nb_lines; i++)
        for (int j = 0; game->map[i][j]; j++)
            if (game->map[i][j] == '|')
                game->ending++;
    if (game->ending == 0 && boolean->turn == 1) {
        print_map(game);
        my_putstr("You lost, too bad...\n");
        return (2);
    }
    else if (game->ending == 0 && boolean->turn == 0) {
        print_map(game);
        my_putstr("I lost... snif... but I'll get you next time!!\n");
        return (1);
    }
    else
        return (0);
}