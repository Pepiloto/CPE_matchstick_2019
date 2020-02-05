/*
** EPITECH PROJECT, 2020
** CPE_matchstick_2019
** File description:
** game
*/

#include <stdio.h>
#include "map.h"
#include "game.h"

static int check_stick(char *line, int nb_stick, char *str, int max)
{
    int stick = 0;

    if (nb_stick == 0) {
        my_putstr("Error: you have to remove at least one match\n");
        return (84);
    }
    if (nb_stick > max) {
        put_error(max);
        return (84);
    }
    if (nb_stick < 0 || my_str_isnum(str) == 1) {
        my_putstr("Error: invalid input (positive number expected)\n");
        return (84);
    }
    stick = count_stick(line, stick);
    if (stick < nb_stick) {
        my_putstr("Error: not enough matches on this line\n");
        return (84);
    }
    return (0);
}

static int check_line(unsigned int nb_lines, int line)
{
    int lines = nb_lines;

    if (line <= 0) {
        my_putstr("Error: this line is out of range\n");
        return (84);
    }
    if (lines < line) {
        my_putstr("Error: this line is out of range\n");
        return (84);
    }
    return (0);
}

void player_gameloop(game_t *game, display_turn_t *boolean)
{
    if (boolean->display == 0) {
        print_map(game);
        my_putstr("Your turn:\n");
    }
    my_putstr("Line: ");
    game->line = gnl_lines();
        if (check_line(game->nb_lines - 2, my_atoi(game->line)) == 84) {
            boolean->display = 1;
            return;
        }
    my_putstr("Matches: ");
    game->matches = gnl_matches();
        if (check_stick(game->map[my_atoi(game->line)], my_atoi(game->matches),
                        game->matches, game->max_remove) == 84) {
            boolean->display = 1;
            return;
        }
    remove_matches(game, boolean);
    boolean->display = 0;
    win(game, boolean);
    return;
}