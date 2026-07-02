/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pointeur.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bg5oo <bg5oo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 09:26:12 by denpolat          #+#    #+#             */
/*   Updated: 2025/11/30 20:30:36 by bg5oo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	convert(unsigned long nbr)
{
	char	c;

	if (nbr <= 9)
		c = nbr + '0';
	else
		c = nbr - 10 + 'a';
	write (1, &c, 1);
	return (1);
}

static int	print_hex(unsigned long nbr)
{
	unsigned long	temp;
	unsigned long	div;
	unsigned long	res;
	int				len;

	if (nbr == 0)
		return (convert(0));
	temp = nbr;
	div = 1;
	while (temp >= 16)
	{
		div *= 16;
		temp /= 16;
	}
	len = 0;
	while (div > 0)
	{
		res = nbr / div;
		len += convert(res);
		nbr %= div;
		div /= 16;
	}
	return (len);
}

int	pointeur(va_list arg)
{
	unsigned long	ptr;
	int				len;

	ptr = (unsigned long)va_arg(arg, void *);
	if (!ptr)
		return (write(1, "(nil)", 5));
	len = write (1, "0x", 2);
	len += print_hex(ptr);
	return (len);
}
