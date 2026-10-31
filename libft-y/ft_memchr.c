/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-hall <sel-hall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 14:30:43 by username          #+#    #+#             */
/*   Updated: 2026/10/30 16:22:50 by sel-hall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*p;
	size_t			i;

	i = 0;
	p = (unsigned char *) s;
	while (i < n)
	{
		if (p[i] == (unsigned char) c)
		{
			return (&p[i]);
		}
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char	str[] = "Bonjour 42";
// 	char	*res;

// 	res = ft_memchr(str, 'j', 10);
// 	if (res)
// 		printf("Trouvé : %s\n", res);
// 	else
// 		printf("Pas trouvé\n");
// 	return (0);
// }
