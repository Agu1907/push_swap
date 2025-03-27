#include "push_swap.h"

void    mini_quick_sort(t_stack **a , t_stack **b)
{
    int size;
    int pivot;
    put_index((*a) , list_size((*a)));
    size = list_size((*a));
    pivot = size / 2;

    while (size)
    {
        if ((*a)->index <= pivot)
            pb(a , b);
        else
            ra(a);
        size--;
    }
    if (!is_stack_sorted((*a)))
    {
        if (list_size((*a)) == 3)
            three_number_sort(a);
        else
            two_number_sort(a);
    }
    if (!is_stack_sorted_for_quick((*b)))
    {
        if (list_size((*b)) == 3)
            three_number_sort_for_quick(b);
        else
        {
            if ((*b)->index < (*b)->next->index)
				rb(b);
        }
    }
    while ((*b))
        pa(a , b);
}
void	three_number_sort_for_quick(t_stack **b)
{
    if ((*b)->index < (*b)->next->index && (*b)->next->index < (*b)->next->next->index)
    {
		rb(b);
		sb(b);
    }
    if ((*b)->index < (*b)->next->index && (*b)->next->index > (*b)->next->next->index && (*b)->index < (*b)->next->next->index)
		rb(b);
    if ((*b)->index > (*b)->next->index && (*b)->index < (*b)->next->next->index && (*b)->next->index < (*b)->next->next->index)
		rrb(b);
    if ((*b)->index < (*b)->next->index && (*b)->next->next->index < (*b)->index)
		sb(b);
    if ((*b)->index > (*b)->next->index && (*b)->next->index < (*b)->next->next->index)
    {
		rrb(b);
		sb(b);
    }
}
int is_stack_sorted_for_quick(t_stack *list)
{
    while(list)
    {
        if (list->next && (list->data > list->next->data))
            list = list->next;
        else if(list->next == NULL)
            return (1);
        else
            return (0);
    }
    return (1);
}