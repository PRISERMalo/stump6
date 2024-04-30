/*
** EPITECH PROJECT, 2024
** new_lib
** File description:
** my_strstr
*/
#include "./include/my.h"

char *my_strstr(char *target, char *pattern)
{
    if (!target || !pattern)
        return NULL;
    for (int i = 0; target[i]; i ++)
        if (my_strncmp(target, my_strlen(pattern), pattern))
            return target + i;
    return NULL;
}
