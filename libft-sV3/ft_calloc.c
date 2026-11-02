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
#include <stdint.h>

static void	ft_bzero_local(void *str, size_t n)
{
	size_t			i;
	unsigned char	*x;

	i = 0;
	x = (unsigned char *)(str);
	while (i < n)
	{
		x[i] = '\0';
		i++;
	}
}

void	*ft_calloc(size_t n, size_t s)
{
	void *a;

	if  (s != 0 && n > SIZE_MAX / s)
		return(NULL);
	a = malloc(n * s);
	if (a == NULL )
		return(NULL);
	ft_bzero_local(a, n * s);
	return(a);
}

// int	main(void)
// {
// 	int	*tab;

// 	tab = ft_calloc(5, sizeof(int));
// 	printf("%d %d %d %d %d\n", tab[0], tab[1], tab[2], tab[3], tab[4]);
// 	free(tab);
// 	return (0);
// }
