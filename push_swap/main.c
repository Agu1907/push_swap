#include "push_swap.h"

int main (int ac, char **av)
{
	t_stack *list;
	t_stack *list_b;
	char **s;
	int i;

	list = NULL;
	list_b = NULL;
	if (ac == 2)
	{
		s = ft_split(av[1] , ' ');
		add_to_list(&list , s);
		ft_free(s);
	}
	else
		add_to_list(&list , av + 1);
	if(is_stack_sorted(list) || check_repeat(list))
		error_handler(list);
	push_swap(list, list_b);
}