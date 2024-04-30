/*
** EPITECH PROJECT, 2023
** my_swap
** File description:
** swap values parameter
*/

int my_swap(int *a, int *b)
{
    int c;

    if (!a || !b)
        return -1;
    c = *a;
    *a = *b;
    *b = c;
    return 0;
}
