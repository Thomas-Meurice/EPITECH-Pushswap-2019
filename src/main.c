/*
** EPITECH PROJECT, 2019
** eval_expr
** File description:
** {description}
*/

#include "my.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int ac, char **av)
{
    if (ac == 1)
        return (84);
    fill_list(av);
    return (0);
}
