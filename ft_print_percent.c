/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_percent.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmatsush <rmatsush@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 01:45:40 by ryosuke           #+#    #+#             */
/*   Updated: 2023/10/27 23:10:46 by rmatsush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_percent(const char **fmt, int *count, va_list *ap)
{
	(void)ap;
	write(1, "%", 1);
	(*count)++;
	(*fmt)++;
}
