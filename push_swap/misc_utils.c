#include "push_swap.h"

int ft_strlen(char *str)
{
    int i = 0;
    while (str[i])
        i++;
    return (i);
}

void    ft_putstr(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        write (1, &str[i], 1);
        i++;
    }
    write (1 , "\n" , 1);
}

int    check_repeat(t_stack *list)
{
    t_stack *temp;

    temp = list;
    while (list->next)
    {
        while (temp->next)
        {
            if (list->data == temp->next->data)
                return (1);
            temp = temp->next;
        }
        list = list->next;
        temp = list;
    }
    return (0);
}