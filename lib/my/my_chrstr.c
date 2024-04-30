/*
** EPITECH PROJECT, 2024
** chrstr
** File description:
** my_chrstr
*/

#include "./include/my.h"

bool my_chrstr(char *str, char *del)
{
    if (!str || !del)
        return false;
    for (int i = 0; str[i]; i ++)
        if (!is_del(str[i], del))
            return false;
    return true;
}
