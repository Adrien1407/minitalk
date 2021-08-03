/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 12:01:50 by adlancel          #+#    #+#             */
/*   Updated: 2021/08/03 13:29:56 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/minitalk.h"

int	main(int ac, char **av)
{
	struct sigaction	catch;

	(void) av;
	if (ac != 1)
		print_error("wrong number of arguments\n");
	ft_putstr("Server Started\n PID = ");
	ft_putnbr(getpid());
	write(1, "\n", 1);
	catch.sa_flags = SA_SIGINFO;
	catch.sa_sigaction = my_handler2;
	if ((sigaction(SIGUSR1, &catch, 0)) == -1)
		print_error("sigaction error\n");
	if ((sigaction(SIGUSR2, &catch, 0)) == -1)
		print_error("sigaction error\n");
	while (1)
		pause();
	return (0);
}
