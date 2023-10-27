/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_x.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryosuke <ryosuke@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 01:00:01 by ryosuke           #+#    #+#             */
/*   Updated: 2023/10/27 21:33:19 by ryosuke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	count_digit16(unsigned int n)
{
	int	d;

	d = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n /= 16;
		d++;
	}
	return (d);
}

void	ft_print_x(const char **fmt, int *count, va_list *ap)
{
	int				i;
	unsigned int	n;

	n = (unsigned int)va_arg(*ap, unsigned int);
	ft_put16nbr(n, 1);
	i = count_digit16(n);
	*count += i;
	(*fmt)++;
}
