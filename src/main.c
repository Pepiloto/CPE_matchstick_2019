/*
** EPITECH PROJECT, 2020
** CPE_matchstick_2019
** File description:
** main
*/

#include <stdlib.h>
#include <stdio.h>
#include "my.h"
#include "map.h"
#include "main.h"

int main(int ac, char **av)
{
    game_t game = {0};
    int *empty_lines = {0};

    if (error_handling(ac, av) == 84)
        return (84);
    game.nb_lines = my_getnbr(av[1]) + 2;
    empty_lines = allocating_int(game.nb_lines, empty_lines);
    if (create_board_game(&game) == 84)
        return (84);
    while (1) {
        game.line = gnl_lines();
        game.matches = gnl_matches();
        remove_matches(&game, game.line, game.matches, empty_lines);
    }
    free_them_all(&game);
    return (0);
}