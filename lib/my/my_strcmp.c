/*
** EPITECH PROJECT, 2024
** strcmp
** File description:
** my_strcmp
*/
#include "./include/my.h"

bool my_strcmp(char *str, char *ref)
{
    if (!str || !ref)
        return false;
    for (int i = 0; str[i] || ref[i]; i++)
        if (str[i] != ref[i])
            return false;
    return true;
}
