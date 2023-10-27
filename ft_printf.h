/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmatsush <rmatsush@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 02:09:42 by ryosuke           #+#    #+#             */
/*   Updated: 2023/10/27 23:07:54 by rmatsush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>
# include <stdint.h>

int		ft_printf(const char *fmt, ...);
void	ft_print_c(const char **fmt, int *count, va_list *ap);
void	ft_print_di(const char **fmt, int *count, va_list *ap);
void	ft_print_largex(const char **fmt, int *count, va_list *ap);
void	ft_print_percent(const char **fmt, int *count, va_list *ap);
void	ft_print_p(const char **fmt, int *count, va_list *ap);
void	ft_print_s(const char **fmt, int *count, va_list *ap);
void	ft_print_u(const char **fmt, int *count, va_list *ap);
void	ft_print_x(const char **fmt, int *count, va_list *ap);
void	ft_put16nbr(uintptr_t n, int fd);
void	ft_put16_largexnbr(uintptr_t n, int fd);
void	ft_putchar_fd(char c, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putunbr(unsigned int n, int fd);
int		ft_strlen(const char *s);

#endif