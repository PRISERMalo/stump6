/*
** EPITECH PROJECT, 2023
** my_strlen
** File description:
** disp str lenght
*/

int my_strlen(char const *str)
{
    int i = 0;

    if (!str)
        return -1;
    for (; str[i]; i ++);
    return i;
}
