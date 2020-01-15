/*
** EPITECH PROJECT, 2019
** my_evil_str
** File description:
** Swap each of the string char 2 by 2
*/

#include "my.h"

char *my_evil_str(char *str)
{
    int temp;
    int i = my_strlen(str) - 1;

    for (int j = 0; j <= i; j++, i--){
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    return (str);
}