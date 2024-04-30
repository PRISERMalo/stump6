/*
** EPITECH PROJECT, 2023
** my_strncpy
** File description:
** cpy n str
*/
#include "./include/my.h"

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;

    if (n < 0 || !dest || !src)
        return NULL;
    for (; i < n && dest[i] && src[i]; i ++)
        dest[i] = src[i];
    dest[i] = '\0';
    return (dest);
}
