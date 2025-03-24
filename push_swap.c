#include "push_swap.h"

void    push_swap(t_stack *list)
{
    if(list_size(list) == 2)
        sa(list);
    if (list_size(list) == 3)
        three_number_sort(list , NULL);
    if (list_size(list) == 4 || list_size(list) == 5)
        selection_sort(list , NULL);
    if (list_size(list) > 5)
        radix_sort(list , NULL);
}