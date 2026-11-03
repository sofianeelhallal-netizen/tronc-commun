/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-hall <sel-hall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 13:49:42 by username          #+#    #+#             */
/*   Updated: 2026/11/02 09:33:37 by sel-hall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if ((char)c == '\0')
		return ((char *)&s[i]);
	return (NULL);
}

// int	main(void)
// {
// 	const char	s[] = "Bonjour";
// 	char		*c;

// 	c = ft_strchr(s, 'o');
// 	if (c)
// 	{
// 		printf("ft_strchr: %s\n", c);
// 	}
// 	else
// 	{
// 		printf("Non trouve\n");
// 	}
// 	return (0);
// }
