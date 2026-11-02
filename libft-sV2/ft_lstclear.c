/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-hall <sel-hall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 13:02:08 by username          #+#    #+#             */
/*   Updated: 2026/11/02 12:42:31 by sel-hall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;
	t_list	*suiv;

	if (!lst)
		return (NULL);
	while (tmp != NULL)
	{
		del(tmp->content);
		suiv = tmp->next;
		free(tmp);
		tmp = suiv;
	}
	*lst = NULL;
}

// int	main(void)
// {
// 	t_list	*lst;

// 	lst = ft_lstnew(strdup("premier"));
// 	ft_lstadd_back(&lst, ft_lstnew(strdup("deuxieme")));
// 	ft_lstadd_back(&lst, ft_lstnew(strdup("troisieme")));
// 	ft_lstclear(&lst, free);
// 	printf("lst = %p\n", (void *) lst);
// 	return (0);
// }
