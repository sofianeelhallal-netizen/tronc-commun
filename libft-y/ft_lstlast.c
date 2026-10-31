/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-hall <sel-hall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 13:05:07 by username          #+#    #+#             */
/*   Updated: 2026/10/30 16:22:50 by sel-hall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
	{
		return (NULL);
	}
	while (lst != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}

int	main(void)
{
	t_list	*lst;
	t_list	*last;

	lst = ft_lstnew("premier");
	ft_lstadd_back(&lst, ft_lstnew("deuxieme"));
	ft_lstadd_back(&lst, ft_lstnew("troisieme"));
	last = ft_lstlast(lst);
	printf("%s\n", (char *) last->content);
	free(lst->next->next);
	free(lst->next);
	free(lst);
	return (0);
}
