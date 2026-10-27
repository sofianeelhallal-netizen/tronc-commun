/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-hall <sel-hall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 14:03:02 by username          #+#    #+#             */
/*   Updated: 2026/10/27 14:03:09 by sel-hall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "libft.h"

char	ft_strrchr(const char *str, int c)
{
	while (*str != '\0')
	{
		if (*str == c)
		{
			return ((char *) str);
			str--;
		}
	}
}

// int	main(void)
// {
// 	const char	s[] = "Bonjour";

// 	printf("%s", (char *) ft_strchr(s, 5));
// 	return (0);
// }
