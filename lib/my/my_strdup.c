/*
** EPITECH PROJECT, 2023
** my_strdup.c
** File description:
** strdup
*/

#include "./include/my.h"

char *my_strdup(char const *src)
{
    char *dest = malloc(sizeof(char) * my_strlen(src) + 1);

    if (!src)
        return NULL;
    for (int i = 0; src[i]; i++)
        dest[i] = src[i];
    dest[my_strlen(src)] = '\0';
    return dest;
}
