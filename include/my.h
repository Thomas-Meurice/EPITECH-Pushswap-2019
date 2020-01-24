/*
** EPITECH PROJECT, 2024
** CPool_Day3
** File description:
** Created by thomas.meurice@epitech.eu,
*/

#include "push_swap.h"

#ifndef _MY_H_
    #define _MY_H_

int my_compute_power_rec(int nb, int p);

int my_compute_square_root(int nb);

int my_find_prime_sup(int nb);

int my_getnbr(char const *str);

int my_is_prime(int nb);

int my_isneg(int n);

int my_put_nbr(int nb);

void my_putchar(char c);

int my_putstr(char *str);

char *my_revstr(char *str);

int *my_showmem(char const *str, int size);

int *my_showstr(char const *str);

void my_sort_int_array(int *tab, int size);

int my_str_isalpha(char const *str);

int *my_str_islower(char const *str);

int *my_str_isnum(char const *str);

int *my_str_isprintable(char const *str);

int *my_str_isupper(char const *str);

char *my_strcapitalize(char *str);

char *my_strcat(char *dest, char const *src);

int my_strcmp(char const *s1, char const *s2);

char *my_strcpy(char *dest, char const *src);

int my_strlen(char *str);

char *my_strlowcase(char *str);

char *my_strncat(char *dest, char const *src, int nb);

int my_strncmp(char const *s1, char const *s2, int n);

char *my_strncpy(char *dest, char const *src, int n);

char *my_strstr(char *str, char const *to_find);

char *my_strupcase(char *str);

int my_swap(int *a, int *b);

int my_show_word_array(char *const *tab);

char *my_strdup(char const *src);

char **my_str_to_word_array(char const *str, char symbol);

char *my_getfiles(char const *filepath);

char *my_strcat_newstr(char *a, char *b);

void fill_list(char **tab);

void add_last(control_t *control, int nb);

void add_first(control_t *control, int nb);

void rm_last(control_t *control);

void rm_first(control_t *control);

int my_listlen(control_t *control);

void rra(control_t *la);

void ra(control_t *la);

void fill_list(char **tab);

int find_the_little_one(control_t *control);

void pb(control_t *la, control_t *lb);

void pa(control_t *la, control_t *lb);

#endif /* MY_H */
