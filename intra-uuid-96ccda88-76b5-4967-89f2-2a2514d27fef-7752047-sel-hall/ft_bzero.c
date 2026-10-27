/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-hall <sel-hall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 11:33:35 by username          #+#    #+#             */
/*   Updated: 2026/10/27 10:53:58 by sel-hall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_bzero(void *str, size_t n)
{
	int				i;
	unsigned char	*x;

	i = 0;
	x = (unsigned char *) str;
	while (i != n)
	{
		x[i] = '\0';
		i++;
	}
}

// int	main(void)
// {
// 	char	s[] = "HelloWorld";

// 	ft_bzero(s, 5);
// 	printf("Après ft_bzero (octets 0 à 4 mis à 0):\n");
// 	for (int i = 0; i < 12; i++)
// 	{
// 		if (s[i] == '\0')
// 			printf("\\0 ");
// 		else
// 			printf("%c ", s[i]);
// 	}
// 	printf("\n");
// 	return (0);
// }
