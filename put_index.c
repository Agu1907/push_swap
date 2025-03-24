#include "push_swap.h"

void put_index(t_stack *head , int index_max_limit)
{
    t_stack *min;
    t_stack *list;
    int index;

    index = 0;
    while(index < index_max_limit)
    {
        list = head;
        min = NULL;
        while (list)
        {
            if (list->index == -1 && (min == NULL || min->data > list->data))
                min = list;
            list = list->next;
        }
        min->index = index;
        index++;
    }
}