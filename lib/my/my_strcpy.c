/*
** EPITECH PROJECT, 2019
** my_strcpy
** File description:
** Copies a string into another
*/

#include "my.h"

char *my_strcpy(char *dest, char const *src)
{
    int n;

    for (n = 0; src[n] != '\0'; n++)
        dest[n] = src[n];
    if (src[n] == '\0')
        dest[n] = '\0';
    return (dest);
}
