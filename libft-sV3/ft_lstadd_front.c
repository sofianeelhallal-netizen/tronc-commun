/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-hall <sel-hall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 12:48:24 by username          #+#    #+#             */
/*   Updated: 2026/11/02 12:19:31 by sel-hall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
	{
		return ;
	}
	new->next = *lst;
	*lst = new;
}

// t_list	*ft_lstnew(void *content)
// {
// 	t_list	*new;

// 	new = malloc(sizeof(t_list));
// 	if (!new)
// 	{
// 		return (NULL);
// 	}
// 	new->content = content;
// 	new->next = NULL;
// 	return (new);
// }

// int	main(void)
// {
// 	t_list	*lst;
// 	t_list	*new;

// 	lst = ft_lstnew("deuxieme");
// 	new = ft_lstnew("premier");
// 	ft_lstadd_front(&lst, new);
// 	printf("%s -> %s\n", (char *) lst->content, (char *) lst->next->content);
// 	free(lst->next);
// 	free(lst);
// 	return (0);
// }
