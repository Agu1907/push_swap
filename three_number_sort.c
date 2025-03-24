#include "push_swap.h"

void	three_number_sort(t_stack *a , t_stack *b)
{
    if (a->data < a->next->data && a->data > a->next->next->data && a->next->data > a->next->next->data)
		a = rra(a);
	if (a->data > a->next->data && a->data < a->next->next->data && a->next->data < a->next->next->data)
		a = sa(a);
	if (a->data > a->next->data && a->data > a->next->next->data && a->next->data < a->next->next->data)
		a = ra(a);
	if (a->data > a->next->data && a->data > a->next->next->data && a->next->data > a->next->next->data)
	{
		a = ra(a);
		a = sa(a);
	}
	if (a->data < a->next->data && a->data < a->next->next->data && a->next->data > a->next->next->data)
	{
		a = rra(a);
		a = sa(a);
	}
}
void	two_number_sort(t_stack *a , t_stack *b)
{
	if (a->data > a->next->data)
		a =	ra(a);
}