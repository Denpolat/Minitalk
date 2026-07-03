/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: denpolat <denpolat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 23:08:54 by denpolat          #+#    #+#             */
/*   Updated: 2025/10/14 23:10:12 by denpolat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t dsize)
{
	size_t	i;
	size_t	len_src;

	len_src = ft_strlen(src);
	if (dsize == 0)
	{
		return (len_src);
	}
	i = 0;
	while (i < dsize - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (len_src);
}
// #include<stdio.h>
// int main(void)
// {
// 	char const *src = "92i";
// 	char dest[5];
// 	ft_strlcpy(dest,src, 5);
// 	printf("%s",dest);
// }
