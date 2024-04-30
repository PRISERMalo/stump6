/*
** EPITECH PROJECT, 2023
** my_strlowcase
** File description:
** print str lowcase
*/
#include "./include/my.h"

char *my_strlowcase(char *str)
{
    if (!str)
        return NULL;
    for (int i = 0; str[i]; i ++)
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;
    return (str);
}
