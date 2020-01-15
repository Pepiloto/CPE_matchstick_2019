/*
** EPITECH PROJECT, 2019
** my_compute_power_rec
** File description:
** Return the first argument raised by the second one
*/

#include "my.h"

int my_compute_power_rec(int nb, int p)
{
    if (p == 0)
        return (1);
    if (p < 0)
        return (0);
    nb = nb * my_compute_power_rec(nb, p - 1);
    return (nb);
}