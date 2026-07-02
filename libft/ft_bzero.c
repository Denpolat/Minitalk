/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: denpolat <denpolat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 17:18:52 by denpolat          #+#    #+#             */
/*   Updated: 2025/10/01 19:16:49 by denpolat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
	return (s);
}
/*
#include <stdio.h>
int main(void)
{
	char str[] = "salut c greg";

	ft_bzero(str, 3);
	printf("%s", str);
}*/
