/*
** EPITECH PROJECT, 2020
** CPE_matchstick_2019
** File description:
** game
*/

#include "map.h"
#include "game.h"

static int check_stick(char *line, int nb_stick, char *str, int max)
{
    int stick = 0;

    if (nb_stick < 0) {
        my_puterrstr("Error: you have to remove at least one match\n");
        return (84);
    }
    if (nb_stick > max) {
        my_puterrstr("Error: you cannot remove more than ");
        my_put_nbr(max);
        my_puterrstr(" matches per turn\n");
        return (84);
    }
    if (nb_stick == 0 || my_str_isnum(str) == 1) {
        my_puterrstr("Error: invalid input (positive number expected)\n");
        return (84);
    }
    for (int i = 0; line[i]; i++) {
        if (line[i] == '|')
            stick++;
    }
    if (stick < nb_stick) {
        my_puterrstr("Error: not enough matches on this line\n");
        return (84);
    }
    return (0);
}

static int check_line(unsigned int nb_lines, int line, int *empty_line)
{
    int lines = nb_lines;

    if (line <= 0) {
        my_puterrstr("Error: this line is out of range\n");
        return (84);
    }
    for (int i = 0; empty_line[i] != -1; i++)
            if (empty_line[i] == line) {
                my_puterrstr("Error: this line is out of range\n");
                return (84);
            }
    if (lines < line) {
        my_puterrstr("Error: this line is out of range\n");
        return (84);
    }
    return (0);
}

void player_gameloop(game_t *game, int *empty_lines, display_turn_t *boolean)
{
    if (boolean->display == 0) {
        print_map(game);
        my_putstr("Your turn:\n");
    }
    my_putstr("Line: ");
    game->line = gnl_lines();
        if (check_line(game->nb_lines - 2, my_atoi(game->line),
            empty_lines) == 84) {
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
    return;
}