/*
** EPITECH PROJECT, 2024
** is_del
** File description:
** my_is_del
*/
#include "./include/my.h"

bool is_del(char c, char *del)
{
    if (!del)
        return false;
    for (int i = 0; del[i]; i ++)
        if (c == del[i])
            return true;
    return false;
}
