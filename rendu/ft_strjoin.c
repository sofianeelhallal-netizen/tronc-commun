/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-hall <sel-hall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 12:37:07 by username          #+#    #+#             */
/*   Updated: 2026/11/03 10:27:02 by sel-hall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	t;

	t = ft_strlen(s1) + ft_strlen(s2) + 1;
	str = malloc(t);
	if (str == NULL)
		return (NULL);
	ft_strlcpy(str, s1, t);
	ft_strlcat(str, s2, t);
	return (str);
}

// int	main(void)
// {
// 	char	*tab[] =
// 	{
// 		"Salut", "les", "amis"
// 	};
// 	char	*res;

// 	res = ft_strjoin(3, tab, "-");
// 	printf("%s\n", res);
// 	free(res);
// 	return (0);
// }
