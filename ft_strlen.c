/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryosuke <ryosuke@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 19:26:00 by ryosuke           #+#    #+#             */
/*   Updated: 2023/10/27 20:38:31 by ryosuke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_strlen(const char *s)
{
	int	n;

	n = 0;
	while (*s++ != '\0')
		n++;
	return (n);
}

// #include <stdio.h>
// int	main(){
// 	printf("%zu", ft_strlen("sdfg"));
// 	printf("\n");
// 	printf("%zu", ft_strlen(""));
// 	printf("\n");
// 	printf("%zu", ft_strlen("sdfg456tyhj"));
// 	printf("\n");
// }