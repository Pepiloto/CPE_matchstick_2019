/*
** EPITECH PROJECT, 2019
** my_revstr
** File description:
** Reverse a string
*/

#include "my.h"

char *my_revstr(char *str)
{
    int i = 0;
    int j = 0;
    char temp;

    for (; str[i]; i++);
    for (i -= 1; i >= j ; j++, i--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    return (str);
}
