/*
** EPITECH PROJECT, 2020
** CPE_matchstick_2019
** File description:
** my_atoi
*/

int my_atoi(char const *str)
{
    int n = 0;
    int result = 0;
    int t = 0;

    while ((str[n] && str[n] == ' ') || str[n] == '\t' || str[n] == '\n'
           || str[n] == '\v' || str[n] == '\f' || str[n] == '\r')
        n++;
    while (str[n] && (str[n] == '-' || str[n] == '+')) {
        if (str[n] == '-')
            t++;
        n++;
    }
    while (str[n] && (str[n] >= '0' && str[n] <= '9')) {
        result = (result * 10 ) + (str[n] - 48);
        n++;
    }
    if (t % 2 == 1)
        result = result * -1;
    return (result);
}