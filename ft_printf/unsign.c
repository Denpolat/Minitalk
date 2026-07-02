/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unsign.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: denpolat <denpolat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 09:24:54 by denpolat          #+#    #+#             */
/*   Updated: 2025/11/29 13:19:28 by denpolat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	unsign(unsigned int nbr)
{
	char	c;
	int		len;

	len = 0;
	if (nbr >= 10)
	{
		len += unsign(nbr / 10);
	}
	c = nbr % 10 + '0';
	write (1, &c, 1);
	return (len + 1);
}
