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

int getInt(node_t *elem, int i, int *little, int pos)
{
    if (elem->nb < *little) {
        *little = elem->nb;
        pos = i;
    }
    return (pos);
}
int find_the_little_one(control_t *control)
{
    node_t *elem = control->first;
    int i = 0;
    int little = control->first->nb;
    int pos = 0;

    if (control->first != NULL && control->last != NULL)
        while (elem != NULL) {
            i++;
            pos = getInt(elem, i, &little, pos);
            elem = elem->next;
        }
    return (pos);
}