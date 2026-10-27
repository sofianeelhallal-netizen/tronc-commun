#include <unistd.h>
#include <stdio.h>
#include "libft.h"
#include "stdlib.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
    if(!lst || !new)
    {
        return;
    }
    new -> lst = lst;
    lst -> new = new;
}