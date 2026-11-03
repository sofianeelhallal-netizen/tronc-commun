/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-hall <sel-hall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 14:03:02 by username          #+#    #+#             */
/*   Updated: 2026/11/02 09:34:12 by sel-hall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	while (i >= 0)
	{
		if (str[i] == (char) c)
		{
			return ((char *)(&str[i]));
		}
		i--;
	}
	return (NULL);
}

// int	main(void)
// {
// 	const char	s[] = "Bonjour";
// 	char		*c;

// 	c = ft_strrchr(s, 'o');
// 	if (c)
// 		printf("ft_strrchr: %s\n", c);
// 	else
// 		printf("Non trouve\n");
// 	return (0);
// }
