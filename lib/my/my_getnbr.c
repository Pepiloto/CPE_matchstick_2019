/*
** EPITECH PROJECT, 2019
** my_getnbr
** File description:
** Return a number sent as a string
*/

#include "my.h"

int my_getnbr(char const *str)
{
    unsigned int number = 0;

    for (int i = 0; !(str[i] == '\0'); i++){
        if (str[i] > 47 && str[i] < 58)
            number = number * 10 + (str[i] - 48);
        if (number > 2147483647)
            return (0);
        if (!(str[i + 1] > 47 && str[i + 1] < 58) && number != 0)
            break;
    }
    for (int i = 0; str[i] != '\0'; i++){
        if (str[i - 1] == '-' && str[i] > 47 && str[i] < 58)
            return (number * -1);
    }
    return (number);
}
