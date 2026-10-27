/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-hall <sel-hall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 14:30:43 by username          #+#    #+#             */
/*   Updated: 2026/10/27 14:31:33 by sel-hall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "libft.h"

void	ft_memchr(const void *point1, int n, size_t value)
{
	unsigned char	*p1;
	size_t			i;

	i = 0;
	p1 = (unsigned char)*point1;
	while (p1 == i)
	{
		return ((char *) p1);
		p1++;
	}
}

// int	main(void)
// {
// 	char	p1[] = "Bonjour";
// 	char	p2[] = "Salut";

// 	printf("%d", ft_memchr(p1, 5, 5));
// 	return (0);
// }
