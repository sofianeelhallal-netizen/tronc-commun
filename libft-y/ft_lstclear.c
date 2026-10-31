/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-hall <sel-hall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 13:02:08 by username          #+#    #+#             */
/*   Updated: 2026/10/30 16:22:50 by sel-hall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*a;

	while (*lst)
	{
		a = (*lst)->next;
		ft_strdelone(*lst, del);
		*lst = a->next;
	}
}

int	main(void)
{
	t_list	*lst;

	lst = ft_lstnew(strdup("premier"));
	ft_lstadd_back(&lst, ft_lstnew(strdup("deuxieme")));
	ft_lstadd_back(&lst, ft_lstnew(strdup("troisieme")));
	ft_lstclear(&lst, free);
	printf("lst = %p\n", (void *) lst);
	return (0);
}
