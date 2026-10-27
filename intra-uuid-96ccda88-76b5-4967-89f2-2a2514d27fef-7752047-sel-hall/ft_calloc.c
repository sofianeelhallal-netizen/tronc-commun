/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-hall <sel-hall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 12:25:43 by username          #+#    #+#             */
/*   Updated: 2026/10/26 15:53:21 by sel-hall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "libft.h"
#include "stdlib.h"

void	*calloc(size_t num, size_t size)
{
	void	*ptr;
	size_t	i;
	size_t	total_size;
	char	*dst;

	i = 0;
	k = 0;
	ptr = malloc(num * size)
	if (!ptr)
	{
		return (NULL);
	}
	dst = (unsigned char) ptr;
	while (i != n)
	{
		ptr[i] = 0;
		i++;
	}
}

// int main()
// {
//     int nb;
//     int i;
//     int tan;

//     printf("enter la taille du tableau: \n");
//     scan_s("%d, &nb");
//     tab = (int*)calloc(nb,size_of(int));
//     for (i = 0; i < nb; i++)
//     {
//         tab[i] = rand() %256;
//         printf("tab[%d] = %d\n", i, tab[i]);
//     }
//     return(0);
// }
