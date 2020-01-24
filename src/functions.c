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

void pa(control_t *la, control_t *lb)
{
    if (my_listlen(lb) > 0) {
        add_first(la, lb->first->nb);
        rm_first(lb);
    }
}

void pb(control_t *la, control_t *lb)
{
    if (my_listlen(la) > 0) {
        add_first(lb, la->first->nb);
        rm_first(la);
    }
}
