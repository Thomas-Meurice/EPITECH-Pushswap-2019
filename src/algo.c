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

int check_suit(node_t const *elem, int *nb, int i)
{
    if ( elem != NULL && *nb <= elem->nb) {
        *nb = elem->nb;
        i++;
    }
    return i;
}

int check_is_sorted_list(control_t *control)
{
    node_t *elem = control->first;
    int nb = elem->nb;
    int i = 0;

    if (control->first != NULL && control->last != NULL)
        while (elem != NULL) {
            elem = elem->next;
            i = check_suit(elem, &nb, i);
        }
    if (i == my_listlen(control) - 1) {
        my_putchar('\n');
        return (1);
    }
    return (0);
}

void algo(control_t *la, control_t *lb)
{
    int pos = find_the_little_one(la);
    int length = my_listlen(la);
    int supp = length - pos;
    int less = pos - 1;

    if (pos >= length / 2) {
        while (supp >= 0) {
            rra(la);
            supp--;
            write(1, "rra ", 4);
        }
    } else
        while (less > 0) {
            ra(la);
            less--;
            write(1, "ra ", 3);
        }
    pb(la, lb);
    write(1, "pb ", 3);
}

void getString(control_t *la, control_t *lb)
{
    while (my_listlen(lb) > 1) {
        pa(la, lb);
        write(1, "pa ", 3);
    }
}

void fill_list(char **tab)
{
    control_t *la = malloc(sizeof(node_t));
    control_t *lb = malloc(sizeof(node_t));

    la->first = NULL;
    la->last = NULL;
    lb->last = NULL;
    lb->first = NULL;
    for (int i = 1; tab[i] != NULL; i++)
        add_last(la, my_getnbr(tab[i]));
    if (check_is_sorted_list(la) == 1)
        return;
    while (my_listlen(la) > 1)
        algo(la, lb);
    getString(la, lb);
    if (my_listlen(lb) == 1) {
        pa(la, lb);
        write(1, "pa\n", 3);
    }
}