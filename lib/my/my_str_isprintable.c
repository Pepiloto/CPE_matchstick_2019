/*
** EPITECH PROJECT, 2019
** my_str_isprintable
** File description:
** Return 1 if the string only contains printable characters or return 0
*/

#include "my.h"

int my_str_isprintable(char const *str)
{
    if (my_strcmp(str, "\0") == 0)
        return (1);
    for (int i = 0; str[i]; i++)
        if (!(str[i] < 31 && str[i] >= 127))
            return (0);
    return (1);
}
