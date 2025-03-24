#include "push_swap.h"

void    *radix_sort(t_stack *a, t_stack *b)
{
    int bit;
    int len;
    
    bit = 1;
    if (is_stack_sorted(a))
        error_handler(a);
    put_index(a , list_size(a));
    while (!is_stack_sorted(a))
    {
        len = list_size(a);
        while (len)
        {
            if((a->index & bit) != bit)
                pb(&a , &b);
            else
                a = ra(a);
            len--;
        }
        while (b)
            pa(&a , &b);
        bit = bit << 1;
    }
    list_free(a);
}