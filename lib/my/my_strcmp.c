/*
** EPITECH PROJECT, 2019
** my_strcmp
** File description:
** Compare two strings
*/

#include "my.h"

int my_strcmp(char const *s1, char const *s2)
{
    int i;

    for (i = 0; s1[i] && s2[i]; i++){
        if (s1[i] < s2[i])
            return (-1);
        if (s1[i] > s2[i])
            return (1);
    }
    return (0);
}
