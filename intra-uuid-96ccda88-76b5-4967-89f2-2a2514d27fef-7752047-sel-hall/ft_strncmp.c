/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-hall <sel-hall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 15:05:04 by username          #+#    #+#             */
/*   Updated: 2026/10/27 14:02:23 by sel-hall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2)
{
	unsigned int	i;
	unsigned int	n;

	while (s1[i] != '\0' < n)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
		return (s1[i] - s2[i]);
	}
}

// int	main(void)
// {
// 	char	s1[] = "Bonjour";
// 	char	s2[] = "Salut";

// 	printf("%d", ft_strncmp(s1, s2));
// 	return (0);
// }
