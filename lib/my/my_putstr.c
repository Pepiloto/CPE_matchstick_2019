/*
** EPITECH PROJECT, 2019
** my_putstr
** File description:
** Display one by one the characters of a string
*/

#include "my.h"

void my_putstr(char const *str)
{
    for (int i = 0; str[i]; i++)
        my_putchar(str[i]);
}
