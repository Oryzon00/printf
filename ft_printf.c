/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajung <ajung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 16:30:24 by ajung             #+#    #+#             */
/*   Updated: 2021/11/28 17:24:42 by ajung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

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
			what_var(str[i], &result, arg_list);
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

void	what_var(char c, int *result, va_list arg_list)
{
	if (c == 'c') //char
	{
		ft_putchar_fd((char)va_arg(arg_list, char), 1);
		(*result)++;
	}
	else if (c == '%')
	{
		ft_putchar_fd('%', 1);
		(*result)++;
	}
	else if (c == 's') //string
	{
		ft_putstr_fd((char *)va_arg(arg_list, char *), 1);
		(*result) += ft_strlen((const char *)va_arg(arg_list, char *)); //va_copy??
	}
	else if (c == 'p') //void * en hexa
	{
		
	}
	else if (c == 'd') //nb decimal (base 10)
	{
		
	}
	else if (c == 'i') //int (base 10)
	{
		
	}
	else if (c == 'u') //unsigned nb decimal (base 10)
	{
		
	}
	else if (c == 'x') //nb hexadecimal (base 16)
	{
		
	}
}
