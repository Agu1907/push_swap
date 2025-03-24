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

t_stack *add_list(t_stack *list, int n , int index)
{
	t_stack *node = NULL;
    t_stack *copy_of_list;

    if (!list)
    {
        list = malloc(sizeof(t_stack));
        list->data = n;
        list->index = index;
        list->next = NULL;
        return (list);
    }

	    node = malloc(sizeof(t_stack));
        node->data = n;
        node->index = index;
        node->next = NULL;

    copy_of_list = list;
    while (copy_of_list->next)
        copy_of_list = copy_of_list->next;
    copy_of_list->next = node;
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
t_stack *list_free(t_stack *list)
{
    t_stack *temp;

    while (list)
    {
        temp = list->next;
        free(list);
        list = temp;
    }
}