/*
** EPITECH PROJECT, 2019
** my_swap
** File description:
** Swaps the content of two integers
*/

#include "my.h"

void my_swap(int *a, int *b)
{
    int c;

    c = *a;
    *a = *b;
    *b = c;
}
