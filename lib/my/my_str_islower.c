/*
** EPITECH PROJECT, 2023
** kdjrn
** File description:
** djhrfb
*/
#include "./include/my.h"

bool my_str_islower(char const *str)
{
    if (!str)
        return false;
    for (int i = 0; str[i]; i ++)
        if (str[i] < 'a' && str[i] > 'z')
            return false;
    return true;
}
