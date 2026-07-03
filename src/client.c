/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: denpolat <denpolat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/03 03:27:20 by denpolat          #+#    #+#             */
/*   Updated: 2026/07/03 04:31:55 by denpolat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	send_char(pid_t pid, unsigned char c)
{
	int	i;
	int	ret;

	i = 7;
	while (i >= 0)
	{
		if ((c >> i) & 1)
			ret = kill(pid, SIGUSR2);
		else
			ret = kill(pid, SIGUSR1);
		if (ret == -1)
			perror("kill failed");
		usleep(100);
		i--;
	}
}

int main(int ac, char **av)
{
	pid_t	pid;
	int		i;

	if (ac != 3)
	{
		ft_putstr_fd("Error\nc ./client <pid> <message> chef\n", 2);
		return (1);
	}
	pid = ft_atoi(av[1]);
	i = 0;
	while (av[2][i])
	{
		send_char(pid, av[2][i]);
		i++;
	}
	return (0);
}