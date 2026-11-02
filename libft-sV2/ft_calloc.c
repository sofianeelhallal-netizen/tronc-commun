/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-hall <sel-hall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 12:25:43 by username          #+#    #+#             */
/*   Updated: 2026/11/02 09:37:46 by sel-hall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t s)
{
	void	*ptr;
	size_t	i;
	char	*dst;

	i = 0;
	if (!n || !s)
	{
		return (NULL);
	}
	ptr = malloc(n * s);
	if (!ptr)
	{
		return (NULL);
	}
	dst = (char *) ptr;
	while (i != (n * s))
	{
		dst[i] = 0;
		i++;
	}
	return (dst);
}

// int	main(void)
// {
// 	int	*tab;

// 	tab = ft_calloc(5, sizeof(int));
// 	printf("%d %d %d %d %d\n", tab[0], tab[1], tab[2], tab[3], tab[4]);
// 	free(tab);
// 	return (0);
// }
