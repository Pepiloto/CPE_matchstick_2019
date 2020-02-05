/*
** EPITECH PROJECT, 2020
** CPE_matchstick_2019
** File description:
** remove_match
*/

#include <stdio.h>
#include "display_turn.h"
#ifndef REMOVE_MATCH_H_
#define REMOVE_MATCH_H_

int my_atoi(char const *str);
static inline void changing_turn(display_turn_t *boolean)
{
    if (boolean->turn == 1)
        boolean->turn = 0;
    else
        boolean->turn = 1;
}
static inline int where_is_lstick(char *line)
{
    for (int i = 0; line[i]; i++)
        if (line[i] == '|' && (line[i + 1] == ' ' || line[i + 1] == '*'))
            return (i);
    return (-1);
}

#endif /* !REMOVE_MATCH_H_ */