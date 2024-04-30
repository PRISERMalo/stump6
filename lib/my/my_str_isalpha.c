/*
** EPITECH PROJECT, 2023
** mystrisalpha
** File description:
** alpha or not
*/
#include "./include/my.h"

bool my_str_is_alpha(char const *str)
{
    if (!str)
        return 0;
    for (int i = 0; str[i]; i ++)
        if (!is_alpha(str[i]))
            return false;
    return true;
}
