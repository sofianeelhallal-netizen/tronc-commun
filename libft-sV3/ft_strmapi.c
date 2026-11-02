/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-hall <sel-hall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 15:51:39 by username          #+#    #+#             */
/*   Updated: 2026/11/02 10:29:23 by sel-hall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	*ft_strlen(const char *s)
{
	int	a;

	a = 0;
	while (s[a] != 0)
	{
		a++;
	}
	return (a);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*res;

	res = malloc(ft_strlen(s) + 1);
	if (!res)
		return (NULL);
	i = 0;
	while (s[i])
	{
		res[i] = f(i, s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}

// int	main(void)
// {
// 	char	*res;

// 	res = ft_strmapi("hello world", (size_t)ft_strlen);
// 	printf("[%s]\n", res);
// 	free(res);
// 	return (0);
// } 
