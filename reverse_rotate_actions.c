#include "push_swap.h"

t_stack *rra(t_stack *a)
{
    t_stack *iter;

    iter = a;
    if (a == NULL || a->next == NULL)
        return (a);
    while (iter->next->next)
        iter = iter->next;
    iter->next->next = a;
    a = iter->next;
    iter->next = NULL;
    ft_putstr("rra");
    return (a);
}

t_stack *rrb(t_stack *b)
{
    t_stack *iter;

    iter = b;
    if (b == NULL || b->next == NULL)
        return (b);
    while (iter->next->next)
        iter = iter->next;
    iter->next->next = b;
    b = iter->next;
    iter->next = NULL;
    ft_putstr("rrb");
    return (b);
}

void    rrr(t_stack **a, t_stack **b)
{
    *a = rra(*a);
    *b = rrb(*b);
    ft_putstr("rrr");
}