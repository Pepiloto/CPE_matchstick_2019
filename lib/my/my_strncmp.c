/*
** EPITECH PROJECT, 2019
** my_strncmp
** File description:
** Compare 2 strings for the n characters given
*/

#include "my.h"

int my_strncmp(char const *s1, char const *s2, int n)
{
    for (int i = 0; s1[i - n] && s2[i - n]; i++){
        if (s1[i - n] < s2[i - n])
            return (-1);
        if (s1[i - n] > s2[i - n])
            return (1);
    }
    return (0);
}
