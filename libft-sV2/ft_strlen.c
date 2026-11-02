/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strlen.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/26 12:38:02 by username         #+#    #+#              */
/*   Updated: 2026/11/02 15:44:25 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int	a;

	a = 0;
	while (s[a] != 0)
	{
		a++;
	}
	return (a);
}

// int	main(void)
// {
// 	printf("%zu", ft_strlen('Bonjour'));
// 	return (0);
// }
