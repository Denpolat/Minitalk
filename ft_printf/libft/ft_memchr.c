/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: denpolat <denpolat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 23:47:15 by denpolat          #+#    #+#             */
/*   Updated: 2025/10/20 15:31:43 by denpolat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	ch;

	i = 0;
	str = (unsigned char *)s;
	ch = (unsigned char)c;
	while (i < n)
	{
		if (str[i] == ch)
		{
			return (&str[i]);
		}
		i++;
	}
	return (0);
}
// #include<stdio.h>
// int main(void)
// {
// 	char s[] = "ez";
// 	printf ("%s", (char *)ft_memchr(s,122, 2));
// }
