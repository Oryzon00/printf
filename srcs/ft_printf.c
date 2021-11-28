/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajung <ajung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 16:30:24 by ajung             #+#    #+#             */
/*   Updated: 2021/11/28 19:56:13 by ajung            ###   ########.fr       */
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
			result += what_var(str[i], &result, arg_list);
		}
		else
		{
			ft_putchar_fd(str[i], 1);
			result++;
		}
		i++;
	}
	va_end(arg_list);
	return (result);
}

int	what_var(char c, int *result, va_list arg_list)
{
	if (c == 'c') //char
		return (ft_putchar_fd((char)va_arg(arg_list, int), 1));
	else if (c == '%')
	{
		ft_putchar_fd('%', 1);
		return (1);
	}
	else if (c == 's') //string
		return (ft_putstr_pf(va_arg(arg_list, char * )));
	else if (c == 'p') //void * en hexa
	{
		
	}
	else if (c == 'd') //nb decimal (base 10)
	{
		
	}
	else if (c == 'i') //int (base 10)
	{
		return (ft_putnbr_pf(va_arg(arg_list, int)));
	}
	else if (c == 'u') //unsigned nb decimal (base 10)
	{
		
	}
	else if (c == 'x') //nb hexadecimal (base 16)
	{
		
	}
	return (0);
}
