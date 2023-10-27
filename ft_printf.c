/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryosuke <ryosuke@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 17:16:17 by ryosuke           #+#    #+#             */
/*   Updated: 2023/10/27 22:53:24 by ryosuke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	check_percent(const char **fmt, int *count, va_list *ap, int *flag)
{
	(*fmt)++;
	if (**fmt == 'c')
		ft_print_c(fmt, count, ap);
	else if (**fmt == 's')
		ft_print_s(fmt, count, ap);
	else if (**fmt == 'p')
		ft_print_p(fmt, count, ap);
	else if (**fmt == 'd' || **fmt == 'i')
		ft_print_di(fmt, count, ap);
	else if (**fmt == 'u')
		ft_print_u(fmt, count, ap);
	else if (**fmt == 'x')
		ft_print_x(fmt, count, ap);
	else if (**fmt == 'X')
		ft_print_largex(fmt, count, ap);
	else if (**fmt == '%')
		ft_print_percent(fmt, count, ap);
	else
		*flag = 1;
}

void	print_string(const char **fmt, const char **start, int *count)
{
	int	i;

	i = 0;
	while (**fmt != '%' && **fmt != '\0')
	{
		(*fmt)++;
		i++;
	}
	write(1, *start, i);
	*count += i;
}

int	ft_printf(const char *fmt, ...)
{
	va_list		ap;
	int			count;
	int			flag;
	const char	*start;

	va_start(ap, fmt);
	count = 0;
	flag = 0;
	if (fmt == NULL)
		count = -1;
	while (*fmt != '\0' && count >= 0 && flag == 0)
	{
		start = fmt;
		if (*start == '%')
			check_percent(&fmt, &count, &ap, &flag);
		else
			print_string(&fmt, &start, &count);
	}
	va_end(ap);
	return (count);
}

// int main(void)
// {
// 	int count1;
// 	int count2;

// 	count1 = ft_printf("");
// 	count2 = printf("%p", __LONG_MAX__);
// 	printf("count1 %d count2 %d\n", count1, count2);
// }