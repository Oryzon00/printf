/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajung <ajung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 16:28:31 by ajung             #+#    #+#             */
/*   Updated: 2021/11/30 16:38:20 by ajung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

int		what_var(char c, va_list arg_list);
int		ft_printf(const char *str, ...);
int		ft_putnbr_pf(int n);
int		ft_uputnbr_pf(unsigned int n);
int		ft_putstr_pf(char *s);
int		ft_putchar_pf(char c);
int		ft_putnbrbase_pf (unsigned int nb);
int		ft_putnbrBASE_pf (unsigned int nb);
int		ft_putnbrlgbase_pf (unsigned long nb);
#endif