/*
** EPITECH PROJECT, 2019
** my_compute_factorial_rec
** File description:
** Return the factorial of the number given
*/

#include "my.h"

int my_compute_factorial_rec(int nb)
{
    if (nb > 12)
        return (0);
    if (nb == 0)
        return (1);
    if (nb < 0)
        return (0);
    nb = nb * my_compute_factorial_rec(nb - 1);
    return (nb);
}