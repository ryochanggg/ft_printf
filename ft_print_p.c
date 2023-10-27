/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryosuke <ryosuke@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 02:16:24 by ryosuke           #+#    #+#             */
/*   Updated: 2023/10/27 20:49:50 by ryosuke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	count_digit16(uintptr_t n)
{
	int	d;

	d = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n *= -1;
		d++;
	}
	while (n > 0)
	{
		n /= 16;
		d++;
	}
	return (d);
}

void	ft_print_p(const char **fmt, int *count, va_list *ap)
{
	uintptr_t	n;
	int			i;

	n = (uintptr_t)va_arg(*ap, uintptr_t);
	i = ft_strlen("0x");
	*count += i;
	write(1, "0x", i);
	ft_put16nbr(n, 1);
	i = count_digit16(n);
	*count += i;
	(*fmt)++;
}
