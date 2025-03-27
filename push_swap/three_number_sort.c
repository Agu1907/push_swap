#include "push_swap.h"

void	three_number_sort(t_stack **a)
{
    if ((*a)->data < (*a)->next->data && (*a)->data > (*a)->next->next->data && (*a)->next->data > (*a)->next->next->data)
		rra(a);
	if ((*a)->data > (*a)->next->data && (*a)->data < (*a)->next->next->data && (*a)->next->data < (*a)->next->next->data)
		sa(a);
	if ((*a)->data > (*a)->next->data && (*a)->data > (*a)->next->next->data && (*a)->next->data < (*a)->next->next->data)
		ra(a);
	if ((*a)->data > (*a)->next->data && (*a)->data > (*a)->next->next->data && (*a)->next->data > (*a)->next->next->data)
	{
		ra(a);
		sa(a);
	}
	if ((*a)->data < (*a)->next->data && (*a)->data < (*a)->next->next->data && (*a)->next->data > (*a)->next->next->data)
	{
		rra(a);
		sa(a);
	}
}
void	two_number_sort(t_stack **a)
{
	if ((*a)->data > (*a)->next->data)
		ra(a);
}