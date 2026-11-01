/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-hall <sel-hall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 14:03:30 by username          #+#    #+#             */
/*   Updated: 2026/10/30 15:36:19 by sel-hall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *point1, const void *point2, size_t n)
{
	unsigned char	*p1;
	unsigned char	*p2;
	size_t			i;

	i = 0;
	p1 = (unsigned char *) point1;
	p2 = (unsigned char *) point2;
	if (n == 0)
	{
		return (0);
	}
	while (p1[i] != 0 && i < n && p1[i] == p2[i])
	{
		i++;
	}
	return (p1[i] - p2[i]);
}

// int	main(void)
// {
// 	char	p1[] = "Bonjour";
// 	char	p2[] = "Salut";

// 	printf("%d", ft_memcmp(p1, p2, 5));
// 	return (0);
// }
