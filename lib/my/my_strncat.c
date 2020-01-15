/*
** EPITECH PROJECT, 2019
** my_strncat
** File description:
** Concatenate n characters of 2 strings
*/

#include "my.h"

char *my_strncat(char *dest, char const *src, int n)
{
    int dest_len = my_strlen(dest);
    int i;

    for (i = 0; src[i] && i < n; i++)
        dest[dest_len + i] = src[i];
    dest[dest_len + i] = '\0';
    return (dest);
}
