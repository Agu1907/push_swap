#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

typedef struct t_list
{
    int data;
    int index;
    struct t_list *next;
} t_stack;

void    sa(t_stack **head);
void    sb(t_stack **head);
void    add_list(t_stack **list, int n , int index);
void    pa(t_stack **a, t_stack **b);
void    pb(t_stack **a, t_stack **b);
void    ra(t_stack **a);
void    rb(t_stack **b);
void    rra(t_stack **a);
void    rrb(t_stack **b);
long ft_atol(char *str , t_stack *list);
int ft_strlen(char *str);
char    **ft_split(char *str , char c);
char    *ft_substr(char *s, size_t len , unsigned int start);
int is_stack_sorted(t_stack *list);
void    three_number_sort(t_stack **a);
void    put_index(t_stack *head , int index_max_limit);
void    push_swap(t_stack *list, t_stack *list_b);
int ft_wordcount(char *str, char c);
void    ft_free(char **str);
int list_size(t_stack *list);
void    radix_sort(t_stack **a, t_stack **b);
void    ft_putstr(char *str);
void    error_handler(t_stack *list);
void    ft_error_putstr(char *str);
void    selection_sort(t_stack **a, t_stack **b);
int    check_repeat(t_stack *list);
void    list_free(t_stack *list);
void    add_to_list(t_stack **list , char **str);
int find_min(t_stack *list);
int find_max_bit(t_stack *list);
void    mini_quick_sort(t_stack **a, t_stack **b);
void    two_number_sort(t_stack **a);
void    three_number_sort_for_quick(t_stack **b);
int is_stack_sorted_for_quick(t_stack *list);
t_stack *last_node(t_stack *list);

#endif