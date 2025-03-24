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

t_stack *sa(t_stack *head);
t_stack *sb(t_stack *head);
void ss(t_stack **head_a, t_stack **head_b);
t_stack *add_list(t_stack *list, int n, int index);
void    pa(t_stack **a, t_stack **b);
void    pb(t_stack **a, t_stack **b);
t_stack *ra(t_stack *a);
t_stack *rb(t_stack *b);
void    rr(t_stack **a, t_stack **b);
t_stack *rra(t_stack *a);
t_stack *rrb(t_stack *b);
void    rrr(t_stack **a, t_stack **b);
long ft_atoi(char *str);
int ft_strlen(char *str);
char    **ft_split(char *str , char c);
char    *ft_substr(char *s, size_t len , unsigned int start);
int is_stack_sorted(t_stack *list);
void    three_number_sort(t_stack *a, t_stack *b);
void    put_index(t_stack *head , int index_max_limit);
void    push_swap(t_stack *list);
int ft_wordcount(char *str, char c);
void    ft_free(char **str);
int list_size(t_stack *list);
void    *radix_sort(t_stack *a, t_stack *b);
void    ft_putstr(char *str);
void    error_handler(t_stack *list);
void    ft_error_putstr(char *str);
void    selection_sort(t_stack *a, t_stack *b);
void    check_repeat(t_stack *list, int size);
t_stack *list_free(t_stack *list);
t_stack *arg_parse(char *str, t_stack *list);
int find_min(t_stack *list);

#endif