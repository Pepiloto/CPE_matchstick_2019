/*
** EPITECH PROJECT, 2020
** CPE_matchstick_2019
** File description:
** main
*/

#include <stdlib.h>
#include <stdio.h>
#include "main.h"

int main(int ac, char **av)
{
    game_t game = {0};
    display_turn_t boolean = {0};

    if (error_handling(ac, av) == 84)
        return (84);
    game.nb_lines = my_getnbr(av[1]) + 2;
    game.max_remove = my_getnbr(av[2]);
    if (create_board_game(&game) == 84)
        return (84);
    while (1) {
        if (boolean.turn == 0)
            player_gameloop(&game, &boolean);
        else
            ai_gameloop(&game, &boolean);
    }
    free_them_all(&game);
    return (0);
}