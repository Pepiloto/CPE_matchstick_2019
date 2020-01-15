/*
** EPITECH PROJECT, 2019
** my_strupcase
** File description:
** Puts every letter of every word in uppercase
*/

#include "my.h"

char *my_strupcase(char *str)
{
    for (int i = 0; str[i]; i++)
        if (str[i] < 123 && str[i] > 97)
            str[i] = str[i] - 32;
    return (str);
}
