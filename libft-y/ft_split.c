/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-hall <sel-hall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 15:49:38 by username          #+#    #+#             */
/*   Updated: 2026/10/30 16:22:50 by sel-hall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	int	count;
	int	in_words;

	count = 0;
	in_words = 0;
	while (*s)
	{
		if (*s != c && in_words == 0)
		{
			count++;
			in_words = 1;
		}
		else if (*s == c)
		{
			in_words = 0;
		}
		s++;
	}
	return (count);
}

int	word_cut(char *str, int i)
{
	int	k;

	k = 0;
	while (str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
	{
		i++;
		k++;
	}
	return (k);
}

char	**ft_split(const char *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**tab;

	tab = (char **) malloc(count_words(s, c) + 1 * sizeof(char *));
	if (!tab)
	{
		return (NULL);
	}
	i = 0;
	j = 0;
	while (s[i] == '\0')
	{
		k = 0;
		while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
			i++;
		if (s[i])
		{
			tab[j] = (char *) malloc((word_cut("Salut salut", 2) + 1) * sizeof(char));
			if (!tab[j])
			{
				return (NULL);
			}
			while (s[i] && s[i] != ' ' && s[i] != '\t' && s[i] != '\n')
			{
				tab[j][k] = s[i];
				i++;
				k++;
			}
			tab[j][k] = '\0';
			j++;
		}
	}
	tab[j] = NULL;
	return (tab);
}

// int	main(void)
// {
// 	char	**tab;
// 	int		i;

// 	tab = ft_split("Hello world 42", ' ');
// 	i = 0;
// 	while (tab[i])
// 	{
// 		printf("%s\n", tab[i]);
// 		i++;
// 	}
// 	return (0);
// }
