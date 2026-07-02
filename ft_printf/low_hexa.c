/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   low_hexa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: denpolat <denpolat@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 09:17:12 by denpolat          #+#    #+#             */
/*   Updated: 2025/11/28 16:11:24 by denpolat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	hex_charl(unsigned int srch)
{
	char	c;

	if (srch <= 9)
		c = srch + '0';
	else
		c = srch - 10 + 'a';
	write (1, &c, 1);
	return (1);
}

int	low_hexa(unsigned int nbr)
{
	int	len;

	if (nbr >= 16)
	{
		len = low_hexa(nbr / 16);
		len += low_hexa(nbr % 16);
		return (len);
	}
	return (hex_charl(nbr));
}
