/*
** EPITECH PROJECT, 2020
** my
** File description:
** my_puterrstr
*/

#include "my.h"

void my_puterrstr(char const *str)
{
    for (int i = 0; str[i]; i++)
        my_puterrchar(str[i]);
}