#include "push_swap.h"

void    ra(t_stack **a)
{
    t_stack *tmp;
    t_stack *iter;

    if ((*a) == NULL || (*a)->next == NULL)
        return;
    tmp = (*a)->next;
    iter = (*a);

    while (iter->next)
        iter = iter->next;
    iter->next = (*a);
    (*a)->next = NULL;
    (*a) = tmp;
    ft_putstr("ra");
}

void    rb(t_stack **b)
{
    t_stack *tmp;
    t_stack *iter;

    if ((*b) == NULL || (*b)->next == NULL)
        return;
    tmp = (*b)->next;
    iter = (*b);

    while (iter->next)
        iter = iter->next;
    iter->next = (*b);
    (*b)->next = NULL;
    (*b) = tmp;
    ft_putstr("rb");
}