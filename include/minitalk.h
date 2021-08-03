/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlancel <adlancel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 13:30:16 by adlancel          #+#    #+#             */
/*   Updated: 2021/08/03 13:30:35 by adlancel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include <signal.h>
# include <unistd.h>
# include <stdlib.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	print_error(char *error);
void	char_to_bin(char c, int power, int pid);
void	bin_to_char(int bin);
void	my_handler(int signum, siginfo_t *siginfo, void *unused);
void	my_handler2(int signum, siginfo_t *siginfo, void *unused);
void	send_message(int pid, char *msg);
void	ft_putnbr(int n);
#endif
