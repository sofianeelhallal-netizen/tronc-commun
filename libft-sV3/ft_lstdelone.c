/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-hall <sel-hall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 13:05:07 by username          #+#    #+#             */
/*   Updated: 2026/11/02 12:39:32 by sel-hall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst)
	{
		return ;
	}
	del(lst->content);
	free(lst);
}

// int	main(void)
// {
// 	t_list	*lst;

// 	lst = ft_lstnew(strdup("hello"));
// 	printf("avant : %s\n", (char *) lst->content);
// 	ft_lstdelone(lst, free);
// 	printf("apres : element supprime\n");
// 	return (0);
// }
