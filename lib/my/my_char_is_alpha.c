/*
** EPITECH PROJECT, 2024
** my_char_is_alpha
** File description:
** my_char_is_alpha
*/

#include "./include/my.h"

bool is_alpha(char c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        return true;
    return false;
}
