/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   send_message.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 11:51:42 by adlancel          #+#    #+#             */
/*   Updated: 2021/08/03 13:26:12 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/minitalk.h"

void	send_message(int pid, char *message)
{
	int	i;

	i = -1;
	while (message[++i] != '\0')
		char_to_bin(message[i], 7, pid);
}
