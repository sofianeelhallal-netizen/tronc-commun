/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-hall <sel-hall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 12:41:58 by username          #+#    #+#             */
/*   Updated: 2026/10/27 14:30:04 by sel-hall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strnstr(char *str, char *to_find, size_t len)
{
	int	i;
	int	j;

	if (to_find[0] == '\0')
		return (str);
	i = 0;
	while (str[i] && i < len)
	{
		j = 0;
		while (str[i + j] && i < len && str[i + j] == to_find[j] && i < len)
			j++;
		if (to_find[j] == '\0')
			return (&str[i]);
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	char	str[30] = "thomas";
// 	char	to_find[30] = "o";
// 	char	s[30] = "thomas";
// 	char	t[30] = "o";

// 	printf("%s \n", ft_strstr(str, to_find));
// 	printf("%s", strstr(s, t));
// }
