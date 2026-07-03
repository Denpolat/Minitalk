/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: denpolat <denpolat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 23:41:56 by denpolat          #+#    #+#             */
/*   Updated: 2025/10/14 23:43:41 by denpolat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*ch1;
	const unsigned char	*ch2;

	i = 0;
	ch1 = (const unsigned char *)s1;
	ch2 = (const unsigned char *)s2;
	while (i < n)
	{
		if (ch1[i] != ch2[i])
		{
			return (ch1[i] - ch2[i]);
		}
		i++;
	}
	return (0);
}
// #include<stdio.h>
// int main(void)
// {
// 	const void *s1 = "salut";
// 	const void *s2 = "saalut";
// 	printf ("%d", ft_memcmp(s1,s2,3));
// }
