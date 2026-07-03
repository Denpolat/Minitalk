/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: denpolat <denpolat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 23:12:46 by denpolat          #+#    #+#             */
/*   Updated: 2025/10/20 16:24:05 by denpolat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = ft_strlen(dest);
	j = 0;
	if (i >= size)
	{
		return (size + ft_strlen(src));
	}
	while (src[j] && i + j < size - 1)
	{
		dest[i + j] = src[j];
		j++;
	}
	if (i < size)
	{
		dest[i + j] = '\0';
		return (i + ft_strlen(src));
	}
	return (i + ft_strlen(src));
}
// #include<string.h>
// #include<stdio.h>
// int main(void)
// {
// 	char src[] = "salut ";
// 	char dest[4] = {0};
// 	//printf ("%d", strlcat(dest, src, 3));
// 	printf ("%d", ft_strlcat(dest, src, 3));
// }
