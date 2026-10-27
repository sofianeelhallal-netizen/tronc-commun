#include <unistd.h>
#include <stdio.h>
#include "libft.h"
#include "stdlib.h"

int ft_lstsize(t_list *lst)
{
    int count;

    if(!lst)
    {
        return(0);
    }
    while(lst != NULL)
    {
        count++;
        lst -> count
    }
    return(lst);
}


