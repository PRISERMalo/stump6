/*
** EPITECH PROJECT, 2023
** my_strupcase
** File description:
** print str upcase
*/
#include "./include/my.h"

char *my_strupcase(char *str)
{
    if (!str)
        return str;
    for (int i = 0; str[i]; i ++)
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;
    return (str);
}
