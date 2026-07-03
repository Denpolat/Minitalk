/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: denpolat <denpolat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/03 00:06:30 by denpolat          #+#    #+#             */
/*   Updated: 2026/07/03 04:43:38 by denpolat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	handler(int sig, siginfo_t *info, void *context)
{
	static unsigned char	c = 0;
	static int				bit_count = 0;

	(void)info;
	(void)context;
	c = c << 1;
	if (sig == SIGUSR2)
		c = c | 1;
	bit_count++;
	if (bit_count == 8)
	{
		write (1, &c, 1);
		c = 0;
		bit_count = 0;
	}
}

int main(void)
{
	struct sigaction sa;

	sa.sa_sigaction = handler;
	sa.sa_flags = SA_SIGINFO;
	sigemptyset(&sa.sa_mask);
	sigaction(SIGUSR1, &sa, NULL);
	sigaction(SIGUSR2, &sa, NULL);
	ft_printf("serveur PID: %d\n", getpid());
	while (1)
		pause();
	return(0);
}
