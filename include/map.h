/*
** EPITECH PROJECT, 2020
** CPE_matchstick_2019
** File description:
** map
*/

#ifndef MAP_H_
#define MAP_H_

typedef struct game{
    char **map;
    unsigned int nb_lines;
    unsigned int nb_matches;
    unsigned int max_remove;
    unsigned int nb_stars;
    char *line;
    char *matches;
    int ending;
    int victory;
}game_t;

#endif /* !MAP_H_ */