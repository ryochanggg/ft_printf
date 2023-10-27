/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put16Xnbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryosuke <ryosuke@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 01:44:14 by ryosuke           #+#    #+#             */
/*   Updated: 2023/10/27 22:53:39 by ryosuke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	write_16largexnum(uintptr_t n, int fd)
{
	char	c;

	if (n == 0)
		return ;
	write_16largexnum(n / 16, fd);
	if (n % 16 < 10)
		c = n % 16 + '0';
	else
		c = n % 16 - 10 + 'A';
	ft_putchar_fd(c, fd);
}

void	ft_put16_largexnbr(uintptr_t n, int fd)
{
	if (n == 0)
	{
		ft_putchar_fd('0', fd);
		return ;
	}
	write_16largexnum(n, fd);
}
