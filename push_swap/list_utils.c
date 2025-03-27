#include "push_swap.h"

int list_size(t_stack *list)
{
    int counter;

    counter = 0;
    while (list)
    {
        list = list->next;
        counter++;
    }
    return (counter);
}

void    add_list(t_stack **list, int n , int index)
{
    t_stack *new_node;

    new_node = malloc(sizeof(t_stack));
    new_node->data = n;
    new_node->index = index;
    new_node->next = NULL;
    if (!(*list))
        *list = new_node;
    else
        last_node(*list)->next = new_node;
}

t_stack *last_node(t_stack *list)
{
    while (list->next)
        list = list->next;
    return (list);
}
int is_stack_sorted(t_stack *list)
{
    while(list)
    {
        if (list->next && (list->data < list->next->data))
            list = list->next;
        else if(list->next == NULL)
            return (1);
        else
            return (0);
    }
    return (1);
}

void    list_free(t_stack *list)
{
    t_stack *temp;

    while (list)
    {
        temp = list;       
        list = list->next;
        free(temp);        
    }
}
