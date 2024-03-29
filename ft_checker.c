/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checker.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-haib <ael-haib@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 03:13:30 by ael-haib          #+#    #+#             */
/*   Updated: 2024/03/29 11:21:04 by ael-haib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_checker(char c, va_list ptr)
{
	int	j;

	j = 0;
	if (c == 'd' || c == 'i')
		j += ft_putnbr(va_arg(ptr, int));
	else if (c == 'u')
		j += ft_put_unsigned_nbr(va_arg(ptr, unsigned int));
	else if (c == 'x' || c == 'X')
		j += ft_put_hexa_base(va_arg(ptr, unsigned int), c);
	else if (c == 's')
		j += ft_putstr(va_arg(ptr, char *));
	else if (c == 'c')
		j += ft_putchar(va_arg(ptr, int));
	else if (c == 'p')
		j += ft_put_add(va_arg(ptr, void *));
	else
		j += ft_putchar(c);
	return (j);
}
