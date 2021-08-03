/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char_to_bin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 11:56:04 by adlancel          #+#    #+#             */
/*   Updated: 2021/08/03 13:18:06 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/minitalk.h"

void	char_to_bin(char c, int power, int pid)
{
	if (power > 0)
		char_to_bin(c / 2, power - 1, pid);
	if ((c % 2) == 1)
	{
		if (kill(pid, SIGUSR1) == -1)
		{
			print_error("Signal Error \n");
			exit(0);
		}
	}
	else
	{
		if (kill(pid, SIGUSR2) == -1)
		{
			print_error("Signal Error \n");
			exit(0);
		}
	}
	usleep(100);
}
