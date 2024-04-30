/*
** EPITECH PROJECT, 2024
** main
** File description:
** main
*/

#include "../lib/my/include/my.h"
#include "../include/stumper.h"

bool valid_args(int argc, char **argv)
{
    if (argc == 1)
        return true;
    for (int i = 1; argv[i] != NULL; i++) {
        if (my_strcmp(argv[i], "-n") && argv[i + 1] != NULL
            && (!my_str_is_num(argv[i + 1])
                || my_isneg(my_getnbr(argv[i + 1]))))
            return false;
    }
    return true;
}

void print_line(char p, char l, int j, bool first)
{
    int i = ((int)p) - 48;
    int garbage = 0;
    int k = 0;

    if (first) {
        while (k < 5) {
            garbage = (nb_tab[i][j][k] == ' ') ?
                my_putchar(' ') : my_putchar(l);
            k++;
        }
    }
    if (!first) {
        my_putchar(' ');
        while (k < 5) {
            garbage = (nb_tab[i][j][k] == ' ') ?
                my_putchar(' ') : my_putchar(l);
            k++;
        }
    }
    (void)garbage;
}

void print_nb(flags_t *flag_list)
{
    bool first = true;
    int len = my_strlen(flag_list->flag_s);

    for (int i = 0; i < 5; i++) {
        first = true;
        for (int j = 0; flag_list->flag_n[j] != '\0'; j++) {
            print_line(flag_list->flag_n[j],
            flag_list->flag_s[(((int)flag_list->flag_n[j]) - 48) % len],
            i, first);
            first = false;
        }
        my_putchar('\n');
    }
}

int main(int argc, char **argv)
{
    flags_t *flag_list = NULL;

    if (valid_args(argc, argv) == false)
        return 84;
    flag_list = get_flags_values(argc, argv);
    print_nb(flag_list);
    free(flag_list->flag_n);
    free(flag_list->flag_s);
    free(flag_list);
    return 0;
}
