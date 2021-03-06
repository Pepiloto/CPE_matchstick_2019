/*
** EPITECH PROJECT, 2020
** CPE_matchstick_2019
** File description:
** game
*/

#include <stdio.h>
#include <stdlib.h>
#include "map.h"
#include "game.h"

static int check_stick(char *line, int nb_stick, char *str, int max)
{
    int stick = 0;

    if (nb_stick < 0 || my_str_isnum(str) == 0) {
        my_putstr("Error: invalid input (positive number expected)\n");
        return (84);
    }
    if (nb_stick == 0) {
        my_putstr("Error: you have to remove at least one match\n");
        return (84);
    }
    if (nb_stick > max) {
        put_error(max);
        return (84);
    }
    stick = count_stick(line, stick);
    if (stick < nb_stick) {
        my_putstr("Error: not enough matches on this line\n");
        return (84);
    }
    return (0);
}

static int check_line(unsigned int nb_lines, int line, char *line_)
{
    int lines = nb_lines;

    if (my_str_isnum(line_) == 0) {
        my_putstr("Error: invalid input (positive number expected)\n");
        return (84);
    }
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

static void display(game_t *game, display_turn_t *boolean)
{
    if (boolean->display == 0) {
        print_map(game);
        my_putstr("Your turn:\n");
    }
}

static int output_print(game_t *game, display_turn_t * boolean)
{
    my_putstr("Line: ");
    game->line = gnl_lines();
    if (game->line == NULL)
        return (42);
    if (check_line(game->nb_lines - 2, my_atoi(game->line), game->line) == 84) {
        boolean->display = 1;
        return (84);
    }
    return (0);
}

int player_gameloop(game_t *game, display_turn_t *boolean)
{
    int output = 0;

    display(game, boolean);
    output = output_print(game, boolean);
    if (output == 42)
        return (42);
    if (output == 84)
        return (84);
    game->matches = gnl_matches();
    if (game->matches == NULL)
        return (42);
    if (check_stick(game->map[my_atoi(game->line)], my_atoi(game->matches),
        game->matches, game->max_remove) == 84) {
        boolean->display = 1;
        return (84);
    }
    remove_matches(game, boolean);
    boolean->display = 0;
    free_getline(game->line, game->matches);
    return (win(game, boolean));
}