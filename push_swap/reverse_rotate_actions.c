#include "push_swap.h"

void    rra(t_stack **a)
{
    t_stack *iter;

    iter = (*a);
    if ((*a) == NULL || (*a)->next == NULL)
        return;
    while (iter->next->next)
        iter = iter->next;
    iter->next->next = (*a);
    (*a) = iter->next;
    iter->next = NULL;
    ft_putstr("rra");
}

void    rrb(t_stack **b)
{
    t_stack *iter;

    iter = (*b);
    if ((*b) == NULL || (*b)->next == NULL)
        return;
    while (iter->next->next)
        iter = iter->next;
    iter->next->next = (*b);
    (*b) = iter->next;
    iter->next = NULL;
    ft_putstr("rrb");
}