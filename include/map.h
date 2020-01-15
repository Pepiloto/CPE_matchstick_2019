/*
** EPITECH PROJECT, 2020
** CPE_matchstick_2019
** File description:
** map
*/

#ifndef MAP_H_
#define MAP_H_

typedef struct map{
    char **map;
    unsigned int nb_lines;
    unsigned int nb_cols;
    unsigned int nb_matches;
}map_t;

#endif /* !MAP_H_ */