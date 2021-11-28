/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajung <ajung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 16:28:31 by ajung             #+#    #+#             */
/*   Updated: 2021/11/28 19:56:14 by ajung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>

void	what_var(char c, int *result, va_list arg_list);
int		ft_printf(const char *str, ...);
int		ft_putnbr_pf(int n);
int		ft_putstr_pf(char *s);
#endif