/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-hall <sel-hall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 13:49:42 by username          #+#    #+#             */
/*   Updated: 2026/10/30 16:22:50 by sel-hall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == (char) c)
		{
			return ((char *)(&str[i]));
		}
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	const char	s[] = "Bonjour";
// 	char		*c;

// 	c = ft_strchr(s, 'o');
// 	if (c)
// 	{
// 		printf("ft_strchr: %s", c);
// 	}
// 	else
// 	{
// 		printf("Non trouve\n");
// 	}
// 	return (0);
// }
