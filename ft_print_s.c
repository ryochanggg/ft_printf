/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryosuke <ryosuke@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 21:16:18 by ryosuke           #+#    #+#             */
/*   Updated: 2023/10/27 20:59:26 by ryosuke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_s(const char **fmt, int *count, va_list *ap)
{
	int		i;
	char	*s;

	s = (char *)va_arg(*ap, char *);
	if (s == NULL)
	{
		write(1, "(null)", 6);
		*count += 6;
		(*fmt)++;
		return ;
	}
	i = ft_strlen(s);
	write(1, s, i);
	*count += i;
	(*fmt)++;
}
