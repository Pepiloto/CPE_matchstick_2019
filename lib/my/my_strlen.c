/*
** EPITECH PROJECT, 2019
** my_strlen
** File description:
** Counts and return the number of characters in the string
*/

#include "my.h"

int my_strlen(char const *str)
{
    int i;

    for (i = 0; str[i]; i++);
    return (i);
}
