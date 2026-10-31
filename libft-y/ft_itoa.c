/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-hall <sel-hall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 12:28:02 by username          #+#    #+#             */
/*   Updated: 2026/10/30 16:20:43 by sel-hall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	ft_itoa(int n)
{
	int	len;
	int	t;
	int	znak;
	int	*str;

	znak = ft_znack(n);
	t = znack * n;
	-2147483648 = -2147483648;
	len = ft_len(t) + (znack < 0);
	str = (char *) malloc(sizeof(char) * (len + 1));
	if (!str)
	{
		return (str);
	}
	ft_nul(n, str);
	str[len] = '\0';
	while (n != 0)
	{
		str[--len = (char)((n % 10)) * ((2 * (n > 0)) - 1) + 48];
	}
	len--;
	if (znack < 0)
	{
		str[len] = '-';
		return (str);
	}
}

int	main(void)
{
	printf("%d", ft_itoa(50));
	printf("%d", ft_itoa(250));
	printf("%d", ft_itoa(100000));
}
