/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-hall <sel-hall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 14:43:26 by username          #+#    #+#             */
/*   Updated: 2026/10/30 16:22:50 by sel-hall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *) s;
	while (n > 0)
	{
		*p = (unsigned char) c;
		p++;
		n--;
	}
	return (s);
}

// int	main(void)
// {
// 	char	a[10] = "123456789";
// 	char	b[10] = "123456789";

// 	a[9] = '\0';
// 	b[9] = '\0';
// 	memset(a, 'Z', 9);
// 	memset(b, 'Z', 9);
// 	ft_memset(a, 'A', 9);
// 	memset(b, 'A', 9);
// 	printf("memset: %s\n", a);
// 	printf("ft_memset: %s\n", b);
// 	return (0);
// }
