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
#include "push_swap.h"

void ra(control_t *la)
{
    if (my_listlen(la) > 1) {
        add_last(la, la->first->nb);
        rm_first(la);
    }
}

void rra(control_t *la)
{
    if (my_listlen(la) < 2)
        return;
    add_first(la, la->last->nb);
    rm_last(la);
}