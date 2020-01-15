/*
** EPITECH PROJECT, 2019
** my_str_isupper
** File description:
** Return 1 if the string only contains alpha characters else return 0
*/

#include "my.h"

int my_str_isupper(char const *str)
{
    if (my_strcmp(str, "\0") == 0)
        return (1);
    for (int i = 0; str[i]; i++)
        if (!(str[i] < 91 && str[i] > 64))
            return (0);
    return (1);
}
