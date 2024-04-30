/*
** EPITECH PROJECT, 2023
** my_strisnum
** File description:
** rjdherfb
*/

#include "./include/my.h"

bool my_str_is_num(char const *str)
{
    if (!str)
        return 0;
    for (int i = 0; str[i]; i ++)
        if (!is_num(str[i]))
            return false;
    return true;
}
