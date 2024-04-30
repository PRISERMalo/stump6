/*
** EPITECH PROJECT, 2024
** stumper
** File description:
** get_flag
*/

#include "../include/stumper.h"
#include "../lib/my/include/my.h"

int get_flag_value(int res, char **flag, char c)
{
    if (res == c) {
        (*flag) = my_strdup(optarg);
    }
    return 0;
}

flags_t *initstruct_for_flags(void)
{
    flags_t *flag_values = malloc(sizeof(flags_t));

    return flag_values;
}

void fill_struct(flags_t *flag_values, char *fg_n, char *fg_s)
{
    flag_values->flag_n = my_strdup(fg_n);
    flag_values->flag_s = my_strdup(fg_s);
    free(fg_n);
    free(fg_s);
}

flags_t *get_flags_values(int argc, char **argv)
{
    flags_t *flag_values = initstruct_for_flags();
    char *flag_n = NULL;
    char *flag_s = NULL;
    int res = getopt(argc, argv, "n:s:");

    while (res != -1) {
        get_flag_value(res, &flag_n, 'n');
        get_flag_value(res, &flag_s, 's');
        res = getopt(argc, argv, "n:s:");
    }
    if (flag_s == NULL)
        flag_s = my_strdup("0");
    fill_struct(flag_values, flag_n, flag_s);
    return flag_values;
}
