/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-hall <sel-hall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 15:05:04 by username          #+#    #+#             */
/*   Updated: 2026/11/03 11:31:20 by sel-hall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*copie;
	size_t	t;

	t = ft_strlen(s) + 1;
	copie = malloc(t);
	if (!copie)
		return (NULL);
	ft_strlcpy(copie, s, t);
	return (copie);
}

// int	main(void)
// {
// 	char	*src = "Bonjour 42";
// 	char	*mine;
// 	char	*real;

// 	mine = ft_strdup(src);
// 	printf("ft_strdup : %s\n", mine);
// 	printf("adresse differente de src : %s\n", (mine != src) ? "OK" : "KO");
// 	free(mine);
// 	return (0);
// }
