#include "push_swap.h"
#include <stdio.h>
t_stack *ra(t_stack *a)
{
    t_stack *tmp;
    t_stack *iter;

    if (a == NULL || a->next == NULL)
        return (a);
    tmp = a->next;
    iter = a;

    while (iter->next)
        iter = iter->next;
    iter->next = a;
    a->next = NULL;
    a = tmp;
    ft_putstr("ra");
    return (a);
}

t_stack *rb(t_stack *b)
{
    t_stack *tmp;
    t_stack *iter;

    if (b == NULL ||b->next == NULL)
        return (b);
    tmp = b->next;
    iter = b;

    while (iter->next)
        iter = iter->next;
    iter->next = b;
    b->next = NULL;
    b = tmp;
    ft_putstr("rb");
    return (b);
}

void    rr(t_stack **a ,t_stack **b)
{
    *a = ra(*a);
    *b = rb(*b);
    ft_putstr("rr");
}