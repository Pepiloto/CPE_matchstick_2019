/*
** EPITECH PROJECT, 2020
** CPE_matchstick_2019
** File description:
** error
*/

#include "my.h"

int bad_argument(char **av)
{
    if (my_str_isnum(av[1]) == 0 || my_str_isnum(av[2]) == 0) {
        my_puterrstr("./matchstick : bad arguments : one of the arguments is no"
                    "t a positive number\n");
        return (84);
    }
    if (my_getnbr(av[1]) == 0 || my_getnbr(av[2]) == 0) {
        my_puterrstr("./matchsitck : bad arguments : arguments cannot be equal"
                    " to 0\n");
        return (84);
    }
    return (0);
}

int error_handling(int ac, char **av)
{
    if (ac > 3) {
        my_puterrstr("./matchstick : bad arguments : more than 2 given but 2 i"
                    "s required\n");
        return (84);
    }
    if (ac < 3) {
        my_puterrstr("./matchstick : bad arguments : less than 2 given but 2 i"
                    "s required\n");
        return (84);
    }
    if (bad_argument(av) == 84)
        return (84);
    return (0);
}