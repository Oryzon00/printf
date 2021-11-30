/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrbase_pf.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajung <ajung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 14:07:02 by ajung             #+#    #+#             */
/*   Updated: 2021/11/30 15:54:09 by ajung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../printf.h"

int	ft_putnbrbase_pf (unsigned int nb)
{
	int		output;

	output = 0;
	if (nb < 10)
	{
		ft_putchar_pf(nb + '0');
		output++;
	}
	else if (nb < 16)
	{
		ft_putchar_pf(nb + 'a' - 10);
		output ++;
	}
	else
	{
		output += ft_putnbrbase_pf(nb / 16);
		output += ft_putnbrbase_pf(nb % 16);
	}
	return (output);
}

int	ft_putnbrBASE_pf (unsigned int nb)
{
	int		output;

	output = 0;
	if (nb < 10)
	{
		ft_putchar_pf(nb + '0');
		output++;
	}
	else if (nb < 16)
	{
		ft_putchar_pf(nb + 'A' - 10);
		output ++;
	}
	else
	{
		output += ft_putnbrbase_pf(nb / 16);
		output += ft_putnbrbase_pf(nb % 16);
	}
	return (output);
}