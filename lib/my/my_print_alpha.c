/*
** EPITECH PROJECT, 2019
** my_print_alpha
** File description:
** Display lowercase alphabet in ascending order
*/

#include "my.h"

void my_print_alpha(void)
{
    for (int l_alpha = 97; l_alpha < 123; l_alpha++)
        my_putchar(l_alpha);
}
