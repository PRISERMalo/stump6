/*
** EPITECH PROJECT, 2024
** my_char_is_alpha
** File description:
** my_char_is_alpha
*/

#include "include/my.h"

bool is_num(char c)
{
    if ((c >= '0' && c <= '9'))
        return true;
    return false;
}
