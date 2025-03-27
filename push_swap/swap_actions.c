#include "push_swap.h"

void	sa(t_stack **head)
{
    t_stack *bucket;
	t_stack *tmp;
	t_stack *last;

	if ((*head) == NULL || (*head)->next == NULL)
		return;

	tmp = (*head);
	bucket = tmp->next;
	tmp->next = bucket->next;
	bucket->next = tmp;
	(*head) = bucket;	
	ft_putstr("sa");	
}

void	sb(t_stack **head)
{
	ft_putstr("sb");
    sa(head);
}