#include "push_swap.h"

void    radix_sort(t_stack **a, t_stack **b)
{
    int len;
    int max_bit;
    int bit_counter;
    bit_counter = 0;

    if (is_stack_sorted((*a)))
        error_handler((*a));
    put_index((*a) , list_size((*a)));
    max_bit = find_max_bit((*a));
    while (bit_counter < max_bit)
    {
        len = list_size((*a));
        while (len)
        {
            if (is_stack_sorted((*a)))
                break;
            if((((*a)->index >> bit_counter) & 1) == 0)
                pb(a , b);
            else
                ra(a);
            len--;
        }
        len = list_size((*b));
        bit_counter++;
        if (bit_counter < max_bit)
        {
            while (len)
            {
                if ((((*b)->index >> bit_counter) & 1))
                    pa(a , b);
                else
                    rb(b);
                len--;
            }
        }
        else
            break;
    }
    while ((*b))
        pa(a , b);
}
int find_max_bit(t_stack *list)
{
    int max_index;
    int bit_counter;

    bit_counter = 0;
    max_index = list_size(list) - 1;
    while(max_index)
    {
        max_index /= 2;
        bit_counter++;
    }
    return (bit_counter);
}