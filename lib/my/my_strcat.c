/*
** EPITECH PROJECT, 2023
** my_strcat
** File description:
** concatenates
*/
#include "./include/my.h"


char *my_strcat(char *str1, char const *str2)
{
    int len1 = 0;
    char *new_str = NULL;
    int i = 0;
    int len2 = 0;

    if (!str1 || !str2)
        return NULL;
    len1 = my_strlen(str1);
    len2 = my_strlen(str2);
    new_str = malloc(sizeof(char) * (len1 + len2 + 1));
    if (!new_str)
        return NULL;
    for (; i < len1; i ++)
        new_str[i] = str1[i];
    for (int y = 0; y < len2; y ++)
        new_str[i + y] = str2[y];
    new_str[len1 + len2] = '\0';
    return new_str;
}
