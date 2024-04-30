/*
** EPITECH PROJECT, 2024
** alphanum
** File description:
** alphanum
*/

#include "./include/my.h"

bool my_str_is_alphanum(char *str)
{
    if (!str)
        return false;
    for (int i = 0; str[i]; i ++)
        if (!is_alpha(str[i]) && !is_num(str[i]))
            return false;
    return true;
}
