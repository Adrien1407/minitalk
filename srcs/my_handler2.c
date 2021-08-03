/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_handler2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 12:17:57 by adlancel          #+#    #+#             */
/*   Updated: 2021/08/03 13:18:26 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/minitalk.h"

void	my_handler2(int signum, siginfo_t *siginfo, void *unused)
{
	static int	c = 0;
	static int	power = 0;

	(void) *unused;
	if (signum == SIGUSR1)
		c += 1 << (7 - power);
	power++;
	if (power == 8)
	{
		ft_putchar(c);
		power = 0;
		c = 0;
		if (kill(siginfo->si_pid, SIGUSR2) == -1)
			print_error("Signal error\n");
	}
}
