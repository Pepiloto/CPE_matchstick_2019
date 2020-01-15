/*
** EPITECH PROJECT, 2019
** my_str_isalpha
** File description:
** Return 1 if the string only contain alphabetical characters and 0 if not
*/

#include "my.h"

int my_str_isalpha(char const *str)
{
    if (my_strcmp(str, "\0") == 0)
        return (1);
    for (int i = 0; str[i]; i++)
        if (!((str[i] < 123 && str[i] > 96) || (str[i] < 90 && str[i] > 64)))
            return (0);
    return (1);
}
