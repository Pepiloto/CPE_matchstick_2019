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

int my_atoi(char const *str);

static int check_line(unsigned int nb_lines, int line, int *empty_line)
{
    if (line <= 0)
        return (84);
    for (int i = 0; empty_line[i] != -1; i++)
            if (empty_line[i] == line)
                return (84);
    if ((int)nb_lines < line)
        return (84);
    return (0);
}

static int check_stick(char *line, int nb_stick)
{
    int stick = 0;

    for (int i = 0; line[i]; i++)
        if (line[i] == '|')
            stick++;
    if (stick < nb_stick) {
        my_putstr("Error: not enough matches on this line\n");
        return (84);
    }
    return (0);
}

void remove_matches(game_t *game, char *line_, char *nb_stick_,
                    int *empty_lines)
{
    int line = my_atoi(line_);
    int nb_stick = my_atoi(nb_stick_);

    if (check_line(game->nb_lines, line, empty_lines) == 84)
        my_putstr("Error: this line is out of range\n");
    check_stick(game->map[line], nb_stick);
}