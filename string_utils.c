#include "push_swap.h"
void    ft_free(char **str)
{
    int i = 0;
    while (str[i])
    {
        free(str[i]);
        i++;
    }
    free(str);
}

int ft_wordcount(char *str, char c)
{
    int i;
    int counter;

    i = 0;
    counter = 0;
    while (str[i])
	{
		if ((str[i] != c && str[i + 1] == c) || (str[i] != c && str[i + 1] == '\0'))
			counter++;
		i++;
	}
	return (counter);
}

char    **ft_split(char *str, char c)
{
    char **s;
    int word_counter;
    int i;
    int j;
    int start;

    i = 0;
    j = 0;
	word_counter = 0;
	if (!str)
		return (NULL);
    s = (char **)malloc(sizeof(char *) * (ft_wordcount(str , c) + 1));
    if (!s)
        return (NULL);
    while (word_counter < ft_wordcount(str, c))
    {
        while (str[j] == c)
            j++;
        start = j;
        while (str[j] != c && str[j])
            j++;
        s[i] = ft_substr(str , j - start , start);
		if (!s[i])
            ft_free(s);
        word_counter++;
		i++;
    }
	s[i] = NULL;
    return (s);
}

long    ft_atoi(char *str)
{
    int i;
    long res;
    int sign;

    i = 0;
    sign = 1;
    res = 0;
    if (str[i + 1] && (str[i] == '-' || str[i] == '+'))
    {
        if (str[i] == '-')
            sign = -1;
        i++;
    }
    while (str[i] && str[i] >= '0' && str[i] <= '9')
        res = (res * 10) + (str[i++] - '0');
    if (str[i] && ((str[i] >= '0' && str[i] <= '9') == 0))
        error_handler(NULL);
    res = res * sign;
    if (res > 2147483647 || res < -2147483648)
        error_handler(NULL);
    return (res);
}
char    *ft_substr(char *s, size_t len , unsigned int start)
{
    char *str;
    int i;

    i = 0;
    if (start >= ft_strlen(s))
    {
        str = malloc(sizeof(char) * 1);
        if (!str)
            return (NULL);
        str[i] = '\0';
        return (str);
    } 
    else if (len > ft_strlen(s) - start)
    {
        str = malloc(sizeof(char) * (ft_strlen(s) - start) + 1);
        if (!str)
            return (NULL);
        while (s[start])
        {
            str[i] = s[start];
            start++;
            i++;
        }
        str[i] = '\0';
        return (str);
    }
    else
    {
        str = malloc(sizeof(char) * len + 1);
        if (!str)
            return (NULL);
        int temp;

        temp = start;
        while (temp <= start + len - 1)
        {
            str[i] = s[temp];
            temp++;
            i++;
        }
        str[i] = '\0';
        return (str);
    }
}