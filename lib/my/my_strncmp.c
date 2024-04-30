/*
** EPITECH PROJECT, 2024
** strncmp
** File description:
** my_strncmp
*/

#include "./include/my.h"

bool my_strncmp(char *ref, int n, char *cmp)
{
    if (!ref || n < 0 || !cmp)
        return false;
    for (int i = 0; i < n; i ++)
        if (ref[i] != cmp[i])
            return false;
    return true;
}
