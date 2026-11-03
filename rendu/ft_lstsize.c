/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-hall <sel-hall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 11:48:02 by username          #+#    #+#             */
/*   Updated: 2026/11/02 12:27:03 by sel-hall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		count;
	t_list	*tmp;

	tmp = lst;
	count = 0;
	if (!lst)
	{
		return (0);
	}
	while (tmp != NULL)
	{
		tmp = tmp->next;
		count++;
	}
	return (count);
}

// int	main(void)
// {
// 	t_list	c =
// 	{
// 		"trois", NULL
// 	};
// 	t_list	b =
// 	{
// 		"deux", &c
// 	};
// 	t_list	a =
// 	{
// 		"un", &b
// 	};
// 	printf("%d\n", ft_lstsize(&a));
// 	return (0);
// }
