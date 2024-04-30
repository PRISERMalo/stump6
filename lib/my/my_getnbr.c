/*
** EPITECH PROJECT, 2023
** drgub
** File description:
** ckjht
*/
#include "./include/my.h"

int my_getnbr(char const *str)
{
    int nb = 0;
    int i = 0;
    int sign = 1;

    if (!str)
        return -1;
    for (; is_del(str[i], "+-"); i ++)
        if (str[i] == '-')
            sign *= -1;
    if (!my_str_is_num(str + i))
        return -1;
    for (; str[i]; i ++)
        nb = nb * 10 + (str[i] - 48);
    return sign * nb;
}
