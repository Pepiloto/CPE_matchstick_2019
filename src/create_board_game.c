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

// static void sticks_and_spaces(game_t *game, unsigned int nb_spaces)
// {
//     unsigned int j = 1;
//     // unsigned int lines_done = 0;

//     for (unsigned int i = 1; i != game->nb_lines; i++) {
//         for (; j <= nb_spaces; j++) {
//             game->map[i][j] = ' ';
//         }
//         // for (unsigned int k = j; k != (game->nb_matches - 2 * ((game->nb_lines - lines_done) - 1)); k++) {
//         //     game->map[i][k] = '|';
//         // }
//         j = 1;
//     }
// }

static void stars(game_t *game)
{
    for (unsigned int i = 1; i != game->nb_lines - 1; i++) {
        game->map[i][0] = '*';
        game->map[i][1] = ' ';
        game->map[i][2] = ' ';
        game->map[i][3] = '|';
        game->map[i][4] = '|';
        game->map[i][5] = '|';
        game->map[i][6] = ' ';
        game->map[i][7] = ' ';
        game->map[i][8] = '*';
        game->map[i][9] = '\0';
        // game->map[i][game->nb_stars - 1] = '*';
        // game->map[i][game->nb_stars] = '\0';
    }
}

static void first_and_last_line(game_t *game)
{
    unsigned int i = 0;

    for (; i != game->nb_stars - 1; i++)
        game->map[0][i] = '*';
    game->map[0][i] = '\0';
    i = 0;
    for (; i != game->nb_stars - 1; i++)
        game->map[game->nb_lines - 1][i] = '*';
    game->map[game->nb_lines - 1][i] = '\0';
}

int create_board_game(game_t *game)
{
    // unsigned int nb_spaces = game->nb_lines - 1;

    //Recalculer
    // game->nb_matches = (game->nb_lines) + ((game->nb_lines) - 1);
    game->nb_stars = (game->nb_lines - 1) * 2;
    if (malloc_cols(game) == 84)
        return (84);
    for (unsigned int i = 0; i != game->nb_lines; i++)
        if (malloc_lines(game, i, game->nb_stars) == 84)
            return (84);
    first_and_last_line(game);
    stars(game);
    // sticks_and_spaces(game, nb_spaces);
    print_map(game);
    return (0);
}