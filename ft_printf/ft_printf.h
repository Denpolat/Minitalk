/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                         :+:    :+:           */
/*                                                    +:+ +:+         +:+     */
/*   By: denpolat <denpolat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 10:28:45 by denpolat          #+#    #+#             */
/*   Updated: 2025/11/29 14:07:49 by denpolat       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "libft/libft.h"

int	ft_printf(const char *format, ...);
int	pf_putchar(int c);
int	pf_putstr(char *s);
int	pf_putnbr(int n);
int	pointeur(va_list arg);
int	unsign(unsigned int nbr);
int	low_hexa(unsigned int nbr);
int	uper_hexa(unsigned int nbr);

#endif
