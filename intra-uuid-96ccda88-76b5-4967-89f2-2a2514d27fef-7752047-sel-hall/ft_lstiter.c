/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-hall <sel-hall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 15:05:04 by username          #+#    #+#             */
/*   Updated: 2026/10/26 15:05:04 by sel-hall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "libft.h"
#include "stdlib.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	a;

	if (!lst)
	{
		return ;
	}
}
