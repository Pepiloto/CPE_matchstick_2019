/*
** EPITECH PROJECT, 2019
** my_compute_square_root
** File description:
** Return the square root of the number given as argument
*/

#include <stdio.h>
#include "my.h"

int my_compute_square_root(int nb)
{
    if (nb < 2)
        return (0);
    for (int sq = 0; nb >= sq * sq; sq++ )
        if (nb == sq * sq)
            return (sq);
    return (0);
}