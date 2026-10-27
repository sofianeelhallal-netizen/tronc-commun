/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memove.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-hall <sel-hall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 12:42:06 by username          #+#    #+#             */
/*   Updated: 2026/10/27 12:57:37 by sel-hall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	*ft_memove(void *dst, const void *src, size_t len)
{
	char	*s;
	char	*d;
	size_t	i;

	s = (char *) src;
	d = (char *) dst;
	i = 0;
	if (d > s)
	{
		while (len-- > 0)
		{
			d[len] = s[len];
		}
		if (i < len)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dst);
}

// int	main(void)
// {
// 	char	d[] = " ";
// 	char	s[] = "Hello";

// 	printf("%s", (char *)(ft_memove(d, s, 2)));
// 	return (0);
// }
