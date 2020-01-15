/*
** EPITECH PROJECT, 2019
** my_str_isnum
** File description:
** Return 1 if the string contains only digits or return 0
*/

#include "my.h"

int my_str_isnum(char const *str)
{
    if (str == 0)
        return (1);
    for (int i = 0; str[i]; i++)
        if (!(str[i] < 58 && str[i] > 47))
            return (0);
    return (1);
}
