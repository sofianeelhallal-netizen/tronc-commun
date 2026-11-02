/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-hall <sel-hall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 15:48:28 by username          #+#    #+#             */
/*   Updated: 2026/11/02 09:41:36 by sel-hall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int ft_strlen(char *str)
{
	int	a;

	while (str[a] != 0)
	{
		a++;
	}
	return (a);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	size_t	start;
	size_t	end;
	int		found;
	char	*res;

	i = 0;
	start = 0;
	found = 0;
	if (!s1 || !set)
	{
		return (NULL);
	}
	while (s1[i] != '\0')
	{
		i = 0;
		found = 0;
		while (set[i])
		{
			if (s1[start] == set[i])
			{
				found = 1;
				break ;
			}
			i++;
		}
		if (found == 0)
		{
			break ;
		}
		start++;
	}
	end = ft_strlen((char *) s1);
	while (end > start)
	{
		i = 0;
		found = 0;
		while (set[i] != '\0')
		{
			if (s1[end - 1] == set[i])
			{
				found = 1;
				break ;
			}
			i++;
		}
		if (found == 0)
		{
			break ;
		}
		end--;
	}
	res = malloc(sizeof(char) * (end - start + 1));
	if (!res)
	{
		return (NULL);
	}
	return (res);
}

// int	main(void)
// {
// 	char	*res;

// 	res = ft_strtrim("   hello world   ", " ");
// 	printf("[%s]\n", res);
// 	free(res);
// 	return (0);
// }
