/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajung <ajung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 19:26:04 by ajung             #+#    #+#             */
/*   Updated: 2021/11/28 19:54:14 by ajung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../printf.h"
static int	is_int_min(int	n);

int	ft_putnbr_pf(int n)
{
	int		output;

	output = 0;
	if (n == -2147483648)
		return (is_int_min(n));
	if (n < 0)
	{
		n = -n;
		ft_putchar_fd('-', 1);
		output++;
	}
	if (n < 10)
	{
		ft_putchar_fd(n + '0', 1);
		output++;
	}
	else
	{
		output += ft_putnbr_pf(n / 10);
		output += ft_putnbr_pf(n % 10);
		
	}
	return (output);
}

static int	is_int_min(int	n)
{
	write(1, "-2147483648", 11);
	return (11);
}