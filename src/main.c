/*
** EPITECH PROJECT, 2020
** CPE_matchstick_2019
** File description:
** main
*/

#include <stdlib.h>
#include <stdio.h>
#include "main.h"

int loop(game_t *game, display_turn_t *boolean)
{
    while (1) {
        if (boolean->turn == 0) {
            game->victory = player_gameloop(game, boolean);
            if (game->victory == 42)
                return (0);
            if (game->victory == 1)
                return (1);
            if (game->victory == 2)
                return (2);
        }
        else {
            game->victory = ai_gameloop(game, boolean);
            if (game->victory == 42)
                return (0);
            if (game->victory == 1)
                return (1);
            if (game->victory == 2)
                return (2);
        }
    }
}

int main(int ac, char **av)
{
    game_t game;
    display_turn_t boolean;
    int finish = 12;

    init_struct(&game, &boolean);
    if (error_handling(ac, av) == 84)
        return (84);
    game.nb_lines = my_getnbr(av[1]) + 2;
    game.max_remove = my_getnbr(av[2]);
    if (create_board_game(&game) == 84)
        return (84);
    finish = loop(&game, &boolean);
    if (finish == 1)
        return (1);
    if (finish == 2)
        return (2);
    if (finish == 0)
        return (0);
    free_them_all(&game);
    return (0);
}