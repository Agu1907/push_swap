#include "push_swap.h"

int main (int ac, char **av)
{
	t_stack *list;
	char **s;
	int i;

	list = NULL;
	i = 1;
	while (i < ac)
		list = arg_parse(av[i++] , list);
	if (is_stack_sorted(list))
		error_handler(list);
	push_swap(list);
}