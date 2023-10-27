/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_u.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryosuke <ryosuke@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 00:27:02 by ryosuke           #+#    #+#             */
/*   Updated: 2023/10/27 21:30:30 by ryosuke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	count_digit(unsigned int n)
{
	int	d;

	d = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n /= 10;
		d++;
	}
	return (d);
}

void	ft_print_u(const char **fmt, int *count, va_list *ap)
{
	int				i;
	unsigned int	n;

	n = (unsigned int)va_arg(*ap, unsigned int);
	ft_putunbr(n, 1);
	i = count_digit(n);
	*count += i;
	(*fmt)++;
}
