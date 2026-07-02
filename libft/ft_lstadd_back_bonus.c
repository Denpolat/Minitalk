/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: denpolat <denpolat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 17:38:18 by denpolat          #+#    #+#             */
/*   Updated: 2025/10/20 15:31:05 by denpolat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	last = ft_lstlast(*lst);
	if (!lst || !new)
		return ;
	if (!last)
	{
		*lst = new;
		return ;
	}
	last->next = new;
}
/*
int main()
{
	t_list *n1 = ft_lstnew("un");
	t_list *list = NULL;

	ft_lstadd_back(&list, n1);
	printf ("%s\n", (char *)list->content);
	free(n1);
}*/
