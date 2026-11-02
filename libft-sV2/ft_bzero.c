/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-hall <sel-hall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 11:33:35 by username          #+#    #+#             */
/*   Updated: 2026/11/02 09:25:57 by sel-hall         ###   ########.fr       */
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
		x[i] = 'a';
		i++;
	}
}

// int	main(void)
// {
// 	char	a[] = "bebbebebbebbebeb";

// 	ft_bzero(a, 5);
// 	printf("%s", a);
// 	return (0);
// }
