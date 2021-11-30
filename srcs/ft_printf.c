/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajung <ajung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 16:30:24 by ajung             #+#    #+#             */
/*   Updated: 2021/11/29 18:19:52 by ajung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	arg_list;
	int		i;
	int		result;

	va_start(arg_list, str);
	i = 0;
	result = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			result += what_var(str[i], arg_list);
		}
		else
		{
			ft_putchar_pf(str[i]);
			result++;
		}
		i++;
	}
	va_end(arg_list);
	return (result);
}

int	what_var(char c, va_list arg_list)
{
	if (c == 'c')
		return (ft_putchar_pf((char)va_arg(arg_list, int)));
	else if (c == '%')
		return (ft_putchar_pf('%'));
	else if (c == 's')
		return (ft_putstr_pf(va_arg(arg_list, char * )));
	else if (c == 'p') //void * en hexa
	{
		
	}
	else if (c == 'i' || c == 'd')
		return (ft_putnbr_pf(va_arg(arg_list, int)));
	else if (c == 'u')
		return(ft_uputnbr_pf(va_arg(arg_list, unsigned int)));
	else if (c == 'x') //nb hexadecimal (base 16)
	{
		
	}
	else if (c == 'X') //nb hexa en MAJ
	{
		
	}
	return (0);
}
