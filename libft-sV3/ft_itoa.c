/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-hall <sel-hall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 12:28:02 by username          #+#    #+#             */
/*   Updated: 2026/11/02 10:23:30 by sel-hall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_lennumber(long n)
{
	size_t	len;

	len = 1;
	if (n < 0)
		len++;
	while (n <= -10 || n >= 10)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)

{
	long	num;
	char	*s;
	int		i;

	num = (long)n;
	i = ft_lennumber(n);
	s = malloc(i + 1);
	if (s == NULL)
		return (NULL);
	s[i] = '\0';
	if (num == 0)
		s[0] = '0';
	if (num < 0)
	{
		num = -num;
		s[0] = '-';
	}
	while (num != 0)
	{
		i--;
		s[i] = (num % 10) + '0';
		num = num / 10;
	}
	return (s);
}

// int	main(void)
// {
// 	printf("%s\n", ft_itoa(42));
// 	return (0);
// }
