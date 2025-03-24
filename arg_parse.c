#include "push_swap.h"

t_stack *arg_parse(char *str, t_stack *list)
{
    int i;
    char **s;

    if (ft_wordcount(str, ' ') == 0)
        error_handler(list);
    s = ft_split(str , ' ');
    i = -1;
    while (s[++i])
        list = add_list(list , ft_atoi(s[i]) , -1);
    check_repeat(list , list_size(list));
    ft_free(s);
    return (list);
}