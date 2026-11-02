/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-hall <sel-hall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 13:05:07 by username          #+#    #+#             */
/*   Updated: 2026/11/02 12:36:47 by sel-hall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*tmp;

	if (!lst)
	{
		return (NULL);
	}
	tmp = lst;
	while (lst != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}

// int	main(void)
// {
// 	t_list	*lst;
// 	t_list	last;

// 	lst = ft_lstnew(ft_strdup("hello"));
// 	last = ft_lstlast("hello");
// 	printf("%s | next = %p\n", (char *) lst->content, (void *) lst->next);
// 	free(last->content);
// 	free(lst);
// 	return (0);
// }
