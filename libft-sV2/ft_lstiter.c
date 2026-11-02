/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-hall <sel-hall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 15:05:04 by username          #+#    #+#             */
/*   Updated: 2026/11/02 12:44:37 by sel-hall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	size_t			i;
	unsigned char	*x;

	i = 0;
	x = (unsigned char *)(str);
	while (i != n)
	{
		x[i] = 0;
		i++;
	}
}

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*tmp;

	if (!lst || !f)
		return ;
	tmp = lst;
	while (lst != NULL)
	{
		f(lst->content);
		tmp = lst->next;
	}
}

// int	main(void)
// {
// 	t_list	*lst;

// 	lst = ft_lstnew("premier");
// 	ft_lstadd_back(&lst, ft_lstnew("deuxieme"));
// 	ft_lstadd_back(&lst, ft_lstnew("troisieme"));
// 	ft_lstiter(lst, print_content);
// 	free(lst->next->next);
// 	free(lst->next);
// 	free(lst);
// 	return (0);
// }
