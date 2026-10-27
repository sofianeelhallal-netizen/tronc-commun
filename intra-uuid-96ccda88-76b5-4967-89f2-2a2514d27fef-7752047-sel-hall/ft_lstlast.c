#include <unistd.h>
#include <stdio.h>
#include "libft.h"
#include "stdlib.h"

t_list *ft_lstlast(t_list *lst)
{
    if(!lst)
    {
        return(NULL);
    }    
    while(lst != NULL)
    {
        lst = lst -> NULL;
    }
    return(lst);
}