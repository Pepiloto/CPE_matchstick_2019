/*
** EPITECH PROJECT, 2019
** my_str_islower
** File description:
** Return 1 if the string only contains lowercase alpha characters or return 0
*/

#include "my.h"

int my_str_islower(char const *str)
{
    if (my_strcmp(str, "\0") == 0)
        return (1);
    for (int i = 0; str[i]; i++)
        if (!(str[i] < 123 && str[i] > 96))
            return (0);
    return (1);
}
