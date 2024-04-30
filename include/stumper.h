/*
** EPITECH PROJECT, 2024
** stumper
** File description:
** stumper
*/

#ifndef STUMPER_H_
    #define STUMPER_H_
    #include "../lib/my/include/my.h"

typedef struct flags_s {
    char *flag_n;
    char *flag_s;
} flags_t;

static char *const nb_tab[10][6] = {
    {" 000 ", "0   0", "0   0", "0   0", " 000 ", NULL},
    {" 000 ", "0 00 ", "  00 ", "  00 ", " 0000", NULL},
    {" 000 ", "0   0", "   0 ", " 0   ", "00000", NULL},
    {"0000 ", "    0", " 000 ", "    0", "0000 ", NULL},
    {"  00 ", " 0 0 ", "0  0 ", "00000", "   0 ", NULL},
    {"00000", "0    ", "0000 ", "    0", "0000 ", NULL},
    {" 000 ", "0    ", "0000 ", "0   0", " 000 ", NULL},
    {"00000", "    0", "   0 ", "  0  ", " 0   ", NULL},
    {" 000 ", "0   0", " 000 ", "0   0", " 000 ", NULL},
    {" 000 ", "0   0", " 0000", "    0", " 000 ", NULL},
};
flags_t *get_flags_values(int argc, char **argv);
#endif /* !STUMPER_H_ */
