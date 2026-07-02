/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bg5oo <bg5oo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 08:55:26 by denpolat          #+#    #+#             */
/*   Updated: 2025/11/30 20:25:22 by bg5oo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	convert(const char format, va_list arg)
{
	if (format == 'c')
		return (pf_putchar(va_arg(arg, int)));
	if (format == 's')
		return (pf_putstr(va_arg(arg, char *)));
	if (format == 'd' || format == 'i')
		return (pf_putnbr(va_arg(arg, int)));
	if (format == 'u')
		return (unsign(va_arg(arg, unsigned int)));
	if (format == 'x')
		return (low_hexa(va_arg(arg, unsigned int)));
	if (format == 'X')
		return (uper_hexa(va_arg(arg, unsigned int)));
	if (format == 'p')
		return (pointeur(arg));
	if (format == '%')
		return (write(1, "%", 1));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	arg;
	int		i;
	int		len;

	if (!format)
		return (-1);
	i = 0;
	len = 0;
	va_start(arg, format);
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1])
		{
			len += convert(format[i + 1], arg);
			i += 2;
		}
		else
		{
			len += write(1, &format[i], 1);
			i++;
		}
	}
	va_end(arg);
	return (len);
}
