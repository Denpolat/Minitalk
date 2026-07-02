/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: denpolat <denpolat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 00:34:20 by denpolat          #+#    #+#             */
/*   Updated: 2025/10/19 18:16:39 by denpolat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int nbr, int fd)
{
	char	c;

	if (nbr == -2147483648)
	{
		write (fd, "-2147483648", 11);
		return ;
	}
	if (nbr < 0)
	{
		nbr = -1 * nbr;
		write (fd, "-", 1);
	}
	if (nbr >= 10)
	{
		ft_putnbr_fd(nbr / 10, fd);
	}
	c = nbr % 10 + '0';
	write (fd, &c, 1);
}
