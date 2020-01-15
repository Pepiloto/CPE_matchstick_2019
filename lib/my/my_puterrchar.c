/*
** EPITECH PROJECT, 2020
** my
** File description:
** my_puterrchar
*/

#include <unistd.h>
#include "my.h"

void my_puterrchar(char c)
{
    write(2, &c, 1);
}