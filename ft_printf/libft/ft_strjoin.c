/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: denpolat <denpolat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 23:15:42 by denpolat          #+#    #+#             */
/*   Updated: 2025/10/14 23:18:07 by denpolat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*res;
	size_t	len_total;

	len_total = ft_strlen(s1) + ft_strlen(s2);
	res = malloc(len_total + 1);
	if (!res)
	{
		return (0);
	}
	ft_strlcpy(res, s1, ft_strlen(s1) + 1);
	ft_strlcat(res, s2, len_total + 1);
	return (res);
}
// #include<stdio.h>
// int main(void)
// {
// 	const char *s1 = "je te ";
// 	const char *s2 = "sikmek";
// 	char *join = ft_strjoin(s1, s2);
// 	printf ("%s", join);
// 	free (join);
// }
