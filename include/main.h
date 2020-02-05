/*
** EPITECH PROJECT, 2020
** CPE_matchstick_2019
** File description:
** main
*/

#include <stdlib.h>
#include "my.h"
#include "map.h"
#include "display_turn.h"
#ifndef MAIN_H_
#define MAIN_H_

int error_handling(int ac, char **av);
int create_board_game(game_t *game);
void free_them_all(game_t *game);
char *gnl_lines(void);
char *gnl_matches(void);
int player_gameloop(game_t *game, display_turn_t *boolean);
void init_struct(game_t *game, display_turn_t *boolean);

#endif /* !MAIN_H_ */