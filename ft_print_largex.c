/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_largex.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryosuke <ryosuke@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 01:42:20 by ryosuke           #+#    #+#             */
/*   Updated: 2023/10/27 22:53:36 by ryosuke          ###   ########.fr       */
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

void	ft_print_largex(const char **fmt, int *count, va_list *ap)
{
	int				i;
	unsigned int	n;

	n = (unsigned int)va_arg(*ap, unsigned int);
	ft_put16largexnbr(n, 1);
	i = count_digit16(n);
	*count += i;
	(*fmt)++;
}
