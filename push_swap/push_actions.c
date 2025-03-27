#include "push_swap.h"

void    pa(t_stack **a, t_stack **b)
{
    t_stack *tmp;

    tmp = (*b)->next;
    (*b)->next = *a;
    *a = *b;
    *b = tmp;
    ft_putstr("pa");
}

void    pb(t_stack **a, t_stack **b)
{
    t_stack *tmp;
              
    tmp = (*a)->next;    
    (*a)->next = *b;   
    *b = *a;            
    *a = tmp;
    ft_putstr("pb");      
}