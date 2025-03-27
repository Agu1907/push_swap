#include "push_swap.h"
void    push_swap(t_stack *list, t_stack *list_b)
{
    if(list_size(list) == 2)
        two_number_sort(&list);
    if (list_size(list) == 3)
        three_number_sort(&list);
    if (list_size(list) == 4 || list_size(list) == 5)
        mini_quick_sort(&list , &list_b);
    if (list_size(list) > 5)
        radix_sort(&list , &list_b);
    list_free(list);
}