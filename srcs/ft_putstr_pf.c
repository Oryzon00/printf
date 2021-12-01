/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajung <ajung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 18:38:11 by ajung             #+#    #+#             */
/*   Updated: 2021/12/01 15:44:31 by ajung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_putstr_pf(char *s)
{
	int	i;
	int	len_str;

	if (!s)
	{
		write(1, "(null)", 6);
		return (6);
	}
	len_str = 0;
	if (!s)
		return (0);
	i = 0;
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
		len_str++;
	}
	return (len_str);
}
