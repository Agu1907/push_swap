#include "push_swap.h"

void    error_handler(t_stack *list)
{
    if (list)
        list_free(list);
    ft_error_putstr("Error\n");
    exit(0);
}

void    ft_error_putstr(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        write(2, &str[i], 1);
        i++;
    }
}