/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-hall <sel-hall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 15:05:04 by username          #+#    #+#             */
/*   Updated: 2026/11/02 13:16:33 by sel-hall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*tmp;
	t_list	*new;
	t_list	*noeud;
	void	*cont;

	new = NULL;
	tmp = lst;
	while (tmp != NULL)
	{
		cont = f(tmp->content);
		noeud = ft_lstnew(cont);
		if (noeud == NULL)
		{
			del(cont);
			ft_lstclear(&new, del);
			return (lst);
		}
		ft_lstadd_back(&new, noeud);
		tmp = tmp->next;
	}
	return (new);
}

// void	*ft_void_toupper(void *str)
// {
// 	int				i;
// 	unsigned char	*x;

// 	x = (unsigned char *) str;
// 	while (x[i] != '\0')
// 	{
// 		if (x[i] >= 'a' && x[i] <= 'z')
// 		{
// 			x[i] -= 32;
// 		}
// 		i++;
// 	}
// 	return (x);
// }

// int	main(void)
// {
// 	t_list	*lst;
// 	t_list	*new;

// 	lst = ft_lstnew("premier");
// 	ft_lstadd_back(&lst, ft_lstnew("deuxieme"));
// 	ft_lstadd_back(&lst, ft_lstnew("troisieme"));
// 	new = ft_lstmap(lst, &ft_void_toupper, free);
// 	printf("%s -> %s -> %s\n",
// 		(char *) new->content,
// 	(char *) new->next->content,
// 	(char *) new->next->next->content);
// 	ft_lstclear(&new, free);
// 	free(lst->next->next);
// 	free(lst->next);
// 	free(lst);
// 	return (0);
// }
