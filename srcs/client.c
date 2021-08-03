/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 11:35:25 by adlancel          #+#    #+#             */
/*   Updated: 2021/08/03 13:29:44 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/minitalk.h"

int	main(int ac, char **av)
{
	struct sigaction	catch;

	catch.sa_flags = SA_SIGINFO;
	catch.sa_sigaction = my_handler;
	if (sigaction(SIGUSR2, &catch, 0) == -1)
		print_error("sigaction error\n");
	if (ac != 3)
		print_error("wrong number of arguments\n");
	else
		send_message(atoi(av[1]), av[2]);
	while (1)
		pause();
	return (0);
}
