/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: denpolat <denpolat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 10:55:30 by denpolat          #+#    #+#             */
/*   Updated: 2025/11/29 13:17:59 by denpolat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	pf_putchar(int c)
{
	ft_putchar_fd(c, 1);
	return (1);
}

int	pf_putstr(char *s)
{
	int	len;

	if (!s)
		return (write(1, "(null)", 6));
	len = ft_strlen(s);
	ft_putstr_fd(s, 1);
	return (len);
}

int	pf_putnbr(int n)
{
	char	*s;
	int		len;

	s = ft_itoa(n);
	if (!s)
		return (0);
	len = ft_strlen(s);
	ft_putstr_fd(s, 1);
	free(s);
	return (len);
}
