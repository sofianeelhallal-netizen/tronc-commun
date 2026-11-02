/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-hall <sel-hall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 15:30:21 by username          #+#    #+#             */
/*   Updated: 2026/11/02 09:40:41 by sel-hall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	int		i;
	char	*substr;

	if (!s)
	{
		return ((char *) s);
	}
	i = 0;
	while (s[i])
	{
		i++;
	}
	if (start > i)
	{
		return ((char *) 0);
	}
	if (len > i - start)
	{
		len = i - start;
	}
	substr = malloc(sizeof(char) * (len + 1));
	if (!substr)
	{
		return (substr);
	}
	i = 0;
	while (i < len)
	{
		substr[i] = s[start + i];
		i++;
	}
	return (substr);
}

// int	main(void)
// {
// 	char	*res;

// 	res = ft_substr("Hello 42 Paris", 6, 2);
// 	printf("%s\n", res);
// 	free(res);
// 	return (0);
// }
