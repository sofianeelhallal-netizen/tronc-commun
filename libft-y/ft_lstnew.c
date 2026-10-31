/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-hall <sel-hall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 13:05:07 by username          #+#    #+#             */
/*   Updated: 2026/10/30 16:22:50 by sel-hall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	ft_lstnew(void *content)
{
	t_list	new;

	new = malloc(sizeof(t_list));
	if (!new)
	{
		return (new);
	}
	new->content = content;
	new->next = NULL;
	return (new);
}

int	main(void)
{
	t_list	*lst;

	lst = ft_lstnew("hello");
	printf("%s | next = %p\n", (char *) lst->content, (void *) lst->next);
	free(lst);
	return (0);
}
