/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-hall <sel-hall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 13:05:07 by username          #+#    #+#             */
/*   Updated: 2026/10/30 16:22:50 by sel-hall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!list)
	{
		return ;
	}
	del(lst->content);
	return (lst);
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
