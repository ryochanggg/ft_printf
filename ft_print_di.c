/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_di.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryosuke <ryosuke@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 20:58:51 by ryosuke           #+#    #+#             */
/*   Updated: 2023/10/27 21:44:31 by ryosuke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	count_digit(int n)
{
	long	num;
	int		d;

	num = (long)n;
	d = 0;
	if (num == 0)
		return (1);
	if (num < 0)
	{
		num *= -1;
		d++;
	}
	while (num > 0)
	{
		num /= 10;
		d++;
	}
	return (d);
}

void	ft_print_di(const char **fmt, int *count, va_list *ap)
{
	int	i;
	int	n;

	n = (int)va_arg(*ap, int);
	ft_putnbr_fd(n, 1);
	i = count_digit(n);
	*count += i;
	(*fmt)++;
}
