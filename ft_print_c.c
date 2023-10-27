/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_c.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryosuke <ryosuke@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 19:55:12 by ryosuke           #+#    #+#             */
/*   Updated: 2023/10/27 20:37:01 by ryosuke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_c(const char **fmt, int *count, va_list *ap)
{
	char	c;

	c = (char)va_arg(*ap, int);
	write(1, &c, 1);
	(*count)++;
	(*fmt)++;
}
