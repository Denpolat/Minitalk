/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: denpolat <denpolat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 22:49:19 by denpolat          #+#    #+#             */
/*   Updated: 2025/10/14 22:52:17 by denpolat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*res;
	size_t	start;
	size_t	end;

	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]) != 0)
	{
		start++;
	}
	end = ft_strlen(s1);
	while (end > start && ft_strchr(set, s1[end - 1]) != 0)
	{
		end--;
	}
	res = malloc(end - start + 1);
	if (!res)
	{
		return (0);
	}
	ft_strlcpy(res, s1 + start, end - start + 1);
	res[end - start] = '\0';
	return (res);
}
// #include<stdio.h>
// int main(void)
// {
// 	const char *s1 = "salut c salut";
// 	const char *set = "salut";

// 	char *trimed = ft_strtrim(s1,set);

// 	printf ("%s", trimed);
// 	free (trimed);
// }
