/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-hall <sel-hall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 12:27:57 by username          #+#    #+#             */
/*   Updated: 2026/10/27 10:33:37 by sel-hall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_isdigit(char *str)
{
	int	a;

	while (str[a] != 0)
	{
		if (str[a] >= 48 && str[a] <= 57)
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
// 	printf("%d", ft_isdigit("555"));
// }
