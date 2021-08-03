/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_handler.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 11:48:36 by adlancel          #+#    #+#             */
/*   Updated: 2021/08/03 13:18:58 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/minitalk.h"

void	my_handler(int signum, siginfo_t *siginfo, void *unused)
{
	(void) signum;
	(void) siginfo;
	(void) unused;
	ft_putstr("Server received the signal\n");
}
