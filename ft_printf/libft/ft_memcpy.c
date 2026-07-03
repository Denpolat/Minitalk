/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: denpolat <denpolat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 02:58:25 by denpolat          #+#    #+#             */
/*   Updated: 2025/10/19 19:27:05 by denpolat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*bb;
	char	*ss;

	i = 0;
	if (dest == NULL && src == NULL)
		return (NULL);
	bb = (char *)dest;
	ss = (char *)src;
	while (i < n)
	{
		bb[i] = ss[i];
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>
int main(void)
{
	 char src[6] = "salut";
	 char dest[10] = "";

	 ft_memcpy(dest, src, 5);
	 printf ("%s", dest);

}*/
