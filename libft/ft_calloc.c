/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: denpolat <denpolat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 00:40:44 by denpolat          #+#    #+#             */
/*   Updated: 2025/10/20 15:52:18 by denpolat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t memt, size_t size)
{
	void			*rent;
	size_t			total_size;

	if (memt == 0 || size == 0)
	{
		rent = malloc(0);
		if (!rent)
		{
			return (0);
		}
		*((unsigned char *)rent) = 0;
		return (rent);
	}
	total_size = memt * size;
	rent = malloc(total_size);
	if (!rent)
		return (0);
	ft_memset(rent, 0, total_size);
	return (rent);
}
// #include<stddef.h>
// #include<stdlib.h>
// #include<stdio.h>
// int main(void)
// {
// 	int *tab = ft_calloc(20, sizeof(int));
// 	printf ("%d", *tab);
// 	free (tab);
// }
