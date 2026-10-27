/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-hall <sel-hall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 15:51:34 by username          #+#    #+#             */
/*   Updated: 2026/10/27 12:40:11 by sel-hall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stddef.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	i = 0;
	d = (unsigned char *) dst;
	s = (unsigned char *) src;
	if (!d || !s)
	{
		return (0);
	}
	else if (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}

// int	main(void)
// {
// 	char	d[] = " ";
// 	char	s[] = "Hello";

// 	printf("%s", (char *)(ft_memcpy(d, s, 2)));
// 	return (0);
// }
