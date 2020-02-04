/*
** EPITECH PROJECT, 2020
** CPE_matchstick_2019
** File description:
** get_next_line
*/

#include <stdlib.h>
#include <stdio.h>

char *gnl_lines(void)
{
    char *temp = NULL;
    size_t getnext = 0;

    if (getline(&temp, &getnext, stdin) == -1)
        return (NULL);
    return (temp);
}

char *gnl_matches(void)
{
    char *temp = NULL;
    size_t getnext = 0;

    if (getline(&temp, &getnext, stdin) == -1)
        return (NULL);
    return (temp);
}