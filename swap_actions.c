#include "push_swap.h"

t_stack *sa(t_stack *head)
{
    t_stack *bucket;
	t_stack *tmp;
	t_stack *last;

	if (head == NULL || head->next == NULL)
		return (head);

	tmp = head;
	bucket = tmp->next;
	tmp->next = bucket->next;
	bucket->next = tmp;
	head = bucket;	
	ft_putstr("sa");	
	return (head);
}

t_stack *sb(t_stack *head)
{
	ft_putstr("sb");
    return (sa(head));
}

void ss(t_stack **head_a, t_stack **head_b)
{
    *head_a = sa(*head_a);
    *head_b = sa(*head_b);
	ft_putstr("ss");
}