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

void add_last(control_t *control, int nb)
{
    node_t *elem = malloc(sizeof(node_t));

    elem->nb = nb;
    elem->next = NULL;
    if (control->first == NULL && control->last == NULL) {
        control->first = elem;
        control->last = elem;
        elem->prev = NULL;
    } else {
        control->last->next = elem;
        elem->prev = control->last;
        control->last = elem;
    }
}

void add_first(control_t *control, int nb)
{
    node_t *elem = malloc(sizeof(node_t));

    elem->nb = nb;
    elem->prev = NULL;
    if (control->first == NULL && control->last == NULL) {
        control->first = elem;
        control->last = elem;
        elem->next = NULL;
    } else {
        control->first->prev = elem;
        elem->next = control->first;
        control->first = elem;
    }
}

int my_listlen(control_t *control)
{
    node_t *elem = control->first;
    int i = 0;

    if (control->first != NULL && control->last != NULL)
        while (elem != NULL) {
            i++;
            elem = elem->next;
        }
    return (i);
}

void rm_first(control_t *control)
{
    if (control->first == NULL && control->last == NULL)
        return;
    if (my_listlen(control) == 1) {
        free(control->first);
        control->first = NULL;
        control->last = NULL;
        return;
    } else {
        control->first = control->first->next;
        free(control->first->prev);
        control->first->prev = NULL;
        if (my_listlen(control) == 1)
            control->last = control->first;
    }
}

void rm_last(control_t *control)
{
    if (control->first == NULL && control->last == NULL)
        return;
    if (my_listlen(control) == 1) {
        free(control->first);
        control->first = NULL;
        control->last = NULL;
        return;
    } else {
        control->last = control->last->prev;
        free(control->last->next);
        control->last->next = NULL;
        if (my_listlen(control) == 1)
            control->first = control->last;
    }
}
