/*
** EPITECH PROJECT, 2024
** CPool_Day3
** File description:
** Created by thomas.meurice@epitech.eu,
*/

#ifndef _PUSH_SWAP_H_
#define _PUSH_SWAP_H_

typedef struct node node_t;
typedef struct node
{
    int nb;
    node_t *next;
    node_t *prev;
} node_t;

typedef struct control
{
    node_t *first;
    node_t *last;
} control_t;

#endif /* PUSH_SWAP_H */
