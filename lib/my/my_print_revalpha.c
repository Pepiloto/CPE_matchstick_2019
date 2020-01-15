/*
** EPITECH PROJECT, 2019
** my_print_revalpha
** File description:
** Display alphabet in descending order
*/

#include "my.h"

void my_print_revalpha(void)
{
    for (int lower_alpha = 122; lower_alpha > 96; lower_alpha--)
        my_putchar(lower_alpha);
}
