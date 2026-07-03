/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: denpolat <denpolat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 00:46:07 by denpolat          #+#    #+#             */
/*   Updated: 2025/10/15 00:46:46 by denpolat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	signe;
	int	res;

	i = 0;
	signe = 1;
	res = 0;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || (nptr[i] == 32))
	{
		i++;
	}
	if ((nptr[i] == '+') || (nptr[i] == '-'))
	{
		if (nptr[i] == '-')
		{
			signe *= -1;
		}
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		res = res * 10 + (nptr[i] - '0');
		i++;
	}
	return (signe * res);
}
// #include<stdio.h>
// #include<stdlib.h>
// int main(void)
// {
// 	const char *nb = "-2147483648";
// 	//printf ("%d",atoi(nb));
// 	printf ("%d", ft_atoi(nb));
// }
