/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsizes.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-hall <sel-hall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 11:48:02 by username          #+#    #+#             */
/*   Updated: 2026/10/30 16:22:50 by sel-hall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	if (!lst)
	{
		return (0);
	}
	while (lst != NULL)
	{
		count++;
		lst->count
	}
	return (lst);
}

int	main(void)
{
	t_list	*lst;

	lst = ft_lstnew("premier");
	ft_lstadd_back(&lst, ft_lstnew("deuxieme"));
	ft_lstadd_back(&lst, ft_lstnew("troisieme"));
	printf("taille = %d\n", ft_lstsize(lst));
	free(lst->next->next);
	free(lst->next);
	free(lst);
	return (0);
}
