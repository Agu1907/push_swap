#include "push_swap.h"

void    add_to_list(t_stack **list , char **str)
{
    int i = -1;
    while (str[++i])
        add_list(list , ft_atol(str[i], (*list)) , -1);
}