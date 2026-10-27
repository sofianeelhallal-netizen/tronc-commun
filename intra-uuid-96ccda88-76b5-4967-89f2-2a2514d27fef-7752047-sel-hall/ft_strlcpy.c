/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-hall <sel-hall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 15:05:04 by username          #+#    #+#             */
/*   Updated: 2026/10/27 13:16:52 by sel-hall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

static size_t	ft_strlen(const char *str)
{
	size_t	a;

	while (str[a] != 0)
	{
		a++;
	}
	return (a);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
	{
		return (ft_strlen(src));
	}
	while (src[i] != '\0' && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}

// int	main(void)
// {
// 	char	d[] = "HelloWorld";
// 	char	s[] = "abcdef";

// 	printf("%zu", ft_strlcpy(d, s, 5));
// 	printf("\n");
// 	return (0);
// }
