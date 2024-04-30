/*
** EPITECH PROJECT, 2023
** my_putstr
** File description:
** disp str
*/
#include "include/my.h"

int my_putstr(char const *str)
{
    if (!str)
        return -1;
    for (int i = 0; str[i]; i ++)
        my_putchar(str[i]);
    return 0;
}
