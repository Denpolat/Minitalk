/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: denpolat <denpolat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 23:22:47 by denpolat          #+#    #+#             */
/*   Updated: 2025/10/14 23:24:44 by denpolat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dup;
	size_t	len_s;

	len_s = 0;
	len_s = ft_strlen(s);
	dup = malloc(sizeof(char) * len_s + 1);
	if (!dup)
	{
		return (0);
	}
	ft_strlcpy(dup, s, len_s + 1);
	return (dup);
}
// #include<stdio.h>
// int main(void)
// {
// 	const char *s = "amk";
// 	char *dup = ft_strdup(s);
// 	printf ("%s", dup);
// 	free (dup);
// }
