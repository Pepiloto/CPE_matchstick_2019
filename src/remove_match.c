/*
** EPITECH PROJECT, 2020
** CPE_matchstick_2019
** File description:
** remove_match
*/

#include <stdio.h>
#include <stdlib.h>
#include "map.h"
#include "my.h"
#include "remove_match.h"
#include "display_turn.h"

void remove_matches(game_t *game, display_turn_t *boolean)
{
    int line = my_atoi(game->line);
    int stick = my_atoi(game->matches);
    int last_stick = where_is_lstick(game->map[line]);

    for (int i = stick; i > 0; i--)
        game->map[line][last_stick - (i - 1)] = ' ';
    my_putstr("Player removed ");
    my_put_nbr(stick);
    my_putstr(" match(es) from line ");
    my_put_nbr(line);
    my_putchar('\n');
    changing_turn(boolean);
}