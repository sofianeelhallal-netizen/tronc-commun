#include <unistd.h>
#include <stdio.h>
#include "libft.h"
#include "stdlib.h"

void ft_lstdelone(t_list *lst, void (*del)(void*))
{
    if(!list)
    {
        return;
    }
    del(lst -> content);
    return(lst);
}