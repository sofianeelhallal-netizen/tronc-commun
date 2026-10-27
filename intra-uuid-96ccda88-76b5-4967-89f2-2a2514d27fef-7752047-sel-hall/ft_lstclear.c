#include <unistd.h>
#include <stdio.h>
#include "libft.h"
#include "stdlib.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list *a;

    while(*lst)
    {
        a = (*lst) -> next;
        ft_strdelone(*lst, del);
        *lst = a -> next;
    }
}
