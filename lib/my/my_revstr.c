/*
** EPITECH PROJECT, 2024
** revstr
** File description:
** my_revstr
*/
#include "./include/my.h"

int revstr(char *str)
{
    if (!str)
        return -1;
    for (int i = my_strlen(str); i > 0; i --)
        my_putchar(str[i]);
    return 0;
}
