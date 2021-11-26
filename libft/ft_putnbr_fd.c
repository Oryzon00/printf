/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajung <ajung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 11:43:09 by ajung             #+#    #+#             */
/*   Updated: 2021/11/25 19:05:09 by ajung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	c;

	if (n == -2147483648)
		write(fd, "-2147483648", 11);
	else
	{
		if (n < 0)
		{
			n = -n;
			ft_putchar_fd('-', fd);
		}
		if (n < 10)
		{
			c = n % 10 + '0';
			ft_putchar_fd(c, fd);
		}
		else
		{
			c = n % 10 + '0';
			n = n / 10;
			ft_putnbr_fd(n, fd);
			ft_putchar_fd(c, fd);
		}
	}
}
