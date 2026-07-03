/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: denpolat <denpolat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 22:01:06 by denpolat          #+#    #+#             */
/*   Updated: 2025/10/19 22:14:42 by denpolat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	oc_len(int n);

char	*ft_itoa(int n)
{
	char	*res;
	int		len;
	long	nbr;

	nbr = n;
	len = oc_len(nbr);
	res = malloc(len + 1);
	if (!res)
		return (NULL);
	res[len] = '\0';
	if (nbr == 0)
		res[0] = '0';
	else if (nbr < 0)
	{
		res[0] = '-';
		nbr = -nbr;
	}
	while (nbr != 0)
	{
		res[--len] = (nbr % 10) + '0';
		nbr = nbr / 10;
	}
	return (res);
}

static int	oc_len(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
	{
		len++;
	}
	while (n != 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}
