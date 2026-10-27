/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-hall <sel-hall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 12:37:07 by username          #+#    #+#             */
/*   Updated: 2026/10/26 12:37:26 by sel-hall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "libft.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dest;
	int		total;
	int		i;
	int		j;

	total = 0;
	i = 0;
	if (size == 0)
		return (malloc(1));
	while (i < size)
	{
		total += ft_strlen(strs[i]);
		i++;
	}
	total += ft_strlen(sep) * (size - 1);
	dest = malloc(sizeof(char) * (total + 1));
	if (dest == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (i < size)
	{
		int	k = 0;

		while (strs[i][k])
			dest[j++] = strs[i][k++];
		if (i < size - 1)
		{
			k = 0;
			while (sep[k])
				dest[j++] = sep[k++];
		}
		i++;
	}
	dest[j] = '\0';
	return (dest);
}

// int    main(void)
// {
//     char    *tab[] = {"Salut", "les", "amis"};
//     char    *res;

//     res = ft_strjoin(3, tab, "-");
//     printf("%s\n", res);
//     free(res);
//     return (0);
// }
