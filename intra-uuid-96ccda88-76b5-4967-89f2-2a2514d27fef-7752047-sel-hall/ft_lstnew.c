#include <unistd.h>
#include <stdio.h>
#include "libft.h"
#include "stdlib.h"

t_list ft_lstnew(void *content)
{
    t_list new;
    
    new = malloc(sizeof(t_list));
    if(!new)
    {
        return(new);
    }
    new->content = content;
    new->next = NULL;
    return(new);
}
