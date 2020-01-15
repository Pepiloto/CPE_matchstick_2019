/*
** EPITECH PROJECT, 2019
** my_compute_factorial_it
** File description:
** Return the factorial of the number given as a parameter
*/

#include "my.h"

int my_compute_factorial_it(int nb)
{
    int nb_start = nb;

    if (nb > 12 || nb < 0)
        return (0);
    if (nb == 0)
        return (1);
    for (int i = 1; nb_start > i; i++)
        nb = nb * i;
    return (nb);
}