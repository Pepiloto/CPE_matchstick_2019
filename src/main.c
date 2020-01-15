/*
** EPITECH PROJECT, 2020
** CPE_matchstick_2019
** File description:
** main
*/

#include "my.h"
#include "map.h"
#include "main.h"

int main(int ac, char **av)
{
    map_t map = {0};
    int error = 0;

    map.nb_cols = 0;
    error = error_handling(ac, av);
    return (0);
}