/*
** EPITECH PROJECT, 2019
** my_strstr
** File description:
** Return the first occurence of the string in a string
*/

#include <stdlib.h>
#include "my.h"

int verify(char *str, char const *to_find, int i)
{
    for (int j = 0; to_find[j] != '\0'; j++, i++)
        if (str[i] != to_find[j])
            return (0);
    return (1);
}

char *my_strstr(char *str, char const *to_find)
{
    if (my_strcmp(str, "\0") == 0)
        return NULL;
    if (my_strcmp(to_find, "\0") == 0)
        return NULL;
    for (int i = 0; str[i] != '\0'; i++)
        if (verify(str, to_find, i) == 1)
            return (&str[i]);
    return NULL;
}
