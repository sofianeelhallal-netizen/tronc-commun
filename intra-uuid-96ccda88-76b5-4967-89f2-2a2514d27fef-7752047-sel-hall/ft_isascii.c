/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-hall <sel-hall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 12:27:51 by username          #+#    #+#             */
/*   Updated: 2026/10/27 10:35:14 by sel-hall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_isascii(char *str)
{
	int	a;

	while (str[a] != 0)
	{
		if (str[a] >= 0 && str[a] <= 127)
		{
			a++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

// int	main(void)
// {
// 	printf("%d", ft_isascii("  DDd"));
// }
