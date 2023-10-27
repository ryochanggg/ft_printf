/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryosuke <ryosuke@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 00:53:52 by ryosuke           #+#    #+#             */
/*   Updated: 2023/10/27 21:05:58 by ryosuke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	write_num(unsigned int n, int fd)
{
	char	c;

	if (n == 0)
		return ;
	write_num(n / 10, fd);
	c = n % 10 + '0';
	ft_putchar_fd(c, fd);
}

void	ft_putunbr(unsigned int n, int fd)
{
	if (n == 0)
	{
		ft_putchar_fd('0', fd);
		return ;
	}
	write_num(n, fd);
}
