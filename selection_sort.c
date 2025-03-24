#include "push_swap.h"

int find_min(t_stack *list)
{
    t_stack *min;

    min = list;
    while (list)
    {
        if (min->data > list->data)
            min = list;
        list = list->next;
    }
    return (min->data);
}
t_stack *ra_or_rra(t_stack *a, int min_value, int min_data)
{
    int size;

    size = list_size(a);
    if (min_data >= size / 2)
    {
        while (a->data != min_value)
            a = rra(a);
    }
    else
    {
        while (a->data != min_value)
            a = ra(a);
    }
    return (a);
}
void	selection_sort(t_stack *a, t_stack *b)
{
	int	i;
	int	min_data;
	int	size;

	i = 0;
	size = list_size(a);
	while (i < size && is_stack_sorted(a) == 0)
	{
		min_data = find_min(a);
		if (a->data != min_data && size > 1)
			a = ra_or_rra(a, min_data, min_data);
		if (is_stack_sorted(a) == 0)
			pb(&a , &b);
		i++;
	}
	while (list_size(b) > 0)
		pa(&a , &b);
}