/*
** EPITECH PROJECT, 2019
** my_compute_power_it
** File description:
** Return the first argument raised to the power of the second
*/

#include "my.h"

int my_compute_power_it(int nb, int p)
{
    int power = nb;

    if (p == 0)
        return (1);
    if (p < 0)
        return (0);
    for (int i = p; i > 1; i--)
        nb = nb * power;
    return (nb);
}