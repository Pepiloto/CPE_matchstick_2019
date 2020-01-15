/*
** EPITECH PROJECT, 2020
** CPE_matchstick_2019
** File description:
** error
*/

#include "my.h"

int error_handling(int ac, char **av)
{
    if (ac > 3) {
        my_puterrstr("./matchstick : bad arguments : more than 3 given but 2 i"
                    "s required\nretry with -h or --help\n");
        return (84);
    }
    if (ac < 2) {
        my_puterrstr("./matchstick : bad arguments : less than 2 given but 2 i"
                    "s required\nretry with -h or --help\n");
        return (84);
    }
    if (my_str_isnum(av[1]) == 0 || my_str_isnum(av[2]) == 0) {
        my_puterrstr("./matchstick : bad arguments : one of the arguments is no"
                    "t a number\nretry with -h or --help\n");
        return (84);
    }
    return (0);
}