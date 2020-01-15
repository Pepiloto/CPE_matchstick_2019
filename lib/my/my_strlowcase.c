/*
** EPITECH PROJECT, 2019
** my_strlowcase
** File description:
** Puts every letter in lowercase
*/

#include "my.h"

char *my_strlowercase(char *str)
{
    for (int i = 0; str[i]; i++)
        if (str[i] < 91 && str[i] > 64)
            str[i] = str[i] + 32;
    return (str);
}
