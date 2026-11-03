/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-hall <sel-hall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 15:30:21 by username          #+#    #+#             */
/*   Updated: 2026/11/03 10:04:08 by sel-hall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t n)
{
	size_t	i;
	char	*c;

	if (!s)
	{
		return ((NULL));
	}
	i = ft_strlen(s);
	if (start >= i)
		return (ft_strdup(""));
	if (n >= (i - start))
	{
		n = i - start;
	}
	c = malloc(n + 1);
	if (c == NULL)
	{
		return (NULL);
	}
	ft_strlcpy(c, s + start, n + 1);
	return (c);
}

// int	main(void)
// {
// 	char	*res;

// 	res = ft_substr("Hello 42 Paris", 6, 2);
// 	printf("%s\n", res);
// 	free(res);
// 	return (0);
// }
