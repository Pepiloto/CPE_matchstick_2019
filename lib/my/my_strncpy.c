/*
** EPITECH PROJECT, 2019
** my_strncpy
** File description:
** Copies n characters from a string to another
*/

#include "my.h"

char *my_strncpy(char *dest, char const *src, int n)
{
    for (int j = 0; src[j]; j++)
        for (int i = 0; i < n; i++)
            dest[i] = src[i];
    return (dest);
}
