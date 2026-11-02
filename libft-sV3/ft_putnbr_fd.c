/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-hall <sel-hall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 12:32:48 by username          #+#    #+#             */
/*   Updated: 2026/11/02 10:31:58 by sel-hall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	c;

	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
	}
	if (n >= 10)
		ft_putnbr_fd(n / 10, fd);
	c = n % 10 + '0';
	write(fd, &c, 1);
}

// int	main(void)
// {
// 	ft_putnbr_fd(0, 1);
// 	write(1, "\n", 1);
// 	ft_putnbr_fd(42, 1);
// 	write(1, "\n", 1);
// 	ft_putnbr_fd(-42, 1);
// 	write(1, "\n", 1);
// 	ft_putnbr_fd(INT_MAX, 1);
// 	write(1, "\n", 1);
// 	ft_putnbr_fd(INT_MIN, 1);
// 	write(1, "\n", 1);
// 	ft_putnbr_fd(123, 2);
// 	write(2, "\n", 1);
// 	return (0);
// }
