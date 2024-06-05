#ifndef SORTING_H
#define SORTING_H

#include <unistd.h>
#include <stdlib.h>
typedef int Item;

void ft_putchar(char c);
size_t ft_str_len(char *str);


void swap(int *x, int *y);
void selection(Item *v, int n);
void init_list(char **str, int argc);
void ft_print(char **str);

#endif

