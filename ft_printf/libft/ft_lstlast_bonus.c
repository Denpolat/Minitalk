/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: denpolat <denpolat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 19:36:27 by denpolat          #+#    #+#             */
/*   Updated: 2025/10/19 18:20:43 by denpolat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*tmp;

	if (!lst)
		return (NULL);
	tmp = lst;
	while (tmp->next)
	{
		tmp = tmp->next;
	}
	return (tmp);
}
/*int	main()
{
	t_list	*a = ft_lstnew("koi");
	t_list	*b = ft_lstnew("kou");
	t_list	*c = ft_lstnew("beh");

	a->next = b;
	b->next = c;

	t_list	*last = ft_lstlast(a);

	if (last)
		printf("%s\n", (char *)last->content);
	free(a);
	free(b);
	free(c);
	//return(0);

}*/
