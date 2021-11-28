/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pustr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajung <ajung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 18:38:11 by ajung             #+#    #+#             */
/*   Updated: 2021/11/28 18:43:12 by ajung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../printf.h"

int	ft_putstr_pf(char *s)
{
	int	i;
	int	len_str;

	len_str = 0;
	if (!s)
		return ;
	i = 0;
	while (s[i])
	{
		write(1, s[i], 1);
		i++;
		len_str++;
	}
	return (len_str);
}