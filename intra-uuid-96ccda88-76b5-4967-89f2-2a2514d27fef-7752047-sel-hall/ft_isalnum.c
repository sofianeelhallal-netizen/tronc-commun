/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-hall <sel-hall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 12:27:02 by username          #+#    #+#             */
/*   Updated: 2026/10/27 10:34:41 by sel-hall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_isalnum(char *str)
{
	int	a;

	while (str[a] != 0)
	{
		if (str[a] >= 48 && str[a] <= 57 || (str[a] >= 65 && str[a] <= 90 || (str[a] >= 97 && str[a] >= 122)))
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
// 	printf("%d", ft_isalnum("57"));
// }
