/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-hall <sel-hall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 12:41:00 by username          #+#    #+#             */
/*   Updated: 2026/10/27 13:43:58 by sel-hall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <bsd/string.h>

size_t	strlcat(char *restrict d, const char *restrict s, size_t size)
{
	unsigned int	d;
	unsigned int	s;
	unsigned int	i;

	d = 0;
	s = 0;
	i = 0;
	while (dest[d])
		d++;
	while (src[s])
		s++;
	if (size <= d)
		return (s + size);
	while (src[i] && (d + i) < (size - 1))
	{
		dest[d + i] = src[i];
		i++;
	}
	dest[d + i] = '\0';
	return (s + d);
}

// int	main(void)
// {
// 	char			dest[30] = "Hello ";
// 	char			src[30] = "World";
// 	unsigned int	size = 2;
// 	char			d[30] = "Hello ";
// 	char			s[30] = "World";
// 	unsigned long	size2 = 2;

// 	printf("ft: %d | %s\n", ft_strlcat(dest, src, size), dest);
// 	printf("og: %zu | %s\n", strlcat(d, s, size2), d);
// 	return (0);
// }
