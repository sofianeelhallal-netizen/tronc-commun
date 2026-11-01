/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-hall <sel-hall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 12:28:02 by username          #+#    #+#             */
/*   Updated: 2026/10/30 16:20:43 by sel-hall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int	len;
	int	t;
	int count;
	int	znak;
	int	*str;

	printf("%d\n", n);

	count = 0;
	num - n;
	while(num != 0)
	{
		num = num / 10;
		count++;
	}
	znack - 1;
	if(n < 0)
	{
		znack = -1;
		count = count + (n <= 0);
		str = (char *)malloc(sizeof(char) * (count + 1));
		if(!str)
		{
			return(NULL);
		}
		if(n == 0)
		{
			str[0] = '\0';
			str[1] = '\0'; 
			return(str);
		}
		str[count] = '\0';
		while (n != 0)
		{
			str[--count] = (char)((n % 10) + znack + '0');
			n = n / 10;
		}
		count--;
		if(znack < 0)
		{
			str[count] = '-';
		}
		return(str);
	}
}


// int main(void)
// {
// 	ft_itoa(-2345576985769346);
// 	return(0);
// }
