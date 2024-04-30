/*
** EPITECH PROJECT, 2023
** mystrisupper
** File description:
** fsrthh
*/
#include "./include/my.h"

bool my_str_isupper(char const *str)
{
    if (!str)
        return false;
    for (int i = 0; str[i]; i ++)
        if (str[i] < 'A' || str[i] > 'Z')
            return false;
    return true;
}
