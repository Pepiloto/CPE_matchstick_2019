/*
** EPITECH PROJECT, 2019
** my_strcapitalize
** File description:
** Capitalizes the first letter of each word
*/

#include "my.h"

void my_strcapitalize(char *str)
{
    for (int i = 0; str[i]; i++) {
        if (i == 0 && str[0] < 123 && str[0] > 96)
            str[i] = str[i] - 32;
        if (str[i - 1] < 58 && str[i - 1] > 47 && str[i] < 91 && str[i] > 64)
            str[i] = str[i] + 32;
        if (str[i - 1] < 48 && str[i] < 123 && str[i] > 96)
            str[i] = str[i] - 32;
        if (str[i - 1] < 65 && str[i - 1] > 57 && str[i] < 123 && str[i] > 96)
            str[i] = str[i] - 32;
        if (str[i - 1] < 91 && str[i - 1] > 64 && str[i] < 91 && str[i] > 64)
            str[i] = str[i] + 32;
    }
}
