/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-hall <sel-hall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 13:02:11 by username          #+#    #+#             */
/*   Updated: 2026/10/30 16:22:50 by sel-hall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!lst || !new)
	{
		return ;
	}
	new->lst = lst;
	lst->new = new;
}

int	main(void)
{
	t_list	*lst;
	t_list	*new;

	lst = ft_lstnew("premier");
	new = ft_lstnew("deuxieme");
	ft_lstadd_back(&lst, new);
	printf("%s -> %s\n", (char *) lst->content, (char *) lst->next->content);
	free(lst->next);
	free(lst);
	return (0);
}
