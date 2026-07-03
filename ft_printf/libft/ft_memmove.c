/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: denpolat <denpolat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 23:35:23 by denpolat          #+#    #+#             */
/*   Updated: 2025/10/20 15:32:46 by denpolat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;
	const char	*temp;
	char		*dd;

	temp = (const char *)src;
	dd = (char *)dest;
	i = 0;
	if (!dd && !temp)
		return (NULL);
	if (dd > temp)
	{
		i = n;
		while (i-- > 0)
			dd[i] = temp[i];
	}
	else
	{
		while (i < n)
		{
			dd[i] = temp[i];
			i++;
		}
	}
	return (dest);
}
// #include<string.h>
// #include<stdio.h>
// #include<stddef.h>
// int main(void)
// {
// 	char src[] = "salut c est greg";
// 	char dest[20] = {0};
//
// 	ft_memmove(src + 3, src, 6);
//
// 	//memmove(dest, src, sizeof(src));
//
// 	printf("%s", src);
// }
