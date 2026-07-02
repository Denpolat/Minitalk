/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   uper_hexa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bg5oo <bg5oo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 09:23:07 by denpolat          #+#    #+#             */
/*   Updated: 2025/11/30 20:31:49 by bg5oo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	up_convert(unsigned int srch)
{
	char	c;

	if (srch <= 9)
		c = srch + '0';
	else
		c = srch - 10 + 'A';
	write(1, &c, 1);
	return (1);
}

int	uper_hexa(unsigned int nbr)
{
	int	len;

	if (nbr >= 16)
	{
		len = uper_hexa(nbr / 16);
		len += uper_hexa(nbr % 16);
		return (len);
	}
	return (up_convert(nbr));
}
