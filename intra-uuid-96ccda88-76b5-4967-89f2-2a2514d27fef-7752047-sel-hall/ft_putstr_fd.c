/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-hall <sel-hall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 12:34:46 by username          #+#    #+#             */
/*   Updated: 2026/10/27 11:30:36 by sel-hall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char *s, int fd)
{
	int	a;

	a = 0;
	while (s[a])
	{
		write(fd, &s[a], 1);
		a++;
	}
}

// int	main(void)
// {
// 	ft_putstr("Salut", 1);
// 	return (0);
// }
