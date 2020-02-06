/*
** EPITECH PROJECT, 2020
** CPE_matchstick_2019
** File description:
** ai_gameloop
*/

#include <stdlib.h>
#include "map.h"
#include "display_turn.h"
#include "my.h"
#include "game.h"

void ai_removing_stick(game_t *game, display_turn_t *boolean)
{
    int line = 0;
    int last_stick = 0;
    int stick = 0;

    while (stick <= 0) {
        line = (rand() % game->nb_lines);
        stick = count_stick(game->map[line], stick);
    }
    last_stick = where_is_lstick(game->map[line]);
    for (int i = 1; i > 0; i--)
        game->map[line][last_stick - (i - 1)] = ' ';
    my_putstr("AI removed 1 match(es) from line ");
    my_put_nbr(line);
    my_putchar('\n');
    changing_turn(boolean);
}

int ai_gameloop(game_t *game, display_turn_t *boolean)
{
    print_map(game);
    my_putstr("AI's turn...\n");
    ai_removing_stick(game, boolean);
    return (win(game, boolean));
}