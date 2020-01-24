/*
** EPITECH PROJECT, 2020
** CPE_matchstick_2019
** File description:
** main
*/

#include "my.h"
#include "map.h"
#include "main.h"

int main(int ac, char **av)
{
    game_t game = {0};
    int error = 0;

    error = error_handling(ac, av);
    game.nb_lines = my_getnbr(av[1]);
    if (create_board_game(&game) == 84)
        return (84);
    free_them_all(&game);
    return (0);
}