/*
** EPITECH PROJECT, 2024
** lib
** File description:
** lib
*/

#ifndef LIB_h
    #define LIB_h
    #include <stdlib.h>
    #include <unistd.h>
    #include <stdbool.h>
    #include <stdio.h>

int my_strlen(char const *str);
int revstr(char *str);
int my_putstr(char const *str);
int my_putchar(char c);
int my_getnbr(char const *str);
int my_compute_power_rec(int nb, int p);
int my_swap(int *a, int *b);

char *my_strcat(char *str1, char const *str2);
char *my_strncat(char *str1, char *str2, int n);
char *my_strupcase(char *str);
char *my_strstr(char *target, char *pattern);
char *my_strdup(char const *src);
char *my_strlowcase(char *str);

bool my_strncmp(char *ref, int n, char *cmp);
bool my_strcmp(char *str, char *ref);
bool my_str_islower(char const *str);
bool my_str_isupper(char const *str);
bool my_str_is_alpha(char const *str);
bool my_str_is_num(char const *str);
bool my_str_is_alphanum(char *str);
bool is_alpha(char c);
bool is_num(char c);
bool my_isneg(int n);
bool is_del(char c, char *del);
bool my_chrstr(char *str, char *del);

#endif /* !lib */
