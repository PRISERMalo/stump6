/*
** EPITECH PROJECT, 2023
** my_strcat
** File description:
** concatenates
*/
#include "./include/my.h"


char *my_strncat(char *str1, char *str2, int n)
{
    int len1 = 0;
    char *new_str = NULL;
    int i = 0;

    if (!str1 || !str2)
        return NULL;
    len1 = my_strlen(str1);
    new_str = malloc(sizeof(char) * (len1 + n + 1));
    if (!new_str)
        return NULL;
    for (; i < len1; i ++)
        new_str[i] = str1[i];
    for (int y = 0; y < n; y ++)
        new_str[i + y] = str2[y];
    new_str[len1 + n] = '\0';
    return new_str;
}
