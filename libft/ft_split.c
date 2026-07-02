/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: denpolat <denpolat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 16:11:15 by denpolat          #+#    #+#             */
/*   Updated: 2025/10/20 16:25:25 by denpolat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	countw(const char *s, char c);
static int	find_word(char *s, char c, char **res);
static char	**oc_free(char **res, int count);

char	**ft_split(const char *s, char c)
{
	char	**res;
	int		nbr_word;

	if (!s)
	{
		return (NULL);
	}
	nbr_word = countw(s, c);
	res = malloc((nbr_word + 1) *(sizeof(char *)));
	if (!res)
	{
		return (NULL);
	}
	if (!find_word((char *)s, c, res))
	{
		return (NULL);
	}
	res[nbr_word] = NULL;
	return (res);
}

static int	countw(const char *s, char c)
{
	int	i;
	int	count;
	int	in;

	i = 0;
	in = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c && in == 0)
		{
			count++;
			in = 1;
		}
		else if (s[i] == c)
		{
			in = 0;
		}
		i++;
	}
	return (count);
}

static int	find_word(char *s, char c, char **res)
{
	size_t	i;
	size_t	start;
	int		index_mot;

	i = 0;
	index_mot = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s)
		{
			start = i;
			while (s[i] != c && s[i])
				i++;
			if (i > start)
			{
				res[index_mot] = ft_substr(s, start, i - start);
				if (!res[index_mot])
					return (oc_free(res, index_mot), 0);
				index_mot++;
			}
		}
	}
	return (1);
}

static char	**oc_free(char **res, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		free (res[i]);
		i++;
	}
	free(res);
	return (NULL);
}
